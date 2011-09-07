#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 152 "/opt/tinyos-2.x/sys/lib/gcc/avr/4.1.2/include/stddef.h" 3
typedef int ptrdiff_t;
#line 214
typedef unsigned int size_t;
#line 326
typedef int wchar_t;
# 8 "/opt/tinyos-2.x/sys/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
}  ;
#line 14
struct __nesc_attr_one_nok {
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
}  ;
# 121 "/opt/tinyos-2.x/sys/lib/gcc/avr/4.1.2/../../../../avr/include/stdint.h" 3
typedef int int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int uint8_t __attribute((__mode__(__QI__))) ;
typedef int int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int uint16_t __attribute((__mode__(__HI__))) ;
typedef int int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int uint32_t __attribute((__mode__(__SI__))) ;

typedef int int64_t __attribute((__mode__(__DI__))) ;
typedef unsigned int uint64_t __attribute((__mode__(__DI__))) ;
#line 142
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
#line 159
typedef int8_t int_least8_t;




typedef uint8_t uint_least8_t;




typedef int16_t int_least16_t;




typedef uint16_t uint_least16_t;




typedef int32_t int_least32_t;




typedef uint32_t uint_least32_t;







typedef int64_t int_least64_t;






typedef uint64_t uint_least64_t;
#line 213
typedef int8_t int_fast8_t;




typedef uint8_t uint_fast8_t;




typedef int16_t int_fast16_t;




typedef uint16_t uint_fast16_t;




typedef int32_t int_fast32_t;




typedef uint32_t uint_fast32_t;







typedef int64_t int_fast64_t;






typedef uint64_t uint_fast64_t;
#line 273
typedef int64_t intmax_t;




typedef uint64_t uintmax_t;
# 77 "/opt/tinyos-2.x/sys/lib/gcc/avr/4.1.2/../../../../avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 385 "/opt/tinyos-2.x/sys/lib/ncc/nesc_nx.h"
typedef struct { unsigned char data[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char data[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char data[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char data[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char data[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char data[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char data[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 116 "/opt/tinyos-2.x/sys/lib/gcc/avr/4.1.2/../../../../avr/include/string.h" 3
extern void *memset(void *arg_0x2b94301ea7f0, int arg_0x2b94301eaa58, size_t arg_0x2b94301ead00);
# 71 "/opt/tinyos-2.x/sys/lib/gcc/avr/4.1.2/../../../../avr/include/stdlib.h" 3
#line 68
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;





#line 74
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *arg_0x2b943020b968, const void *arg_0x2b943020bc40);
# 23 "/homes/mhartmann/baq/tinyos/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 24
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;







struct __nesc_attr_atmostonce {
};
#line 35
struct __nesc_attr_atleastonce {
};
#line 36
struct __nesc_attr_exactlyonce {
};
# 51 "/homes/mhartmann/baq/tinyos/tos/types/TinyError.h"
enum __nesc_unnamed4245 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 57 "/opt/tinyos-2.x/sys/lib/gcc/avr/4.1.2/../../../../avr/include/avr/fuse.h" 3
#line 52
typedef struct __nesc_unnamed4246 {

  unsigned char low;
  unsigned char high;
  unsigned char extended;
} __fuse_t;
# 210 "/opt/tinyos-2.x/sys/lib/gcc/avr/4.1.2/../../../../avr/include/avr/pgmspace.h" 3
typedef void prog_void __attribute((__progmem__)) ;
typedef char prog_char __attribute((__progmem__)) ;
typedef unsigned char prog_uchar __attribute((__progmem__)) ;

typedef int8_t prog_int8_t __attribute((__progmem__)) ;
typedef uint8_t prog_uint8_t __attribute((__progmem__)) ;
typedef int16_t prog_int16_t __attribute((__progmem__)) ;
typedef uint16_t prog_uint16_t __attribute((__progmem__)) ;
typedef int32_t prog_int32_t __attribute((__progmem__)) ;
typedef uint32_t prog_uint32_t __attribute((__progmem__)) ;

typedef int64_t prog_int64_t __attribute((__progmem__)) ;
typedef uint64_t prog_uint64_t __attribute((__progmem__)) ;
# 25 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/atm128const.h"
typedef uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef int8_t const_int8_t __attribute((__progmem__)) ;
typedef int16_t const_int16_t __attribute((__progmem__)) ;
typedef int32_t const_int32_t __attribute((__progmem__)) ;
# 88 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_enable_interrupt()  ;



static __inline void __nesc_disable_interrupt()  ;




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 108
__inline __nesc_atomic_t 
__nesc_atomic_start(void )   ;









#line 118
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)   ;







typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4247 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;









typedef struct { unsigned char data[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
# 43 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4248 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4249 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4250 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 94
typedef struct __nesc_unnamed4251 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4252 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4253 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4254 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4255 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4256 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4257 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 150
typedef struct __nesc_unnamed4258 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 40 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4259 {
#line 40
  int notUsed;
} 
#line 40
TMilli;
typedef struct __nesc_unnamed4260 {
#line 41
  int notUsed;
} 
#line 41
T32khz;
typedef struct __nesc_unnamed4261 {
#line 42
  int notUsed;
} 
#line 42
TMicro;
# 52 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/Atm128Timer.h"
enum __nesc_unnamed4262 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4263 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4264 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4265 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4266 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 108
#line 98
typedef union __nesc_unnamed4267 {

  uint8_t flat;
  struct __nesc_unnamed4268 {
    uint8_t cs : 3;
    uint8_t wgm1 : 1;
    uint8_t com : 2;
    uint8_t wgm0 : 1;
    uint8_t foc : 1;
  } bits;
} Atm128TimerControl_t;

typedef Atm128TimerControl_t Atm128_TCCR0_t;
typedef uint8_t Atm128_TCNT0_t;
typedef uint8_t Atm128_OCR0_t;

typedef Atm128TimerControl_t Atm128_TCCR2_t;
typedef uint8_t Atm128_TCNT2_t;
typedef uint8_t Atm128_OCR2_t;
#line 130
#line 120
typedef union __nesc_unnamed4269 {

  uint8_t flat;
  struct __nesc_unnamed4270 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 146
#line 133
typedef union __nesc_unnamed4271 {

  uint8_t flat;
  struct __nesc_unnamed4272 {
    uint8_t toie0 : 1;
    uint8_t ocie0 : 1;
    uint8_t toie1 : 1;
    uint8_t ocie1b : 1;
    uint8_t ocie1a : 1;
    uint8_t ticie1 : 1;
    uint8_t toie2 : 1;
    uint8_t ocie2 : 1;
  } bits;
} Atm128_TIMSK_t;
#line 163
#line 150
typedef union __nesc_unnamed4273 {

  uint8_t flat;
  struct __nesc_unnamed4274 {
    uint8_t tov0 : 1;
    uint8_t ocf0 : 1;
    uint8_t tov1 : 1;
    uint8_t ocf1b : 1;
    uint8_t ocf1a : 1;
    uint8_t icf1 : 1;
    uint8_t tov2 : 1;
    uint8_t ocf2 : 1;
  } bits;
} Atm128_TIFR_t;
#line 178
#line 167
typedef union __nesc_unnamed4275 {

  uint8_t flat;
  struct __nesc_unnamed4276 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4277 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 202
#line 193
typedef union __nesc_unnamed4278 {

  uint8_t flat;
  struct __nesc_unnamed4279 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4280 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};
#line 241
#line 231
typedef union __nesc_unnamed4281 {

  uint8_t flat;
  struct __nesc_unnamed4282 {
    uint8_t cs : 3;
    uint8_t wgm32 : 2;
    uint8_t rsvd : 1;
    uint8_t ices1 : 1;
    uint8_t icnc1 : 1;
  } bits;
} Atm128TimerCtrlCapture_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR1B_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR3B_t;
#line 259
#line 250
typedef union __nesc_unnamed4283 {

  uint8_t flat;
  struct __nesc_unnamed4284 {
    uint8_t rsvd : 5;
    uint8_t focC : 1;
    uint8_t focB : 1;
    uint8_t focA : 1;
  } bits;
} Atm128TimerCtrlClock_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR1C_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR3C_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
#line 309
#line 297
typedef union __nesc_unnamed4285 {

  uint8_t flat;
  struct __nesc_unnamed4286 {
    uint8_t ocie1c : 1;
    uint8_t ocie3c : 1;
    uint8_t toie3 : 1;
    uint8_t ocie3b : 1;
    uint8_t ocie3a : 1;
    uint8_t ticie3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIMSK_t;
#line 324
#line 312
typedef union __nesc_unnamed4287 {

  uint8_t flat;
  struct __nesc_unnamed4288 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 51 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/MicaTimer.h"
typedef struct __nesc_unnamed4289 {
} 
#line 51
T64khz;
typedef struct __nesc_unnamed4290 {
} 
#line 52
T128khz;
typedef struct __nesc_unnamed4291 {
} 
#line 53
T2mhz;
typedef struct __nesc_unnamed4292 {
} 
#line 54
T4mhz;
#line 107
typedef T32khz TOne;
typedef TMicro TThree;
typedef uint16_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;

enum __nesc_unnamed4293 {
  MICA_PRESCALER_ONE = ATM128_CLK16_DIVIDE_256, 
  MICA_DIVIDE_ONE_FOR_32KHZ_LOG2 = 0, 
  MICA_PRESCALER_THREE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_THREE_FOR_MICRO_LOG2 = 0, 
  EXT_STANDBY_T0_THRESHOLD = 12
};





enum __nesc_unnamed4294 {
  PLATFORM_MHZ = 8
};
# 62 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/hardware.h"
enum __nesc_unnamed4295 {
  TOS_SLEEP_NONE = ATM128_POWER_IDLE
};


enum __nesc_unnamed4296 {
  CHANNEL_RSSI = ATM128_ADC_SNGL_ADC0, 
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1, 
  CHANNEL_BATTERY = ATM128_ADC_SNGL_ADC7
};


enum __nesc_unnamed4297 {
  PLATFORM_BAUDRATE = 57600L
};
# 21 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/font5x7.h"
static unsigned char __attribute((progmem)) Font5x7[480] = { 
0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x5F, 0x00, 0x00, 
0x00, 0x07, 0x00, 0x07, 0x00, 
0x14, 0x7F, 0x14, 0x7F, 0x14, 
0x24, 0x2A, 0x7F, 0x2A, 0x12, 
0x23, 0x13, 0x08, 0x64, 0x62, 
0x36, 0x49, 0x55, 0x22, 0x50, 
0x00, 0x05, 0x03, 0x00, 0x00, 
0x00, 0x1C, 0x22, 0x41, 0x00, 
0x00, 0x41, 0x22, 0x1C, 0x00, 
0x08, 0x2A, 0x1C, 0x2A, 0x08, 
0x08, 0x08, 0x3E, 0x08, 0x08, 
0x00, 0x50, 0x30, 0x00, 0x00, 
0x08, 0x08, 0x08, 0x08, 0x08, 
0x00, 0x60, 0x60, 0x00, 0x00, 
0x20, 0x10, 0x08, 0x04, 0x02, 
0x3E, 0x51, 0x49, 0x45, 0x3E, 
0x00, 0x42, 0x7F, 0x40, 0x00, 
0x42, 0x61, 0x51, 0x49, 0x46, 
0x21, 0x41, 0x45, 0x4B, 0x31, 
0x18, 0x14, 0x12, 0x7F, 0x10, 
0x27, 0x45, 0x45, 0x45, 0x39, 
0x3C, 0x4A, 0x49, 0x49, 0x30, 
0x01, 0x71, 0x09, 0x05, 0x03, 
0x36, 0x49, 0x49, 0x49, 0x36, 
0x06, 0x49, 0x49, 0x29, 0x1E, 
0x00, 0x36, 0x36, 0x00, 0x00, 
0x00, 0x56, 0x36, 0x00, 0x00, 
0x00, 0x08, 0x14, 0x22, 0x41, 
0x14, 0x14, 0x14, 0x14, 0x14, 
0x41, 0x22, 0x14, 0x08, 0x00, 
0x02, 0x01, 0x51, 0x09, 0x06, 
0x32, 0x49, 0x79, 0x41, 0x3E, 
0x7E, 0x11, 0x11, 0x11, 0x7E, 
0x7F, 0x49, 0x49, 0x49, 0x36, 
0x3E, 0x41, 0x41, 0x41, 0x22, 
0x7F, 0x41, 0x41, 0x22, 0x1C, 
0x7F, 0x49, 0x49, 0x49, 0x41, 
0x7F, 0x09, 0x09, 0x01, 0x01, 
0x3E, 0x41, 0x41, 0x51, 0x32, 
0x7F, 0x08, 0x08, 0x08, 0x7F, 
0x00, 0x41, 0x7F, 0x41, 0x00, 
0x20, 0x40, 0x41, 0x3F, 0x01, 
0x7F, 0x08, 0x14, 0x22, 0x41, 
0x7F, 0x40, 0x40, 0x40, 0x40, 
0x7F, 0x02, 0x04, 0x02, 0x7F, 
0x7F, 0x04, 0x08, 0x10, 0x7F, 
0x3E, 0x41, 0x41, 0x41, 0x3E, 
0x7F, 0x09, 0x09, 0x09, 0x06, 
0x3E, 0x41, 0x51, 0x21, 0x5E, 
0x7F, 0x09, 0x19, 0x29, 0x46, 
0x46, 0x49, 0x49, 0x49, 0x31, 
0x01, 0x01, 0x7F, 0x01, 0x01, 
0x3F, 0x40, 0x40, 0x40, 0x3F, 
0x1F, 0x20, 0x40, 0x20, 0x1F, 
0x7F, 0x20, 0x18, 0x20, 0x7F, 
0x63, 0x14, 0x08, 0x14, 0x63, 
0x03, 0x04, 0x78, 0x04, 0x03, 
0x61, 0x51, 0x49, 0x45, 0x43, 
0x00, 0x00, 0x7F, 0x41, 0x41, 
0x02, 0x04, 0x08, 0x10, 0x20, 
0x41, 0x41, 0x7F, 0x00, 0x00, 
0x04, 0x02, 0x01, 0x02, 0x04, 
0x40, 0x40, 0x40, 0x40, 0x40, 
0x00, 0x01, 0x02, 0x04, 0x00, 
0x20, 0x54, 0x54, 0x54, 0x78, 
0x7F, 0x48, 0x44, 0x44, 0x38, 
0x38, 0x44, 0x44, 0x44, 0x20, 
0x38, 0x44, 0x44, 0x48, 0x7F, 
0x38, 0x54, 0x54, 0x54, 0x18, 
0x08, 0x7E, 0x09, 0x01, 0x02, 
0x08, 0x14, 0x54, 0x54, 0x3C, 
0x7F, 0x08, 0x04, 0x04, 0x78, 
0x00, 0x44, 0x7D, 0x40, 0x00, 
0x20, 0x40, 0x44, 0x3D, 0x00, 
0x00, 0x7F, 0x10, 0x28, 0x44, 
0x00, 0x41, 0x7F, 0x40, 0x00, 
0x7C, 0x04, 0x18, 0x04, 0x78, 
0x7C, 0x08, 0x04, 0x04, 0x78, 
0x38, 0x44, 0x44, 0x44, 0x38, 
0x7C, 0x14, 0x14, 0x14, 0x08, 
0x08, 0x14, 0x14, 0x18, 0x7C, 
0x7C, 0x08, 0x04, 0x04, 0x08, 
0x48, 0x54, 0x54, 0x54, 0x20, 
0x04, 0x3F, 0x44, 0x40, 0x20, 
0x3C, 0x40, 0x40, 0x20, 0x7C, 
0x1C, 0x20, 0x40, 0x20, 0x1C, 
0x3C, 0x40, 0x30, 0x40, 0x3C, 
0x44, 0x28, 0x10, 0x28, 0x44, 
0x0C, 0x50, 0x50, 0x50, 0x3C, 
0x44, 0x64, 0x54, 0x4C, 0x44, 
0x00, 0x08, 0x36, 0x41, 0x00, 
0x00, 0x00, 0x7F, 0x00, 0x00, 
0x00, 0x41, 0x36, 0x08, 0x00, 
0x08, 0x08, 0x2A, 0x1C, 0x08, 
0x08, 0x1C, 0x2A, 0x08, 0x08 };
# 33 "/homes/mhartmann/baq/tinyos/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 43 "/homes/mhartmann/baq/tinyos/tos/types/Leds.h"
enum __nesc_unnamed4298 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
typedef TMilli ArbiterDemoC__Timer0__precision_tag;
enum HilTimerMilliC____nesc_unnamed4299 {
  HilTimerMilliC__TIMER_COUNT = 2U
};
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmSyncC*/Atm128AlarmSyncC__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmSyncC*/Atm128AlarmSyncC__0__precision /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Counter__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Counter__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Timer__timer_size;
typedef uint8_t HplAtm128Timer0SyncP__Compare__size_type;
typedef uint8_t HplAtm128Timer0SyncP__Timer__timer_size;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
typedef TMilli ResourceP__Timer0__precision_tag;
enum /*ArbiterDemoAppC.Resource0*/SharedResourceC__0____nesc_unnamed4300 {
  SharedResourceC__0__RESOURCE_ID = 0U
};
enum /*ArbiterDemoAppC.Resource1*/SharedResourceC__1____nesc_unnamed4301 {
  SharedResourceC__1__RESOURCE_ID = 1U
};
# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t MotePlatformP__SubInit__default__init(void );
#line 62
static error_t MotePlatformP__PlatformInit__init(void );
# 46 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );





static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );





static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );



static void /*HplAtm128GeneralIOC.PortB.Bit5*/HplAtm128GeneralIOPinP__13__IO__makeInput(void );
#line 43
static bool /*HplAtm128GeneralIOC.PortB.Bit5*/HplAtm128GeneralIOPinP__13__IO__get(void );
static void /*HplAtm128GeneralIOC.PortB.Bit6*/HplAtm128GeneralIOPinP__14__IO__makeInput(void );
#line 43
static bool /*HplAtm128GeneralIOC.PortB.Bit6*/HplAtm128GeneralIOPinP__14__IO__get(void );
# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/Init.nc"
static error_t MeasureClockC__Init__init(void );
# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/homes/mhartmann/baq/tinyos/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b9430313108);
# 75 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/homes/mhartmann/baq/tinyos/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b9430313108);
# 57 "/homes/mhartmann/baq/tinyos/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 76 "/homes/mhartmann/baq/tinyos/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 83 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
static void ArbiterDemoC__Timer0__fired(void );
# 60 "/homes/mhartmann/baq/tinyos/tos/interfaces/Boot.nc"
static void ArbiterDemoC__Boot__booted(void );
# 38 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
static void ArbiterDemoC__LCD128x64__initDone(void );









static void ArbiterDemoC__LCD128x64__barWritten(void );

static void ArbiterDemoC__LCD128x64__screenCleared(void );
#line 46
static void ArbiterDemoC__LCD128x64__lineWritten(void );
#line 40
static void ArbiterDemoC__LCD128x64__circleWritten(void );



static void ArbiterDemoC__LCD128x64__rectangleWritten(void );
#line 42
static void ArbiterDemoC__LCD128x64__stringWritten(void );
# 102 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static void ArbiterDemoC__Resource0__granted(void );
#line 102
static void ArbiterDemoC__Resource1__granted(void );
# 75 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static void LCD128x64P__writeRectangle__runTask(void );
# 32 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
static void LCD128x64P__LCD128x64__startWriteString(char *data, uint8_t x, uint8_t y);
#line 20
static void LCD128x64P__LCD128x64__setPixel(uint8_t x, uint8_t y);
#line 4
static void LCD128x64P__LCD128x64__initLCD(uint8_t pattern);
# 75 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static void LCD128x64P__writeString__runTask(void );
#line 75
static void LCD128x64P__writeCircle__runTask(void );
#line 75
static void LCD128x64P__writeLine__runTask(void );
#line 75
static void LCD128x64P__wait4Controller__runTask(void );
#line 75
static void LCD128x64P__writeBar__runTask(void );
#line 75
static void LCD128x64P__clearScreenNB__runTask(void );
# 109 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__getNow(void );
#line 103
static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__startAt(/*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__size_type t0, /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__size_type dt);
#line 116
static /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__getAlarm(void );
#line 73
static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__stop(void );
# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Init__init(void );
# 64 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Counter__size_type /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Counter__get(void );
# 58 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__fired(void );
# 70 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Timer__overflow(void );
# 53 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer0SyncP__TimerCtrl__getInterruptFlag(void );
#line 46
static void HplAtm128Timer0SyncP__TimerCtrl__setControl(Atm128TimerControl_t control);
# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm128Timer0SyncP__McuPowerOverride__lowestState(void );
# 51 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128TimerSync.nc"
static int HplAtm128Timer0SyncP__TimerSync__compareBusy(void );
#line 39
static void HplAtm128Timer0SyncP__TimerSync__setTimer0Synchronous(void );
# 48 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Compare.nc"
static HplAtm128Timer0SyncP__Compare__size_type HplAtm128Timer0SyncP__Compare__get(void );





static void HplAtm128Timer0SyncP__Compare__set(HplAtm128Timer0SyncP__Compare__size_type t);










static void HplAtm128Timer0SyncP__Compare__start(void );
# 61 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer.nc"
static HplAtm128Timer0SyncP__Timer__timer_size HplAtm128Timer0SyncP__Timer__get(void );
# 75 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 78 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 75 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 83
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "/homes/mhartmann/baq/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b9430797da0);
# 64 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 48 "/homes/mhartmann/baq/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b9430797da0, 
# 64 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 48 "/homes/mhartmann/baq/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b9430797da0);
# 82 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/Init.nc"
static error_t /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init(void );
# 79 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceQueue.nc"
static error_t /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );








static bool /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 53 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(
# 55 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2b943082e660);
# 65 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(
# 60 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2b943082b868);
# 59 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(
# 60 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2b943082b868);
# 56 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 73
static void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void );
#line 46
static void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void );
# 120 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static error_t /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__Resource__release(
# 54 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2b943082f4a0);
# 88 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static error_t /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__Resource__request(
# 54 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2b943082f4a0);
# 102 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__Resource__default__granted(
# 54 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2b943082f4a0);
# 128 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static bool /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__Resource__isOwner(
# 54 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2b943082f4a0);
# 98 "/homes/mhartmann/baq/tinyos/tos/interfaces/ArbiterInfo.nc"
static uint8_t /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void );
# 75 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
# 44 "ResourceOperations.nc"
static error_t SharedResourceImplP__SharedResourceOperations__operation(
# 48 "SharedResourceImplP.nc"
uint8_t arg_0x2b943087c220, 
# 44 "ResourceOperations.nc"
uint8_t value);
# 83 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
static void ResourceP__Timer0__fired(void );
# 44 "ResourceOperations.nc"
static error_t ResourceP__ResourceOperations__operation(uint8_t value);
# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 137 "/homes/mhartmann/baq/tinyos/tos/interfaces/Leds.nc"
static void LedsP__Leds__setPort(uint8_t val, uint8_t pval);
# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 62
static error_t PlatformP__MeasureClock__init(void );
# 51 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/PlatformP.nc"
static inline void PlatformP__power_init(void );






static inline error_t PlatformP__Init__init(void );
# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/Init.nc"
static error_t MotePlatformP__SubInit__init(void );
# 23 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void );
#line 35
static inline error_t MotePlatformP__SubInit__default__init(void );
# 55 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );





static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );





static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );





static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 54
static __inline bool /*HplAtm128GeneralIOC.PortB.Bit5*/HplAtm128GeneralIOPinP__13__IO__get(void );




static __inline void /*HplAtm128GeneralIOC.PortB.Bit5*/HplAtm128GeneralIOPinP__13__IO__makeInput(void );
#line 54
static __inline bool /*HplAtm128GeneralIOC.PortB.Bit6*/HplAtm128GeneralIOPinP__14__IO__get(void );




static __inline void /*HplAtm128GeneralIOC.PortB.Bit6*/HplAtm128GeneralIOPinP__14__IO__makeInput(void );
# 33 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/MeasureClockC.nc"
enum MeasureClockC____nesc_unnamed4302 {


  MeasureClockC__MAGIC = 488 / (16 / PLATFORM_MHZ)
};



uint16_t MeasureClockC__cycles;

static inline error_t MeasureClockC__Init__init(void );
# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 60 "/homes/mhartmann/baq/tinyos/tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 57 "/homes/mhartmann/baq/tinyos/tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 72
static void RealMainP__Scheduler__taskLoop(void );
#line 65
static bool RealMainP__Scheduler__runNextTask(void );
# 63 "/homes/mhartmann/baq/tinyos/tos/system/RealMainP.nc"
int main(void )   ;
# 75 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 56 "/homes/mhartmann/baq/tinyos/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b9430313108);
# 76 "/homes/mhartmann/baq/tinyos/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/homes/mhartmann/baq/tinyos/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4303 {

  SchedulerBasicP__NUM_TASKS = 10U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 97
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 124
static inline void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
#line 170
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 66 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/McuSleepC.nc"
const_uint8_t McuSleepC__atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 3, ((
1 << 2) | (1 << 4)) | (1 << 3), (
1 << 4) | (1 << 3), (
1 << 2) | (1 << 4), 
1 << 4 };

static inline mcu_power_t McuSleepC__getPowerState(void );
#line 108
static inline void McuSleepC__McuSleep__sleep(void );
# 64 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
static void ArbiterDemoC__Timer0__startPeriodic(uint32_t dt);
# 44 "ResourceOperations.nc"
static error_t ArbiterDemoC__ResourceOperations0__operation(uint8_t value);
# 44 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
static void ArbiterDemoC__Button0__makeInput(void );
#line 43
static bool ArbiterDemoC__Button0__get(void );
# 32 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
static void ArbiterDemoC__LCD128x64__startWriteString(char *data, uint8_t x, uint8_t y);
#line 4
static void ArbiterDemoC__LCD128x64__initLCD(uint8_t pattern);
# 120 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static error_t ArbiterDemoC__Resource0__release(void );
#line 88
static error_t ArbiterDemoC__Resource0__request(void );
#line 128
static bool ArbiterDemoC__Resource0__isOwner(void );
# 44 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
static void ArbiterDemoC__Button1__makeInput(void );
#line 43
static bool ArbiterDemoC__Button1__get(void );
# 44 "ResourceOperations.nc"
static error_t ArbiterDemoC__ResourceOperations1__operation(uint8_t value);
# 120 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static error_t ArbiterDemoC__Resource1__release(void );
#line 88
static error_t ArbiterDemoC__Resource1__request(void );
#line 128
static bool ArbiterDemoC__Resource1__isOwner(void );
# 19 "ArbiterDemoC.nc"
static inline void ArbiterDemoC__Boot__booted(void );





static inline void ArbiterDemoC__Resource0__granted(void );



static inline void ArbiterDemoC__Resource1__granted(void );



static inline void ArbiterDemoC__Timer0__fired(void );
#line 58
static inline void ArbiterDemoC__LCD128x64__initDone(void );


static inline void ArbiterDemoC__LCD128x64__barWritten(void );

static inline void ArbiterDemoC__LCD128x64__screenCleared(void );

static inline void ArbiterDemoC__LCD128x64__lineWritten(void );

static inline void ArbiterDemoC__LCD128x64__circleWritten(void );

static inline void ArbiterDemoC__LCD128x64__rectangleWritten(void );

static inline void ArbiterDemoC__LCD128x64__stringWritten(void );
# 38 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
static void LCD128x64P__LCD128x64__initDone(void );









static void LCD128x64P__LCD128x64__barWritten(void );

static void LCD128x64P__LCD128x64__screenCleared(void );
#line 46
static void LCD128x64P__LCD128x64__lineWritten(void );
#line 40
static void LCD128x64P__LCD128x64__circleWritten(void );



static void LCD128x64P__LCD128x64__rectangleWritten(void );
#line 42
static void LCD128x64P__LCD128x64__stringWritten(void );
# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static error_t LCD128x64P__writeString__postTask(void );
#line 67
static error_t LCD128x64P__wait4Controller__postTask(void );
# 37 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
enum LCD128x64P____nesc_unnamed4304 {
#line 37
  LCD128x64P__wait4Controller = 0U
};
#line 37
typedef int LCD128x64P____nesc_sillytask_wait4Controller[LCD128x64P__wait4Controller];
#line 170
enum LCD128x64P____nesc_unnamed4305 {
#line 170
  LCD128x64P__writeRectangle = 1U
};
#line 170
typedef int LCD128x64P____nesc_sillytask_writeRectangle[LCD128x64P__writeRectangle];
#line 186
enum LCD128x64P____nesc_unnamed4306 {
#line 186
  LCD128x64P__writeCircle = 2U
};
#line 186
typedef int LCD128x64P____nesc_sillytask_writeCircle[LCD128x64P__writeCircle];
#line 219
enum LCD128x64P____nesc_unnamed4307 {
#line 219
  LCD128x64P__writeString = 3U
};
#line 219
typedef int LCD128x64P____nesc_sillytask_writeString[LCD128x64P__writeString];
#line 247
enum LCD128x64P____nesc_unnamed4308 {
#line 247
  LCD128x64P__clearScreenNB = 4U
};
#line 247
typedef int LCD128x64P____nesc_sillytask_clearScreenNB[LCD128x64P__clearScreenNB];
#line 278
enum LCD128x64P____nesc_unnamed4309 {
#line 278
  LCD128x64P__writeLine = 5U
};
#line 278
typedef int LCD128x64P____nesc_sillytask_writeLine[LCD128x64P__writeLine];
#line 356
enum LCD128x64P____nesc_unnamed4310 {
#line 356
  LCD128x64P__writeBar = 6U
};
#line 356
typedef int LCD128x64P____nesc_sillytask_writeBar[LCD128x64P__writeBar];
#line 30
uint8_t LCD128x64P__modPattern = 0x00;
uint8_t LCD128x64P__pageAddr;
#line 31
uint8_t LCD128x64P__xAddr = 0;
uint8_t LCD128x64P__rad;
#line 32
uint8_t LCD128x64P__aRect;
#line 32
uint8_t LCD128x64P__bRect;
#line 32
uint8_t LCD128x64P__xLineEnd;
#line 32
uint8_t LCD128x64P__yLineEnd;
#line 32
uint8_t LCD128x64P__aBar;
#line 32
uint8_t LCD128x64P__bBar;
uint8_t LCD128x64P__xPos[5];
#line 33
uint8_t LCD128x64P__yPos[5];
char *LCD128x64P__dataPtr;


static inline void LCD128x64P__wait4Controller__runTask(void );
#line 58
static void LCD128x64P__writeGLCD(uint8_t mode, uint8_t data);
#line 85
static void LCD128x64P__setAddress(uint8_t xAdd, uint8_t yAdd);
#line 107
static inline uint8_t LCD128x64P__readByte(uint8_t mode);
#line 140
static void LCD128x64P__LCD128x64__setPixel(uint8_t x, uint8_t y);
#line 170
static inline void LCD128x64P__writeRectangle__runTask(void );
#line 186
static inline void LCD128x64P__writeCircle__runTask(void );
#line 219
static inline void LCD128x64P__writeString__runTask(void );
#line 247
static inline void LCD128x64P__clearScreenNB__runTask(void );
#line 265
static inline void LCD128x64P__clearScreen(void );
#line 278
static inline void LCD128x64P__writeLine__runTask(void );
#line 356
static inline void LCD128x64P__writeBar__runTask(void );
#line 416
static inline void LCD128x64P__LCD128x64__initLCD(uint8_t pattern);
#line 440
static void LCD128x64P__LCD128x64__startWriteString(char *data, uint8_t x, uint8_t y);
# 53 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__TimerCtrl__getInterruptFlag(void );
#line 46
static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__TimerCtrl__setControl(Atm128TimerControl_t control);
# 78 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__fired(void );
# 82 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Counter__overflow(void );
# 51 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128TimerSync.nc"
static int /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__TimerSync__compareBusy(void );
#line 39
static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__TimerSync__setTimer0Synchronous(void );
# 48 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__get(void );





static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__start(void );
# 61 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Timer__get(void );
# 45 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/Atm128AlarmSyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__set;
uint32_t /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__t0;
#line 46
uint32_t /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__dt;
uint32_t /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__base;



enum /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0____nesc_unnamed4311 {
  Atm128AlarmSyncP__0__MINDT = 2, 
  Atm128AlarmSyncP__0__MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Init__init(void );
#line 81
static inline void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__setOcr0(uint8_t n);
#line 97
static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__setInterrupt(void );
#line 156
static inline void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__fired(void );
#line 168
static uint32_t /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Counter__get(void );
#line 211
static inline void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Timer__overflow(void );
# 58 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Compare.nc"
static void HplAtm128Timer0SyncP__Compare__fired(void );
# 70 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer.nc"
static void HplAtm128Timer0SyncP__Timer__overflow(void );
# 71 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer0SyncP.nc"
uint8_t HplAtm128Timer0SyncP__count = 0;


static inline uint8_t HplAtm128Timer0SyncP__Timer__get(void );
#line 100
static inline void HplAtm128Timer0SyncP__TimerCtrl__setControl(Atm128TimerControl_t x);
#line 118
static inline Atm128_TIFR_t HplAtm128Timer0SyncP__TimerCtrl__getInterruptFlag(void );
#line 146
static inline void HplAtm128Timer0SyncP__Compare__start(void );









static inline uint8_t HplAtm128Timer0SyncP__Compare__get(void );


static inline void HplAtm128Timer0SyncP__Compare__set(uint8_t t);




static __inline void HplAtm128Timer0SyncP__stabiliseTimer0(void );
#line 179
static inline mcu_power_t HplAtm128Timer0SyncP__McuPowerOverride__lowestState(void );
#line 210
void __vector_15(void ) __attribute((signal))   ;
#line 226
void __vector_16(void ) __attribute((signal))   ;
#line 240
static inline void HplAtm128Timer0SyncP__TimerSync__setTimer0Synchronous(void );







static inline int HplAtm128Timer0SyncP__TimerSync__compareBusy(void );
# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 109 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 74 "/homes/mhartmann/baq/tinyos/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4312 {
#line 74
  AlarmToTimerC__0__fired = 7U
};
#line 74
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 55
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 48 "/homes/mhartmann/baq/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b9430797da0);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4313 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 8U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4314 {

  VirtualizeTimerC__0__NUM_TIMERS = 2, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4315 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];






static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 102
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 141
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);
#line 206
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 58 "/homes/mhartmann/baq/tinyos/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 49 "/homes/mhartmann/baq/tinyos/tos/system/FcfsResourceQueueC.nc"
enum /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0____nesc_unnamed4316 {
#line 49
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[2U];
uint8_t /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__qHead = /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__qTail = /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init(void );




static inline bool /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );



static inline bool /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(
# 55 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2b943082e660);
# 65 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(
# 60 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2b943082b868);
# 59 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(
# 60 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2b943082b868);
# 79 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceQueue.nc"
static error_t /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void );
# 73 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
static void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void );
# 102 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__Resource__granted(
# 54 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2b943082f4a0);
# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void );
# 75 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
enum /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4317 {
#line 75
  ArbiterP__0__grantedTask = 9U
};
#line 75
typedef int /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0____nesc_sillytask_grantedTask[/*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__grantedTask];
#line 67
enum /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4318 {
#line 67
  ArbiterP__0__RES_CONTROLLED, ArbiterP__0__RES_GRANTING, ArbiterP__0__RES_IMM_GRANTING, ArbiterP__0__RES_BUSY
};
#line 68
enum /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4319 {
#line 68
  ArbiterP__0__default_owner_id = 2U
};
#line 69
enum /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4320 {
#line 69
  ArbiterP__0__NO_RES = 0xFF
};
uint8_t /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__state = /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
uint8_t /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__resId = /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__default_owner_id;
uint8_t /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__reqResId;



static error_t /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__Resource__request(uint8_t id);
#line 111
static error_t /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id);
#line 133
static inline error_t /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 166
static inline uint8_t /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void );










static uint8_t /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__Resource__isOwner(uint8_t id);
#line 190
static inline void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
#line 202
static inline void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id);



static inline void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void );

static inline void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void );





static inline void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 98 "/homes/mhartmann/baq/tinyos/tos/interfaces/ArbiterInfo.nc"
static uint8_t SharedResourceImplP__ArbiterInfo__userId(void );
# 44 "ResourceOperations.nc"
static error_t SharedResourceImplP__ResourceOperations__operation(uint8_t value);
# 53 "SharedResourceImplP.nc"
uint8_t SharedResourceImplP__current_id;

static error_t SharedResourceImplP__SharedResourceOperations__operation(uint8_t id, uint8_t value);
# 64 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
static void ResourceP__Timer0__startPeriodic(uint32_t dt);
#line 78
static void ResourceP__Timer0__stop(void );
# 137 "/homes/mhartmann/baq/tinyos/tos/interfaces/Leds.nc"
static void ResourceP__Leds__setPort(uint8_t val, uint8_t pval);
# 11 "ResourceP.nc"
uint8_t ResourceP__ledValue;
bool ResourceP__state;

static inline error_t ResourceP__ResourceOperations__operation(uint8_t value);










static inline void ResourceP__Timer0__fired(void );
# 46 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );





static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );





static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
# 56 "/homes/mhartmann/baq/tinyos/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 161
static void LedsP__Leds__setPort(uint8_t pval, uint8_t port);
# 92 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/atm128hardware.h"
static __inline  void __nesc_disable_interrupt()
#line 92
{
   __asm volatile ("cli");}

#line 109
#line 108
__inline   __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 112
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



#line 118
__inline   void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

# 124 "/homes/mhartmann/baq/tinyos/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 57 "/homes/mhartmann/baq/tinyos/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 57
  SchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 51 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/PlatformP.nc"
static inline void PlatformP__power_init(void )
#line 51
{
  /* atomic removed: atomic calls only */
#line 52
  {
    * (volatile uint8_t *)(0x35 + 0x20) = 1 << 5;
  }
}

# 69 "/homes/mhartmann/baq/tinyos/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 35 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/MotePlatformP.nc"
static inline error_t MotePlatformP__SubInit__default__init(void )
#line 35
{
  return SUCCESS;
}

# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/Init.nc"
inline static error_t MotePlatformP__SubInit__init(void ){
#line 62
  unsigned char result;
#line 62

#line 62
  result = MotePlatformP__SubInit__default__init();
#line 62

#line 62
  return result;
#line 62
}
#line 62
# 23 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void )
#line 23
{

  * (volatile uint8_t *)(0x15 + 0x20) = 0;
  * (volatile uint8_t *)(0x14 + 0x20) = 0xff;





  return MotePlatformP__SubInit__init();
}

# 55 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )59U |= 1 << 2;
}

# 40 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set();
#line 40
}
#line 40
# 55 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )59U |= 1 << 1;
}

# 40 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set();
#line 40
}
#line 40
# 55 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )59U |= 1 << 0;
}

# 40 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set();
#line 40
}
#line 40
# 61 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )58U |= 1 << 2;
}

# 46 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput();
#line 46
}
#line 46
# 61 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )58U |= 1 << 1;
}

# 46 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput();
#line 46
}
#line 46
# 61 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )58U |= 1 << 0;
}

# 46 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput();
#line 46
}
#line 46
# 56 "/homes/mhartmann/baq/tinyos/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 57
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteInit__init(void ){
#line 62
  unsigned char result;
#line 62

#line 62
  result = LedsP__Init__init();
#line 62
  result = ecombine(result, MotePlatformP__PlatformInit__init());
#line 62

#line 62
  return result;
#line 62
}
#line 62
# 43 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void )
#line 43
{
  /* atomic removed: atomic calls only */




  {
    volatile uint8_t now;
#line 50
    volatile uint8_t wraps;
    uint16_t start;


    * (volatile uint8_t *)(0x2E + 0x20) = 1 << 0;

    * (volatile uint8_t *)(0x33 + 0x20) = (1 << 1) | (1 << 0);




    start = * (volatile uint16_t *)(0x2C + 0x20);
    for (wraps = MeasureClockC__MAGIC / 2; wraps; ) 
      {
        uint16_t next = * (volatile uint16_t *)(0x2C + 0x20);

        if (next < start) {
          wraps--;
          }
#line 68
        start = next;
      }


    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;



    start = * (volatile uint16_t *)(0x2C + 0x20);
    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;
    MeasureClockC__cycles = * (volatile uint16_t *)(0x2C + 0x20);

    MeasureClockC__cycles = (MeasureClockC__cycles - start + 16) >> 5;


    * (volatile uint8_t *)(0x30 + 0x20) = * (volatile uint8_t *)(0x2E + 0x20) = * (volatile uint8_t *)(0x33 + 0x20) = 0;
    * (volatile uint8_t *)(0x32 + 0x20) = 0;
    * (volatile uint16_t *)(0x2C + 0x20) = 0;
    * (volatile uint8_t *)0x7C = * (volatile uint8_t *)(0x36 + 0x20) = 0xff;
    while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
      ;
  }
  return SUCCESS;
}

# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/Init.nc"
inline static error_t PlatformP__MeasureClock__init(void ){
#line 62
  unsigned char result;
#line 62

#line 62
  result = MeasureClockC__Init__init();
#line 62

#line 62
  return result;
#line 62
}
#line 62
# 58 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
{
  error_t ok;


  ok = PlatformP__MeasureClock__init();
  ok = ecombine(ok, PlatformP__MoteInit__init());

  if (ok != SUCCESS) {
    return ok;
    }
  PlatformP__power_init();

  return SUCCESS;
}

# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 62
  unsigned char result;
#line 62

#line 62
  result = PlatformP__Init__init();
#line 62

#line 62
  return result;
#line 62
}
#line 62
# 65 "/homes/mhartmann/baq/tinyos/tos/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
#line 65
  unsigned char result;
#line 65

#line 65
  result = SchedulerBasicP__Scheduler__runNextTask();
#line 65

#line 65
  return result;
#line 65
}
#line 65
# 44 "ResourceOperations.nc"
inline static error_t ArbiterDemoC__ResourceOperations0__operation(uint8_t value){
#line 44
  unsigned char result;
#line 44

#line 44
  result = SharedResourceImplP__SharedResourceOperations__operation(/*ArbiterDemoAppC.Resource0*/SharedResourceC__0__RESOURCE_ID, value);
#line 44

#line 44
  return result;
#line 44
}
#line 44
# 32 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void ArbiterDemoC__LCD128x64__startWriteString(char *data, uint8_t x, uint8_t y){
#line 32
  LCD128x64P__LCD128x64__startWriteString(data, x, y);
#line 32
}
#line 32
# 25 "ArbiterDemoC.nc"
static inline void ArbiterDemoC__Resource0__granted(void )
#line 25
{
  ArbiterDemoC__LCD128x64__startWriteString("Resource0 Granted ", 0, 1);
  ArbiterDemoC__ResourceOperations0__operation(0x0F);
}

# 44 "ResourceOperations.nc"
inline static error_t ArbiterDemoC__ResourceOperations1__operation(uint8_t value){
#line 44
  unsigned char result;
#line 44

#line 44
  result = SharedResourceImplP__SharedResourceOperations__operation(/*ArbiterDemoAppC.Resource1*/SharedResourceC__1__RESOURCE_ID, value);
#line 44

#line 44
  return result;
#line 44
}
#line 44
# 29 "ArbiterDemoC.nc"
static inline void ArbiterDemoC__Resource1__granted(void )
#line 29
{
  ArbiterDemoC__LCD128x64__startWriteString("Resource1 Granted ", 0, 1);
  ArbiterDemoC__ResourceOperations1__operation(0xF0);
}

# 202 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
static inline void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
inline static void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__Resource__granted(uint8_t arg_0x2b943082f4a0){
#line 102
  switch (arg_0x2b943082f4a0) {
#line 102
    case /*ArbiterDemoAppC.Resource0*/SharedResourceC__0__RESOURCE_ID:
#line 102
      ArbiterDemoC__Resource0__granted();
#line 102
      break;
#line 102
    case /*ArbiterDemoAppC.Resource1*/SharedResourceC__1__RESOURCE_ID:
#line 102
      ArbiterDemoC__Resource1__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__Resource__default__granted(arg_0x2b943082f4a0);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 216 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
static inline void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceConfigure.nc"
inline static void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x2b943082b868){
#line 59
    /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(arg_0x2b943082b868);
#line 59
}
#line 59
# 190 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
static inline void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__resId = /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__reqResId;
      /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__state = /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__resId);
  /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__Resource__granted(/*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__resId);
}

# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t LCD128x64P__writeString__postTask(void ){
#line 67
  unsigned char result;
#line 67

#line 67
  result = SchedulerBasicP__TaskBasic__postTask(LCD128x64P__writeString);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 97 "/homes/mhartmann/baq/tinyos/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 166 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
static inline uint8_t /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void )
#line 166
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 167
    {
      if (/*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__state != /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__RES_BUSY) 
        {
          unsigned char __nesc_temp = 
#line 169
          /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__NO_RES;

          {
#line 169
            __nesc_atomic_end(__nesc_atomic); 
#line 169
            return __nesc_temp;
          }
        }
#line 170
      {
        unsigned char __nesc_temp = 
#line 170
        /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__resId;

        {
#line 170
          __nesc_atomic_end(__nesc_atomic); 
#line 170
          return __nesc_temp;
        }
      }
    }
#line 173
    __nesc_atomic_end(__nesc_atomic); }
}

# 98 "/homes/mhartmann/baq/tinyos/tos/interfaces/ArbiterInfo.nc"
inline static uint8_t SharedResourceImplP__ArbiterInfo__userId(void ){
#line 98
  unsigned char result;
#line 98

#line 98
  result = /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ArbiterInfo__userId();
#line 98

#line 98
  return result;
#line 98
}
#line 98
# 229 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/Atm128AlarmSyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__getNow(void )
#line 229
{
  return /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Counter__get();
}

# 109 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 109
  unsigned long result;
#line 109

#line 109
  result = /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__getNow();
#line 109

#line 109
  return result;
#line 109
}
#line 109
# 96 "/homes/mhartmann/baq/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 136
  unsigned long result;
#line 136

#line 136
  result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 136

#line 136
  return result;
#line 136
}
#line 136
# 156 "/homes/mhartmann/baq/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
}

# 64 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
inline static void ResourceP__Timer0__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(1U, dt);
#line 64
}
#line 64
# 137 "/homes/mhartmann/baq/tinyos/tos/interfaces/Leds.nc"
inline static void ResourceP__Leds__setPort(uint8_t val, uint8_t pval){
#line 137
  LedsP__Leds__setPort(val, pval);
#line 137
}
#line 137
# 166 "/homes/mhartmann/baq/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

# 78 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
inline static void ResourceP__Timer0__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(1U);
#line 78
}
#line 78
# 14 "ResourceP.nc"
static inline error_t ResourceP__ResourceOperations__operation(uint8_t value)
#line 14
{
  ResourceP__ledValue = value;
  if (value == 0x00) {
      ResourceP__Timer0__stop();
      ResourceP__Leds__setPort(0x00, 2);
    }
  else 
#line 19
    {
      ResourceP__Timer0__startPeriodic(500);
    }
  return SUCCESS;
}

# 44 "ResourceOperations.nc"
inline static error_t SharedResourceImplP__ResourceOperations__operation(uint8_t value){
#line 44
  unsigned char result;
#line 44

#line 44
  result = ResourceP__ResourceOperations__operation(value);
#line 44

#line 44
  return result;
#line 44
}
#line 44
# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 67
  unsigned char result;
#line 67

#line 67
  result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 118 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer0SyncP.nc"
static inline Atm128_TIFR_t HplAtm128Timer0SyncP__TimerCtrl__getInterruptFlag(void )
#line 118
{
  return * (Atm128_TIFR_t *)& * (volatile uint8_t *)(0x36 + 0x20);
}

# 53 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__TimerCtrl__getInterruptFlag(void ){
#line 53
  union __nesc_unnamed4273 result;
#line 53

#line 53
  result = HplAtm128Timer0SyncP__TimerCtrl__getInterruptFlag();
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 103 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 58 "/homes/mhartmann/baq/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 129 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 211 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/Atm128AlarmSyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__stop(void )
#line 211
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 212
    /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__set = FALSE;
#line 212
    __nesc_atomic_end(__nesc_atomic); }
}

# 73 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__stop();
#line 73
}
#line 73
# 71 "/homes/mhartmann/baq/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 102 "/homes/mhartmann/baq/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint8_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 137
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 88 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
inline static error_t ArbiterDemoC__Resource1__request(void ){
#line 88
  unsigned char result;
#line 88

#line 88
  result = /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__Resource__request(/*ArbiterDemoAppC.Resource1*/SharedResourceC__1__RESOURCE_ID);
#line 88

#line 88
  return result;
#line 88
}
#line 88
#line 120
inline static error_t ArbiterDemoC__Resource1__release(void ){
#line 120
  unsigned char result;
#line 120

#line 120
  result = /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__Resource__release(/*ArbiterDemoAppC.Resource1*/SharedResourceC__1__RESOURCE_ID);
#line 120

#line 120
  return result;
#line 120
}
#line 120








inline static bool ArbiterDemoC__Resource1__isOwner(void ){
#line 128
  unsigned char result;
#line 128

#line 128
  result = /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__Resource__isOwner(/*ArbiterDemoAppC.Resource1*/SharedResourceC__1__RESOURCE_ID);
#line 128

#line 128
  return result;
#line 128
}
#line 128
# 54 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortB.Bit6*/HplAtm128GeneralIOPinP__14__IO__get(void )
#line 54
{
#line 54
  return (* (volatile uint8_t * )54U & (1 << 6)) != 0;
}

# 43 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static bool ArbiterDemoC__Button1__get(void ){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*HplAtm128GeneralIOC.PortB.Bit6*/HplAtm128GeneralIOPinP__14__IO__get();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 88 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
inline static error_t ArbiterDemoC__Resource0__request(void ){
#line 88
  unsigned char result;
#line 88

#line 88
  result = /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__Resource__request(/*ArbiterDemoAppC.Resource0*/SharedResourceC__0__RESOURCE_ID);
#line 88

#line 88
  return result;
#line 88
}
#line 88
#line 120
inline static error_t ArbiterDemoC__Resource0__release(void ){
#line 120
  unsigned char result;
#line 120

#line 120
  result = /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__Resource__release(/*ArbiterDemoAppC.Resource0*/SharedResourceC__0__RESOURCE_ID);
#line 120

#line 120
  return result;
#line 120
}
#line 120








inline static bool ArbiterDemoC__Resource0__isOwner(void ){
#line 128
  unsigned char result;
#line 128

#line 128
  result = /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__Resource__isOwner(/*ArbiterDemoAppC.Resource0*/SharedResourceC__0__RESOURCE_ID);
#line 128

#line 128
  return result;
#line 128
}
#line 128
# 54 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortB.Bit5*/HplAtm128GeneralIOPinP__13__IO__get(void )
#line 54
{
#line 54
  return (* (volatile uint8_t * )54U & (1 << 5)) != 0;
}

# 43 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static bool ArbiterDemoC__Button0__get(void ){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*HplAtm128GeneralIOC.PortB.Bit5*/HplAtm128GeneralIOPinP__13__IO__get();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 33 "ArbiterDemoC.nc"
static inline void ArbiterDemoC__Timer0__fired(void )
#line 33
{
  if (ArbiterDemoC__Button0__get()) {
      if (ArbiterDemoC__Resource0__isOwner()) {
          ArbiterDemoC__ResourceOperations0__operation(0x00);
          ArbiterDemoC__Resource0__release();
          ArbiterDemoC__LCD128x64__startWriteString("Resource0 released ", 0, 1);
        }
      else 
#line 39
        {
          if (!ArbiterDemoC__Resource0__request()) {
              ArbiterDemoC__LCD128x64__startWriteString("Resource0 busy   ", 0, 1);
            }
        }
    }

  if (ArbiterDemoC__Button1__get()) {
      if (ArbiterDemoC__Resource1__isOwner()) {
          ArbiterDemoC__ResourceOperations1__operation(0x00);
          ArbiterDemoC__Resource1__release();
          ArbiterDemoC__LCD128x64__startWriteString("Resource1 released ", 0, 1);
        }
      else 
#line 51
        {
          if (!ArbiterDemoC__Resource1__request()) {
              ArbiterDemoC__LCD128x64__startWriteString("Resource1 busy   ", 0, 1);
            }
        }
    }
}

# 25 "ResourceP.nc"
static inline void ResourceP__Timer0__fired(void )
#line 25
{

  if (ResourceP__state) {
      ResourceP__Leds__setPort(0x00, 2);
      ResourceP__state = FALSE;
    }
  else 
#line 30
    {
      ResourceP__Leds__setPort(ResourceP__ledValue, 2);
      ResourceP__state = TRUE;
    }
}

# 206 "/homes/mhartmann/baq/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x2b9430797da0){
#line 83
  switch (arg_0x2b9430797da0) {
#line 83
    case 0U:
#line 83
      ArbiterDemoC__Timer0__fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      ResourceP__Timer0__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x2b9430797da0);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 60 "/homes/mhartmann/baq/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline bool /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__qHead == /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceQueue.nc"
inline static bool /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char result;
#line 53

#line 53
  result = /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 68 "/homes/mhartmann/baq/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__qHead != /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
        uint8_t id = /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__qHead;

#line 72
        /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__qHead = /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[/*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__qHead];
        if (/*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__qHead == /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__qTail = /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
          }
#line 75
        /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[id] = /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char result;
#line 70

#line 70
  result = /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 218 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
static inline void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceConfigure.nc"
inline static void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x2b943082b868){
#line 65
    /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x2b943082b868);
#line 65
}
#line 65
# 208 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
static inline void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void )
#line 208
{
}

# 46 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void ){
#line 46
  /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted();
#line 46
}
#line 46
# 204 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
static inline void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 204
{
}

# 53 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceRequested.nc"
inline static void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(uint8_t arg_0x2b943082e660){
#line 53
    /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(arg_0x2b943082e660);
#line 53
}
#line 53
# 64 "/homes/mhartmann/baq/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline bool /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[id] != /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY || /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(id)) {
        if (/*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__qHead == /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__qHead = id;
          }
        else {
#line 88
          /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[/*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__qTail] = id;
          }
#line 89
        /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 90
          SUCCESS;

#line 90
          return __nesc_temp;
        }
      }
#line 92
    {
      unsigned char __nesc_temp = 
#line 92
      EBUSY;

#line 92
      return __nesc_temp;
    }
  }
}

# 79 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceQueue.nc"
inline static error_t /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char result;
#line 79

#line 79
  result = /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(id);
#line 79

#line 79
  return result;
#line 79
}
#line 79
# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char result;
#line 67

#line 67
  result = SchedulerBasicP__TaskBasic__postTask(/*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__grantedTask);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 133 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
static inline error_t /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void )
#line 133
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 134
    {
      if (/*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__resId == /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__default_owner_id) {
          if (/*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__state == /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__RES_GRANTING) {
              /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
              {
                unsigned char __nesc_temp = 
#line 138
                SUCCESS;

                {
#line 138
                  __nesc_atomic_end(__nesc_atomic); 
#line 138
                  return __nesc_temp;
                }
              }
            }
          else {
#line 140
            if (/*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__state == /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__RES_IMM_GRANTING) {
                /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__resId = /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__reqResId;
                /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__state = /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 143
                  SUCCESS;

                  {
#line 143
                    __nesc_atomic_end(__nesc_atomic); 
#line 143
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 149
    __nesc_atomic_end(__nesc_atomic); }
#line 147
  return FAIL;
}

#line 210
static inline void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void )
#line 210
{
  /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
}

# 73 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void ){
#line 73
  /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested();
#line 73
}
#line 73
# 159 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer0SyncP.nc"
static inline void HplAtm128Timer0SyncP__Compare__set(uint8_t t)
#line 159
{
  * (volatile uint8_t *)(0x31 + 0x20) = t;
}

# 54 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__size_type t){
#line 54
  HplAtm128Timer0SyncP__Compare__set(t);
#line 54
}
#line 54
# 74 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer0SyncP.nc"
static inline uint8_t HplAtm128Timer0SyncP__Timer__get(void )
#line 74
{
#line 74
  return * (volatile uint8_t *)(0x32 + 0x20);
}

# 61 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Timer__get(void ){
#line 61
  unsigned char result;
#line 61

#line 61
  result = HplAtm128Timer0SyncP__Timer__get();
#line 61

#line 61
  return result;
#line 61
}
#line 61
# 248 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer0SyncP.nc"
static inline int HplAtm128Timer0SyncP__TimerSync__compareBusy(void )
#line 248
{
  return (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 1)) != 0;
}

# 51 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128TimerSync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__TimerSync__compareBusy(void ){
#line 51
  int result;
#line 51

#line 51
  result = HplAtm128Timer0SyncP__TimerSync__compareBusy();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 81 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/Atm128AlarmSyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__setOcr0(uint8_t n)
#line 81
{
  while (/*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__TimerSync__compareBusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Timer__get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__base + n + 1 < /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__base) {
    n = -/*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__base - 1;
    }
#line 91
  /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__set(n);
}

# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 67
  unsigned char result;
#line 67

#line 67
  result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 81 "/homes/mhartmann/baq/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 78 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
}
#line 78
# 141 "/homes/mhartmann/baq/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 233 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/Atm128AlarmSyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__getAlarm(void )
#line 233
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 234
    {
      unsigned long __nesc_temp = 
#line 234
      /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__dt;

      {
#line 234
        __nesc_atomic_end(__nesc_atomic); 
#line 234
        return __nesc_temp;
      }
    }
#line 236
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 116
  unsigned long result;
#line 116

#line 116
  result = /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__getAlarm();
#line 116

#line 116
  return result;
#line 116
}
#line 116
# 74 "/homes/mhartmann/baq/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 61 "ArbiterDemoC.nc"
static inline void ArbiterDemoC__LCD128x64__barWritten(void )
#line 61
{
}

# 48 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void LCD128x64P__LCD128x64__barWritten(void ){
#line 48
  ArbiterDemoC__LCD128x64__barWritten();
#line 48
}
#line 48
# 356 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
static inline void LCD128x64P__writeBar__runTask(void )
{
  static volatile uint8_t x_count;
#line 358
  static volatile uint8_t y_count;
#line 358
  static volatile uint8_t y_mod = 0;
#line 358
  static volatile uint8_t byte;

  for (x_count = 0; x_count < LCD128x64P__aBar; x_count++) 
    {





      if (LCD128x64P__yPos[4] % 8 == 0 && LCD128x64P__bBar % 8 == 0) 
        {
          y_mod = LCD128x64P__bBar / 8;
          for (y_count = 0; y_count < y_mod; y_count++) 
            {
              LCD128x64P__setAddress(LCD128x64P__xPos[4] + x_count, LCD128x64P__yPos[4] / 8 + y_count);
              LCD128x64P__writeGLCD(1, 0xFF);
            }
        }




      if (LCD128x64P__bBar < 8 && LCD128x64P__yPos[4] % 8 == 0) 
        {

          if (y_mod == 0) 
            {
              y_mod = LCD128x64P__bBar % 8;

              for (y_count = 0; y_count < y_mod; y_count++) 
                {
                  byte |= 1 << y_count;
                }
            }
          LCD128x64P__setAddress(LCD128x64P__xPos[4] + x_count, LCD128x64P__yPos[4] / 8);
          LCD128x64P__writeGLCD(1, byte);
        }
      else 
#line 406
        {
          for (y_count = 0; y_count < LCD128x64P__bBar; y_count++) 
            {
              LCD128x64P__LCD128x64__setPixel(LCD128x64P__xPos[4] + x_count, LCD128x64P__yPos[4] + y_count);
            }
        }
    }
  LCD128x64P__LCD128x64__barWritten();
}

# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t LCD128x64P__wait4Controller__postTask(void ){
#line 67
  unsigned char result;
#line 67

#line 67
  result = SchedulerBasicP__TaskBasic__postTask(LCD128x64P__wait4Controller);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 107 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
static inline uint8_t LCD128x64P__readByte(uint8_t mode)
{
  uint8_t tmp = 0;
#line 109
  uint8_t c = 0;

  for (c = 0; c < 2; c++) 
    {
      LCD128x64P__wait4Controller__postTask();


      * (volatile uint8_t *)(0x03 + 0x20) |= (1 << 6) | (1 << 5);
      if (mode == 0) 
        {
          * (volatile uint8_t *)(0x03 + 0x20) &= ~(1 << 4);
        }
      else 
        {
          * (volatile uint8_t *)(0x03 + 0x20) |= 1 << 4;
          * (volatile uint8_t *)(0x1A + 0x20) = 0x00;
        }
       __asm volatile ("nop"); __asm volatile ("nop");
       __asm volatile ("nop"); __asm volatile ("nop");
       __asm volatile ("nop"); __asm volatile ("nop");
       __asm volatile ("nop"); __asm volatile ("nop");

      tmp = * (volatile uint8_t *)(0x19 + 0x20);

      * (volatile uint8_t *)(0x03 + 0x20) &= ~((1 << 6) | (1 << 5));
      * (volatile uint8_t *)(0x1A + 0x20) = 0xFF;
    }

  return tmp;
}

# 65 "ArbiterDemoC.nc"
static inline void ArbiterDemoC__LCD128x64__lineWritten(void )
#line 65
{
}

# 46 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void LCD128x64P__LCD128x64__lineWritten(void ){
#line 46
  ArbiterDemoC__LCD128x64__lineWritten();
#line 46
}
#line 46
# 278 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
static inline void LCD128x64P__writeLine__runTask(void )
{
  static volatile uint8_t count;
#line 280
  static volatile uint8_t orientation;
#line 280
  static volatile uint8_t dx;
#line 280
  static volatile uint8_t dy;
#line 280
  static volatile uint8_t steep = 0;
#line 280
  static volatile uint8_t steepCnt = 0;
  float tmp = 0;

  dx = LCD128x64P__xLineEnd - LCD128x64P__xPos[3];

  if (LCD128x64P__yLineEnd > LCD128x64P__yPos[3]) 
    {
      tmp = (LCD128x64P__yLineEnd - LCD128x64P__yPos[3]) / (float )(LCD128x64P__xLineEnd - LCD128x64P__xPos[3]);
      orientation = 2;
      dy = LCD128x64P__yLineEnd - LCD128x64P__yPos[3];
    }
  if (LCD128x64P__yLineEnd < LCD128x64P__yPos[3]) 
    {
      tmp = (LCD128x64P__yPos[3] - LCD128x64P__yLineEnd) / ((float )LCD128x64P__xLineEnd - LCD128x64P__xPos[3]);
      orientation = 1;
      dy = LCD128x64P__yPos[3] - LCD128x64P__yLineEnd;
    }





  if (dy > dx) {
    steep = dy / dx;
    }
  else {
#line 305
    steep = 0;
    }
  if (LCD128x64P__yLineEnd == LCD128x64P__yPos[3]) 
    {
      tmp = 0;
      orientation = 0;
    }

  if (LCD128x64P__xPos[3] == LCD128x64P__xLineEnd) 
    {
      for (count = 0; count < LCD128x64P__yLineEnd - LCD128x64P__yPos[3]; count++) 
        {
          LCD128x64P__LCD128x64__setPixel(LCD128x64P__xPos[3], LCD128x64P__yPos[3] + count);
        }
    }
  else 
    {

      for (count = 0; count <= LCD128x64P__xLineEnd - LCD128x64P__xPos[3]; count++) 
        {
          if (orientation == 1) 
            {
              for (steepCnt = 0; steepCnt <= steep; steepCnt++) 
                {
                  if (LCD128x64P__yPos[3] - tmp * (float )count + steepCnt >= LCD128x64P__yLineEnd) {
                    LCD128x64P__LCD128x64__setPixel(LCD128x64P__xPos[3] + count, LCD128x64P__yPos[3] - tmp * (float )count + steepCnt);
                    }
                }
            }
          else {
#line 333
            if (orientation == 2) 
              {
                for (steepCnt = 0; steepCnt <= steep; steepCnt++) 
                  {
                    LCD128x64P__LCD128x64__setPixel(LCD128x64P__xPos[3] + count, LCD128x64P__yPos[3] + tmp * (float )count + steepCnt);
                  }
              }
            else {
              if (orientation == 0) 
                {
                  LCD128x64P__LCD128x64__setPixel(LCD128x64P__xPos[3] + count, LCD128x64P__yPos[3]);
                }
              }
            }
        }
    }
#line 347
  LCD128x64P__LCD128x64__lineWritten();
}

# 63 "ArbiterDemoC.nc"
static inline void ArbiterDemoC__LCD128x64__screenCleared(void )
#line 63
{
}

# 50 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void LCD128x64P__LCD128x64__screenCleared(void ){
#line 50
  ArbiterDemoC__LCD128x64__screenCleared();
#line 50
}
#line 50
# 247 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
static inline void LCD128x64P__clearScreenNB__runTask(void )
{

  for (LCD128x64P__pageAddr = 0; LCD128x64P__pageAddr < 64 >> 3; LCD128x64P__pageAddr++) 
    {
      for (LCD128x64P__xAddr = 0; LCD128x64P__xAddr < 128; LCD128x64P__xAddr++) 
        {
          LCD128x64P__setAddress(LCD128x64P__xAddr, LCD128x64P__pageAddr);
          LCD128x64P__writeGLCD(1, LCD128x64P__modPattern);
        }
    }
  LCD128x64P__LCD128x64__screenCleared();
}

# 71 "ArbiterDemoC.nc"
static inline void ArbiterDemoC__LCD128x64__stringWritten(void )
#line 71
{
}

# 42 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void LCD128x64P__LCD128x64__stringWritten(void ){
#line 42
  ArbiterDemoC__LCD128x64__stringWritten();
#line 42
}
#line 42
# 219 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
static inline void LCD128x64P__writeString__runTask(void )
{
  uint8_t index = 0;
#line 221
  uint8_t offset = 0;

  while (*LCD128x64P__dataPtr != '\0') 
    {
      for (index = 0; index < 5; index++) 
        {

          LCD128x64P__setAddress(LCD128x64P__xPos[2] + offset, LCD128x64P__yPos[2]);
          LCD128x64P__writeGLCD(1, (uint8_t )__extension__ ({
#line 229
            uint16_t __addr16 = (uint16_t )(uint16_t )&Font5x7[(*LCD128x64P__dataPtr - 0x20) * 5 + index];
#line 229
            uint8_t __result;

#line 229
             __asm ("lpm""\n\t""mov %0, r0""\n\t" : "=r"(__result) : "z"(__addr16) : "r0");__result;
          }
          ));
#line 230
          offset++;
        }
      LCD128x64P__setAddress(LCD128x64P__xPos[2] + offset, LCD128x64P__yPos[2]);
      LCD128x64P__writeGLCD(1, 0x00);
      offset++;
      LCD128x64P__dataPtr++;
    }
  LCD128x64P__LCD128x64__stringWritten();
}

# 67 "ArbiterDemoC.nc"
static inline void ArbiterDemoC__LCD128x64__circleWritten(void )
#line 67
{
}

# 40 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void LCD128x64P__LCD128x64__circleWritten(void ){
#line 40
  ArbiterDemoC__LCD128x64__circleWritten();
#line 40
}
#line 40
# 186 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
static inline void LCD128x64P__writeCircle__runTask(void )
{
  int tswitch;
#line 188
  int y;
#line 188
  int x = 0;
#line 188
  int yDraw = 0;
  unsigned char d;

  d = LCD128x64P__yPos[1] - LCD128x64P__xPos[1];
  y = LCD128x64P__rad;
  tswitch = 3 - 2 * LCD128x64P__rad;
  while (x <= y) 
    {
      yDraw = y;

      LCD128x64P__LCD128x64__setPixel(LCD128x64P__xPos[1] + x, LCD128x64P__yPos[1] + yDraw);
      LCD128x64P__LCD128x64__setPixel(LCD128x64P__xPos[1] + x, LCD128x64P__yPos[1] - yDraw);
      LCD128x64P__LCD128x64__setPixel(LCD128x64P__xPos[1] - x, LCD128x64P__yPos[1] + yDraw);
      LCD128x64P__LCD128x64__setPixel(LCD128x64P__xPos[1] - x, LCD128x64P__yPos[1] - yDraw);
      LCD128x64P__LCD128x64__setPixel(LCD128x64P__yPos[1] + yDraw - d, LCD128x64P__yPos[1] + x);
      LCD128x64P__LCD128x64__setPixel(LCD128x64P__yPos[1] + yDraw - d, LCD128x64P__yPos[1] - x);
      LCD128x64P__LCD128x64__setPixel(LCD128x64P__yPos[1] - yDraw - d, LCD128x64P__yPos[1] + x);
      LCD128x64P__LCD128x64__setPixel(LCD128x64P__yPos[1] - yDraw - d, LCD128x64P__yPos[1] - x);

      if (tswitch < 0) {
        tswitch += 4 * x + 6;
        }
      else {
          tswitch += 4 * (x - yDraw) + 10;
          y--;
        }
      x++;
    }
  LCD128x64P__LCD128x64__circleWritten();
}

# 69 "ArbiterDemoC.nc"
static inline void ArbiterDemoC__LCD128x64__rectangleWritten(void )
#line 69
{
}

# 44 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void LCD128x64P__LCD128x64__rectangleWritten(void ){
#line 44
  ArbiterDemoC__LCD128x64__rectangleWritten();
#line 44
}
#line 44
# 170 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
static inline void LCD128x64P__writeRectangle__runTask(void )
{
  unsigned char j;

#line 173
  for (j = 0; j < LCD128x64P__bRect; j++) 
    {
      LCD128x64P__LCD128x64__setPixel(LCD128x64P__xPos[0], LCD128x64P__yPos[0] + j);
      LCD128x64P__LCD128x64__setPixel(LCD128x64P__xPos[0] + LCD128x64P__aRect - 1, LCD128x64P__yPos[0] + j);
    }
  for (j = 0; j < LCD128x64P__aRect; j++) 
    {
      LCD128x64P__LCD128x64__setPixel(LCD128x64P__xPos[0] + j, LCD128x64P__yPos[0]);
      LCD128x64P__LCD128x64__setPixel(LCD128x64P__xPos[0] + j, LCD128x64P__yPos[0] + LCD128x64P__bRect - 1);
    }
  LCD128x64P__LCD128x64__rectangleWritten();
}

#line 37
static inline void LCD128x64P__wait4Controller__runTask(void )
{
  * (volatile uint8_t *)(0x1A + 0x20) = 0x00;
  * (volatile uint8_t *)(0x03 + 0x20) |= 1 << 5;
  * (volatile uint8_t *)(0x03 + 0x20) &= ~(1 << 4);
  * (volatile uint8_t *)(0x03 + 0x20) |= 1 << 6;


  while (* (volatile uint8_t *)(0x19 + 0x20) & 0x80) 
    {
      * (volatile uint8_t *)(0x03 + 0x20) &= ~(1 << 6);
       __asm volatile ("nop"); __asm volatile ("nop");
      * (volatile uint8_t *)(0x03 + 0x20) |= 1 << 6;
       __asm volatile ("nop"); __asm volatile ("nop");}


  * (volatile uint8_t *)(0x03 + 0x20) &= ~(1 << 6);
  * (volatile uint8_t *)(0x03 + 0x20) |= 1 << 5;
  * (volatile uint8_t *)(0x1A + 0x20) = 0xFF;
}

# 146 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer0SyncP.nc"
static inline void HplAtm128Timer0SyncP__Compare__start(void )
#line 146
{
#line 146
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 1;
}

# 65 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__start(void ){
#line 65
  HplAtm128Timer0SyncP__Compare__start();
#line 65
}
#line 65
# 100 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer0SyncP.nc"
static inline void HplAtm128Timer0SyncP__TimerCtrl__setControl(Atm128TimerControl_t x)
#line 100
{
  * (volatile uint8_t *)(0x33 + 0x20) = x.flat;
}

# 46 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__TimerCtrl__setControl(Atm128TimerControl_t control){
#line 46
  HplAtm128Timer0SyncP__TimerCtrl__setControl(control);
#line 46
}
#line 46
# 240 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer0SyncP.nc"
static inline void HplAtm128Timer0SyncP__TimerSync__setTimer0Synchronous(void )
#line 240
{
  * (volatile uint8_t *)(0x30 + 0x20) &= 1 << 3;
}

# 39 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128TimerSync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__TimerSync__setTimer0Synchronous(void ){
#line 39
  HplAtm128Timer0SyncP__TimerSync__setTimer0Synchronous();
#line 39
}
#line 39
# 61 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/Atm128AlarmSyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Init__init(void )
#line 61
{
  /* atomic removed: atomic calls only */
  {
    Atm128TimerControl_t x;

    /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__TimerSync__setTimer0Synchronous();
    x.flat = 0;
    x.bits.cs = 3;
    x.bits.wgm1 = 1;
    /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__TimerCtrl__setControl(x);
    /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__MAXT);
    /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__start();
  }
  /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__setInterrupt();
  return SUCCESS;
}

# 55 "/homes/mhartmann/baq/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init(void )
#line 55
{
  memset(/*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__resQ, /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
}

# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char result;
#line 62

#line 62
  result = /*SharedResourceP.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init();
#line 62
  result = ecombine(result, /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Init__init());
#line 62

#line 62
  return result;
#line 62
}
#line 62
# 64 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
inline static void ArbiterDemoC__Timer0__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(0U, dt);
#line 64
}
#line 64
# 59 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit6*/HplAtm128GeneralIOPinP__14__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )55U &= ~(1 << 6);
}

# 44 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void ArbiterDemoC__Button1__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortB.Bit6*/HplAtm128GeneralIOPinP__14__IO__makeInput();
#line 44
}
#line 44
# 59 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit5*/HplAtm128GeneralIOPinP__13__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )55U &= ~(1 << 5);
}

# 44 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void ArbiterDemoC__Button0__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortB.Bit5*/HplAtm128GeneralIOPinP__13__IO__makeInput();
#line 44
}
#line 44
# 58 "ArbiterDemoC.nc"
static inline void ArbiterDemoC__LCD128x64__initDone(void )
#line 58
{
  ArbiterDemoC__LCD128x64__startWriteString("ArbiterDemo", 0, 0);
}

# 38 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void LCD128x64P__LCD128x64__initDone(void ){
#line 38
  ArbiterDemoC__LCD128x64__initDone();
#line 38
}
#line 38
# 265 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
static inline void LCD128x64P__clearScreen(void )
{

  for (LCD128x64P__pageAddr = 0; LCD128x64P__pageAddr < 64 >> 3; LCD128x64P__pageAddr++) 
    {
      for (LCD128x64P__xAddr = 0; LCD128x64P__xAddr < 128; LCD128x64P__xAddr++) 
        {
          LCD128x64P__setAddress(LCD128x64P__xAddr, LCD128x64P__pageAddr);
          LCD128x64P__writeGLCD(1, LCD128x64P__modPattern);
        }
    }
}

#line 416
static inline void LCD128x64P__LCD128x64__initLCD(uint8_t pattern)
{

  * (volatile uint8_t *)(0x02 + 0x20) |= 0xFC;
  * (volatile uint8_t *)(0x1A + 0x20) |= 0xFF;
  * (volatile uint8_t *)(0x03 + 0x20) &= ~0xFC;
  * (volatile uint8_t *)(0x1B + 0x20) = 0x00;



  * (volatile uint8_t *)(0x03 + 0x20) |= 1 << 7;


  LCD128x64P__writeGLCD(0, 0x3E | 0x01);


  LCD128x64P__modPattern = pattern;
  LCD128x64P__clearScreen();



  LCD128x64P__LCD128x64__initDone();
}

# 4 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void ArbiterDemoC__LCD128x64__initLCD(uint8_t pattern){
#line 4
  LCD128x64P__LCD128x64__initLCD(pattern);
#line 4
}
#line 4
# 19 "ArbiterDemoC.nc"
static inline void ArbiterDemoC__Boot__booted(void )
#line 19
{
  ArbiterDemoC__LCD128x64__initLCD(0x00);
  ArbiterDemoC__Button0__makeInput();
  ArbiterDemoC__Button1__makeInput();
  ArbiterDemoC__Timer0__startPeriodic(500);
}

# 60 "/homes/mhartmann/baq/tinyos/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  ArbiterDemoC__Boot__booted();
#line 60
}
#line 60
# 179 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer0SyncP.nc"
static inline mcu_power_t HplAtm128Timer0SyncP__McuPowerOverride__lowestState(void )
#line 179
{
  uint8_t diff;


  if (* (volatile uint8_t *)(0x37 + 0x20) & ((1 << 1) | (1 << 0))) {





      while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
        ;

      diff = * (volatile uint8_t *)(0x31 + 0x20) - * (volatile uint8_t *)(0x32 + 0x20);
      if (diff < EXT_STANDBY_T0_THRESHOLD || 
      * (volatile uint8_t *)(0x32 + 0x20) > 256 - EXT_STANDBY_T0_THRESHOLD) {
        return ATM128_POWER_EXT_STANDBY;
        }
#line 196
      return ATM128_POWER_SAVE;
    }
  else {
      return ATM128_POWER_DOWN;
    }
}

# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  unsigned char result;
#line 62

#line 62
  result = HplAtm128Timer0SyncP__McuPowerOverride__lowestState();
#line 62

#line 62
  return result;
#line 62
}
#line 62
# 74 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/McuSleepC.nc"
static inline mcu_power_t McuSleepC__getPowerState(void )
#line 74
{





  return ATM128_POWER_IDLE;


  if (* (volatile uint8_t *)(0x37 + 0x20) & ~((((1 << 1) | (1 << 0)) | (1 << 2)) | (1 << 6)) || 
  * (volatile uint8_t *)0x7D & ~(1 << 2)) {
      return ATM128_POWER_IDLE;
    }
  else {
    if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x0D + 0x20) & (1 << 6)) {
        return ATM128_POWER_IDLE;
      }
    else {
      if ((* (volatile uint8_t *)(0x0A + 0x20) | * (volatile uint8_t *)0x9A) & ((1 << 6) | (1 << 7))) {
          return ATM128_POWER_IDLE;
        }
      else {
        if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0x74 & (1 << 2)) {
            return ATM128_POWER_IDLE;
          }
        else {
          if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x06 + 0x20) & (1 << 7)) {
              return ATM128_POWER_ADC_NR;
            }
          else {
              return ATM128_POWER_DOWN;
            }
          }
        }
      }
    }
}

# 140 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 140
{
  return m1 < m2 ? m1 : m2;
}

# 108 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC__McuSleep__sleep(void )
#line 108
{
  uint8_t powerState;

  powerState = mcombine(McuSleepC__getPowerState(), McuSleepC__McuPowerOverride__lowestState());
  * (volatile uint8_t *)(0x35 + 0x20) = ((
  * (volatile uint8_t *)(0x35 + 0x20) & 0xe3) | (1 << 5)) | __extension__ ({
#line 113
    uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC__atm128PowerBits[powerState];
#line 113
    uint8_t __result;

#line 113
     __asm ("lpm""\n\t""mov %0, r0""\n\t" : "=r"(__result) : "z"(__addr16) : "r0");__result;
  }
  );
#line 115
   __asm volatile ("sei");

   __asm volatile ("sleep" :  :  : "memory");
   __asm volatile ("cli");}

# 76 "/homes/mhartmann/baq/tinyos/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 76
  McuSleepC__McuSleep__sleep();
#line 76
}
#line 76
# 78 "/homes/mhartmann/baq/tinyos/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

#line 83
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
#line 161
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 72 "/homes/mhartmann/baq/tinyos/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 72
  SchedulerBasicP__Scheduler__taskLoop();
#line 72
}
#line 72
# 164 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer0SyncP.nc"
static __inline void HplAtm128Timer0SyncP__stabiliseTimer0(void )
#line 164
{
  * (volatile uint8_t *)(0x33 + 0x20) = * (volatile uint8_t *)(0x33 + 0x20);
  while (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 0)) 
    ;
}

# 58 "/homes/mhartmann/baq/tinyos/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 82 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Counter__overflow(void ){
#line 82
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 82
}
#line 82
# 88 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 88
{
   __asm volatile ("sei");}

# 156 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer0SyncP.nc"
static inline uint8_t HplAtm128Timer0SyncP__Compare__get(void )
#line 156
{
#line 156
  return * (volatile uint8_t *)(0x31 + 0x20);
}

# 48 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__get(void ){
#line 48
  unsigned char result;
#line 48

#line 48
  result = HplAtm128Timer0SyncP__Compare__get();
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 156 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/Atm128AlarmSyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__fired(void )
#line 156
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__base += /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__base;
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Counter__overflow();
    }
}

# 58 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Compare.nc"
inline static void HplAtm128Timer0SyncP__Compare__fired(void ){
#line 58
  /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__fired();
#line 58
}
#line 58
# 237 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/Atm128AlarmSyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Timer__overflow(void )
#line 237
{
}

# 70 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer.nc"
inline static void HplAtm128Timer0SyncP__Timer__overflow(void ){
#line 70
  /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Timer__overflow();
#line 70
}
#line 70
# 63 "/homes/mhartmann/baq/tinyos/tos/system/RealMainP.nc"
  int main(void )
#line 63
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
#line 71
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 134 "/homes/mhartmann/baq/tinyos/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 138
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 142
          FALSE;

#line 142
          return __nesc_temp;
        }
      }
  }
#line 145
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 175
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x2b9430313108){
#line 75
  switch (arg_0x2b9430313108) {
#line 75
    case LCD128x64P__wait4Controller:
#line 75
      LCD128x64P__wait4Controller__runTask();
#line 75
      break;
#line 75
    case LCD128x64P__writeRectangle:
#line 75
      LCD128x64P__writeRectangle__runTask();
#line 75
      break;
#line 75
    case LCD128x64P__writeCircle:
#line 75
      LCD128x64P__writeCircle__runTask();
#line 75
      break;
#line 75
    case LCD128x64P__writeString:
#line 75
      LCD128x64P__writeString__runTask();
#line 75
      break;
#line 75
    case LCD128x64P__clearScreenNB:
#line 75
      LCD128x64P__clearScreenNB__runTask();
#line 75
      break;
#line 75
    case LCD128x64P__writeLine:
#line 75
      LCD128x64P__writeLine__runTask();
#line 75
      break;
#line 75
    case LCD128x64P__writeBar:
#line 75
      LCD128x64P__writeBar__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 75
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 75
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 75
      break;
#line 75
    case /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__grantedTask:
#line 75
      /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x2b9430313108);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 440 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
static void LCD128x64P__LCD128x64__startWriteString(char *data, uint8_t x, uint8_t y)
{
  LCD128x64P__xPos[2] = x;
  LCD128x64P__yPos[2] = y;
  LCD128x64P__dataPtr = data;

  LCD128x64P__writeString__postTask();
}

# 170 "/homes/mhartmann/baq/tinyos/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
#line 172
      {
        unsigned char __nesc_temp = 
#line 172
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
#line 172
          __nesc_atomic_end(__nesc_atomic); 
#line 172
          return __nesc_temp;
        }
      }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
}

# 55 "SharedResourceImplP.nc"
static error_t SharedResourceImplP__SharedResourceOperations__operation(uint8_t id, uint8_t value)
#line 55
{
  if (SharedResourceImplP__ArbiterInfo__userId() == id && SharedResourceImplP__ResourceOperations__operation(value) == SUCCESS) {
      SharedResourceImplP__current_id = id;
      return SUCCESS;
    }
  return FAIL;
}

# 161 "/homes/mhartmann/baq/tinyos/tos/system/LedsP.nc"
static void LedsP__Leds__setPort(uint8_t pval, uint8_t port)
#line 161
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 162
    {
      if (port == 0) {
          * (volatile uint8_t *)(0x1B + 0x20) = pval;
        }
      if (port == 1) {
          * (volatile uint8_t *)(0x18 + 0x20) = pval;
        }
      if (port == 2) {
          * (volatile uint8_t *)(0x15 + 0x20) = pval;
        }
      if (port == 3) {
          * (volatile uint8_t *)(0x12 + 0x20) = pval;
        }
      if (port == 4) {
          * (volatile uint8_t *)(0x03 + 0x20) = pval;
        }
    }
#line 178
    __nesc_atomic_end(__nesc_atomic); }
}

# 146 "/homes/mhartmann/baq/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 149
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 168 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/Atm128AlarmSyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Counter__get(void )
#line 168
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Timer__get();

      if (/*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__TimerCtrl__getInterruptFlag().bits.ocf0) {


        now = /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__base + /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__get() + 1 + /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Timer__get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__base + now8;
        }
    }
#line 186
    __nesc_atomic_end(__nesc_atomic); }
#line 186
  return now;
}

# 75 "/homes/mhartmann/baq/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint8_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 92
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 177 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
static uint8_t /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__Resource__isOwner(uint8_t id)
#line 177
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 178
    {
      if (/*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__resId == id && /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__state == /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__RES_BUSY) {
          unsigned char __nesc_temp = 
#line 179
          TRUE;

          {
#line 179
            __nesc_atomic_end(__nesc_atomic); 
#line 179
            return __nesc_temp;
          }
        }
      else 
#line 180
        {
          unsigned char __nesc_temp = 
#line 180
          FALSE;

          {
#line 180
            __nesc_atomic_end(__nesc_atomic); 
#line 180
            return __nesc_temp;
          }
        }
    }
#line 183
    __nesc_atomic_end(__nesc_atomic); }
}

#line 111
static error_t /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    {
      if (/*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__state == /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__RES_BUSY && /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__resId == id) {
          if (/*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__Queue__isEmpty() == FALSE) {
              /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__reqResId = /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__Queue__dequeue();
              /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__resId = /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__NO_RES;
              /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__state = /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__RES_GRANTING;
              /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
              /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
            }
          else {
              /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__resId = /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__default_owner_id;
              /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__state = /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
              /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
              /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted();
            }
          {
            unsigned char __nesc_temp = 
#line 127
            SUCCESS;

            {
#line 127
              __nesc_atomic_end(__nesc_atomic); 
#line 127
              return __nesc_temp;
            }
          }
        }
    }
#line 131
    __nesc_atomic_end(__nesc_atomic); }
#line 130
  return FAIL;
}

#line 77
static error_t /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__Resource__request(uint8_t id)
#line 77
{
  /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(/*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (/*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__state == /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
          /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__state = /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__RES_GRANTING;
          /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__reqResId = id;
        }
      else {
#line 84
        if (/*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__reqResId == id) {
            {
              unsigned char __nesc_temp = 
#line 85
              SUCCESS;

              {
#line 85
                __nesc_atomic_end(__nesc_atomic); 
#line 85
                return __nesc_temp;
              }
            }
          }
        else 
#line 87
          {
            unsigned char __nesc_temp = 
#line 87
            /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__Queue__enqueue(id);

            {
#line 87
              __nesc_atomic_end(__nesc_atomic); 
#line 87
              return __nesc_temp;
            }
          }
        }
    }
#line 91
    __nesc_atomic_end(__nesc_atomic); }
#line 89
  /*SharedResourceP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 219 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/Atm128AlarmSyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt)
#line 219
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__set = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__t0 = nt0;
      /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__dt = ndt;
    }
#line 225
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__setInterrupt();
}

#line 97
static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__setInterrupt(void )
#line 97
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__get() - /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Timer__get();
      uint8_t newOcr0;
      uint8_t tifr = (uint8_t )/*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__TimerCtrl__getInterruptFlag().flat;

#line 108
      ;
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__MINDT) || tifr & (1 << 1)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__MINDT) {
              ;
            }
          else {
              ;
            }
          {
#line 116
            __nesc_atomic_end(__nesc_atomic); 
#line 116
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__set) {
          newOcr0 = /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__MAXT;
          ;
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Counter__get();

#line 127
          ;

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__t0) >= /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__dt) 
            {
              /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__set = FALSE;
              fired = TRUE;
              newOcr0 = /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__dt - /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__base;

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__MAXT) {
                newOcr0 = /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__MAXT;
                }
              else {
#line 143
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__MINDT) {
                  newOcr0 = /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__MINDT;
                  }
                else {
#line 146
                  newOcr0 = alarm_in;
                  }
                }
            }
        }
#line 149
      newOcr0--;
      /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__setOcr0(newOcr0);
    }
#line 151
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__fired();
    }
}

# 85 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
static void LCD128x64P__setAddress(uint8_t xAdd, uint8_t yAdd)
{
  uint8_t tmp;

  if (xAdd < 64) 
    {
      * (volatile uint8_t *)(0x03 + 0x20) |= 1 << 3;
      * (volatile uint8_t *)(0x03 + 0x20) &= ~(1 << 2);
    }
  else 
    {
      * (volatile uint8_t *)(0x03 + 0x20) |= 1 << 2;
      * (volatile uint8_t *)(0x03 + 0x20) &= ~(1 << 3);
    }

  tmp = xAdd & 0x3f;
  LCD128x64P__writeGLCD(0, tmp | 0x40);

  tmp = yAdd & 0x3f;
  LCD128x64P__writeGLCD(0, tmp | 0xB8);
}

#line 58
static void LCD128x64P__writeGLCD(uint8_t mode, uint8_t data)
{
  LCD128x64P__wait4Controller__postTask();


  * (volatile uint8_t *)(0x03 + 0x20) |= 1 << 6;
  if (mode == 0) 
    {

      * (volatile uint8_t *)(0x03 + 0x20) &= ~((1 << 5) | (1 << 4));
      * (volatile uint8_t *)(0x1A + 0x20) = 0xFF;
    }
  else 
    {

      * (volatile uint8_t *)(0x03 + 0x20) &= ~(1 << 5);
      * (volatile uint8_t *)(0x03 + 0x20) |= 1 << 4;
    }
  * (volatile uint8_t *)(0x1B + 0x20) = data;

   __asm volatile ("nop"); __asm volatile ("nop");
   __asm volatile ("nop"); __asm volatile ("nop");
   __asm volatile ("nop"); __asm volatile ("nop");
   __asm volatile ("nop"); __asm volatile ("nop");
  * (volatile uint8_t *)(0x03 + 0x20) &= ~(1 << 6);
}

#line 140
static void LCD128x64P__LCD128x64__setPixel(uint8_t x, uint8_t y)
{
  unsigned char temp;

  LCD128x64P__setAddress(x, y / 8);
  temp = LCD128x64P__readByte(1);
  LCD128x64P__setAddress(x, y / 8);
  LCD128x64P__writeGLCD(1, temp | (1 << y % 8));
}

# 210 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer0SyncP.nc"
__attribute((signal))   void __vector_15(void )
#line 210
{

  if (HplAtm128Timer0SyncP__count == 250) 
    {
      HplAtm128Timer0SyncP__stabiliseTimer0();
      HplAtm128Timer0SyncP__Compare__fired();
      HplAtm128Timer0SyncP__count = 0;
    }
  else 
    {
      HplAtm128Timer0SyncP__count++;
    }
}



__attribute((signal))   void __vector_16(void )
#line 226
{
  HplAtm128Timer0SyncP__stabiliseTimer0();
  HplAtm128Timer0SyncP__Timer__overflow();
}

