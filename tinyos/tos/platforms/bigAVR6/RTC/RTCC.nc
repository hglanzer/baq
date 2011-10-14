/**
 * @author Markus Hartmann e988811@student.tuwien.ac.at
 */

configuration  RTCC{
  provides interface RTC;
}
implementation{
  components RTCP;
  components new Atm128I2CMasterC() as I2CMaster;

  RTC = RTCP;
  RTCP.I2C -> I2CMaster;
  RTCP.I2CPacket -> I2CMaster;
}
