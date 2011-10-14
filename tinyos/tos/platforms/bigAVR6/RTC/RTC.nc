/**
 * @author Markus Hartmann e988811@student.tuwien.ac.at
 */

#include "RTC.h"
interface RTC{

  /**
   * Starts the Realtime Clock
   *
   * @param data Starts the Clock, setting date/time
   *              If NULL is passed, the clock is started with the seconds set to 0 
   *              All other settings are left untouched     
   *
   * @return SUCCESS if bus available and request accepted. 
   */
  command error_t start( rtc_time_t *data );

  /**
   * Stops the Realtime Clock - The seconds are set to 0
   *
   * @return SUCCESS if bus available and request accepted. 
   */
  command error_t stop( void );

  /**
   * Read time
   *
   * @param data A point to a data buffer where the results will be stored
   *
   * @return SUCCESS if bus available and request accepted. 
   */
  command error_t readTime( rtc_time_t *data );

  /**
   * Notification that the results are ready
   *
   * @param data A point to the data buffer where the results are stored
   */
  event void timeReady( rtc_time_t *data );

  /**
   * Control the Squarewave output
   *
   * @param flags Flags that may be logical ORed and defined by:
   *    RTC_OUT     - Output is set to RTC_OUT when RTC_SQWE is disabeled
   *    RTC_SQWE    - Enable/Disable squarewave output
   *    RTC_1HZ, RTC_4KHZ, RTC_8KHZ, RTC_32KHZ } - set output frequency
   *
   * @return SUCCESS if bus available and request accepted. 
   */
  command error_t control( rtc_flags_t flags );
}
