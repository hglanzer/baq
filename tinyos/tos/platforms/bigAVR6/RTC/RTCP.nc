/**
 * @author Markus Hartmann e988811@student.tuwien.ac.at
 */

#include "RTC.h"

module RTCP{
  uses interface Resource as I2C; 
  uses interface I2CPacket<TI2CBasicAddr>;
  provides interface RTC;
}
implementation{
  typedef uint8_t rtcState_t;
  enum rtcState_t{ RTC_BUSY, RTC_READING, RTC_READY };

  /* must be static d/t switch from async/sync */
  static rtc_time_t *time_ptr;
  
  static rtcState_t state = RTC_READY;
  static uint8_t i2cBuffer[8];

  command error_t RTC.control( rtc_flags_t flags ){
    atomic {
      if ( state != RTC_READY ){
	return FAIL;
      }
      state = RTC_BUSY;
    }
    i2cBuffer[0] = RTC_CONTROL;
    i2cBuffer[1] = flags;
    if ( call I2C.immediateRequest() == SUCCESS ){
      return call I2CPacket.write( I2C_START|I2C_STOP, (RTC_I2C_ADDRESS >> 1), 2, i2cBuffer );
    } else {
      return FAIL;
    }
  }

  command error_t RTC.start( rtc_time_t *data ){
    uint8_t temp;
    atomic {
      if ( state != RTC_READY ){
	return FAIL;
      }
      state = RTC_BUSY;
    }

    if ( call I2C.immediateRequest() == SUCCESS ){    
      i2cBuffer[0] = RTC_SECONDS;
      if ( data == NULL ){
	i2cBuffer[1] = 0x00;
	return call I2CPacket.write( I2C_START|I2C_STOP, (RTC_I2C_ADDRESS >> 1), 2, i2cBuffer );
      } else {
	/* fill time */
	for ( temp = 1; temp < 8; temp++ ){
	  i2cBuffer[temp] = 0;
	}
	temp = data->seconds;
	while (  temp >= 10 && i2cBuffer[1] < 59 ){
	  i2cBuffer[1] += 1;
	  temp -= 10;
	}
	i2cBuffer[1] <<= 4;
	i2cBuffer[1] += temp;

	temp = data->minutes;
	while (  temp >= 10 && i2cBuffer[2] < 59 ){
	  i2cBuffer[2] += 1;
	  temp -= 10;
	}
	i2cBuffer[2] <<= 4;
	i2cBuffer[2] += temp;

	temp = data->hours;
	while (  temp >= 10 && i2cBuffer[3] < 30 ){
	  i2cBuffer[3] += 1;
	  temp -= 10;
	}
	i2cBuffer[3] <<= 4;
	i2cBuffer[3] += temp;

	i2cBuffer[4] = data->day;

	temp = data->date;
	while (  temp >= 10 && i2cBuffer[5] < 30 ){
	  i2cBuffer[5] += 1;
	  temp -= 10;
	}
	i2cBuffer[5] <<= 4;
	i2cBuffer[5] += temp;

	if ( data->month > 9 ){
	  i2cBuffer[6] |= (1<<4);
	  i2cBuffer[6] += (data->month-10);
	} else {
	  i2cBuffer[6] = data->month;
	}

	temp = data->year;
	while (  temp >= 10 && i2cBuffer[7] < 100 ){
	  i2cBuffer[7] += 1;
	  temp -= 10;
	}
	i2cBuffer[7] <<= 4;
	i2cBuffer[7] += temp;

	return call I2CPacket.write( I2C_START|I2C_STOP, (RTC_I2C_ADDRESS >> 1), 8, i2cBuffer );
      }
    } else {
      return FAIL;
    }
    
  }

  command error_t RTC.stop( void ){
    atomic {
      if ( state != RTC_READY ){
	return FAIL;
      }
      state = RTC_BUSY;
    }
    i2cBuffer[0] = RTC_SECONDS;
    i2cBuffer[1] = 0x80;
    if ( call I2C.immediateRequest() == SUCCESS ){
      return call I2CPacket.write( I2C_START|I2C_STOP, (RTC_I2C_ADDRESS >> 1), 2, i2cBuffer );
    } else {
      return FAIL;
    }
  }

  command error_t RTC.readTime(rtc_time_t *rdata){ 
    atomic {
      if ( state != RTC_READY ){
	return FAIL;
      }
      state = RTC_READING;
      time_ptr = rdata;
    }
    i2cBuffer[0] = RTC_SECONDS;
    if ( call I2C.immediateRequest() == SUCCESS ){
      return call I2CPacket.write( I2C_START|I2C_STOP, (RTC_I2C_ADDRESS >> 1), 1, &i2cBuffer[0] );
    } else {
      return FAIL;
    }
  }

  event void I2C.granted(){
  }
   
  async event void I2CPacket.writeDone(error_t error, uint16_t addr, uint8_t length, uint8_t* rdata){
    if ( state != RTC_READING ){
      call I2C.release();
      state = RTC_READY;
    } else {
      call I2CPacket.read( I2C_START|I2C_STOP, (RTC_I2C_ADDRESS >> 1), 7, &i2cBuffer[0] );
    }
    
  }

  task void sigRead(){
    signal RTC.timeReady( time_ptr );  
  }

  async event void I2CPacket.readDone(error_t error, uint16_t addr, uint8_t length, uint8_t* rdata){

    time_ptr->seconds = rdata[0];
    time_ptr->seconds &= 0x0F;
    time_ptr->seconds += ( ((rdata[0] & 0x70) >> 4) * 10 );

    time_ptr->minutes = rdata[1];
    time_ptr->minutes &= 0x0F;
    time_ptr->minutes += ( ((rdata[1] & 0x70) >> 4) * 10 );

    time_ptr->hours = rdata[2];
    time_ptr->hours &= 0x0F;
    if ( rdata[2] & 0x10 ){
      time_ptr->hours += 10;
    }
    if ( rdata[2] & 0x20 ){
      /* PM */
      if ( rdata[2] & 0x40 ){
	/* 12 hour mode */
	time_ptr->hours += 12;
      } else {
	/* 24 hour mode */
	time_ptr->hours += 20;
      }
    }

    time_ptr->day = rdata[3];
    time_ptr->day &= 0x07;

    time_ptr->date = rdata[4];
    time_ptr->date &= 0x0F;
    time_ptr->date += ( ((rdata[4] & 0x30) >> 4) * 10 );

    time_ptr->month = rdata[5];
    time_ptr->month &= 0x0F;
    time_ptr->month += ( ((rdata[5] & 0x10) >> 4) * 10 );

    time_ptr->year = rdata[6];
    time_ptr->year &= 0x0F;
    time_ptr->year += ( ((rdata[6] & 0xF0) >> 4) * 10 );
    
    state = RTC_READY;
    
    call I2C.release();
    post sigRead();
  }  
}
