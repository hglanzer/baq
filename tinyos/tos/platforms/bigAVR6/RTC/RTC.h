/**
 * @author Markus Hartmann e988811@student.tuwien.ac.at
 */

#ifndef RTC_H
#define RTC_H

typedef struct {
  uint8_t seconds;
  uint8_t minutes;
  uint8_t hours;
  uint8_t day;
  uint8_t date;
  uint8_t month;
  uint8_t year;
} rtc_time_t;

typedef uint8_t rtc_flags_t;

enum {
  RTC_OUT = 128,
  RTC_SQWE = 16,
  RTC_1HZ = 0,
  RTC_4KHZ = 1,
  RTC_8KHZ = 2,
  RTC_32KHZ = 3
};

enum { RTC_I2C_ADDRESS = 0xD0 };

enum { RTC_CH_BIT = 7 };

/* RTC_DEFAULT_REGISTER only used to signal standard state when using readRegister */
enum { RTC_SECONDS,
       RTC_MINUTES,
       RTC_HOURS,
       RTC_DAY,
       RTC_DATE,
       RTC_MONTH,
       RTC_YEAR,
       RTC_CONTROL };

enum { RTC_CTRL_RS0,
       RTC_CTRL_RS1,
       RTC_CTRL_SQWE,
       RTC_CTRL_OUT };

typedef enum {
  RTC_SQW_1HZ,
  RTC_SQW_4KHZ,
  RTC_SQW_8KHZ,
  RTC_SQW_32KHZ
} sqw_frequ_t;

#endif
