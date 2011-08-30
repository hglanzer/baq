interface OneWire{

  command void init( void );

  event void initDone( error_t msg );

}
