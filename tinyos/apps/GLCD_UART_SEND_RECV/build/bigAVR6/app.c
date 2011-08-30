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
extern void *memset(void *arg_0x2aad820777f0, int arg_0x2aad82077a58, size_t arg_0x2aad82077d00);
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


typedef int (*__compar_fn_t)(const void *arg_0x2aad82098968, const void *arg_0x2aad82098c40);
# 23 "/homes/hglanzer/GIT/tinyos/tos/system/tos.h"
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
# 51 "/homes/hglanzer/GIT/tinyos/tos/types/TinyError.h"
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
# 25 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/atm128const.h"
typedef uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef int8_t const_int8_t __attribute((__progmem__)) ;
typedef int16_t const_int16_t __attribute((__progmem__)) ;
typedef int32_t const_int32_t __attribute((__progmem__)) ;
# 88 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/atm128hardware.h"
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
# 43 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/Atm128Adc.h"
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
# 40 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/Timer.h"
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
# 52 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/Atm128Timer.h"
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
# 51 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/MicaTimer.h"
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
# 62 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/hardware.h"
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
# 10 "BlinkC.nc"
enum __nesc_unnamed4298 {
  right = 0, 
  down = 1, 
  left = 2, 
  up = 3
};
# 1 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.h"
enum __nesc_unnamed4299 {

  UNCALIBRATED = 0, 
  CALIBRATION_IN_PROGRESS_LEFT_BOTTOM = 1, 
  CALIBRATION_IN_PROGRESS_RIGHT_TOP = 2, 
  CALIBRATION_DONE = 3
};

enum __nesc_unnamed4300 {

  BUSY_STRING = 1, 
  BUSY_CIRCLE = 2, 
  BUSY_RECT = 4, 
  BUSY_LINE = 8, 
  BUSY_CLEAR = 16, 
  BUSY_BAR = 32
};
# 1 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreen.h"
enum __nesc_unnamed4301 {
  INIT = 0, 
  DUMMY_FIRST_X = 1, 
  FIRST_X = 2, 
  DUMMY_FIRST_Y = 3, 
  FIRST_Y = 4, 
  FINISHED = 5
};
# 33 "/homes/hglanzer/GIT/tinyos/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 43 "/homes/hglanzer/GIT/tinyos/tos/types/Leds.h"
enum __nesc_unnamed4302 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 21 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/lcd128x64/font5x7.h"
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
# 41 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/Atm128Uart.h"
typedef uint8_t Atm128_UDR0_t;
typedef uint8_t Atm128_UDR1_t;
#line 57
#line 45
typedef union __nesc_unnamed4303 {
  struct Atm128_UCSRA_t {
    uint8_t mpcm : 1;
    uint8_t u2x : 1;
    uint8_t upe : 1;
    uint8_t dor : 1;
    uint8_t fe : 1;
    uint8_t udre : 1;
    uint8_t txc : 1;
    uint8_t rxc : 1;
  } bits;
  uint8_t flat;
} Atm128UartStatus_t;

typedef Atm128UartStatus_t Atm128_UCSR0A_t;
typedef Atm128UartStatus_t Atm128_UCSR1A_t;
#line 75
#line 63
typedef union __nesc_unnamed4304 {
  struct Atm128_UCSRB_t {
    uint8_t txb8 : 1;
    uint8_t rxb8 : 1;
    uint8_t ucsz2 : 1;
    uint8_t txen : 1;
    uint8_t rxen : 1;
    uint8_t udrie : 1;
    uint8_t txcie : 1;
    uint8_t rxcie : 1;
  } bits;
  uint8_t flat;
} Atm128UartControl_t;

typedef Atm128UartControl_t Atm128_UCSR0B_t;
typedef Atm128UartControl_t Atm128_UCSR1B_t;

enum __nesc_unnamed4305 {
  ATM128_UART_DATA_SIZE_5_BITS = 0, 
  ATM128_UART_DATA_SIZE_6_BITS = 1, 
  ATM128_UART_DATA_SIZE_7_BITS = 2, 
  ATM128_UART_DATA_SIZE_8_BITS = 3
};
#line 98
#line 88
typedef union __nesc_unnamed4306 {
  uint8_t flat;
  struct Atm128_UCSRC_t {
    uint8_t ucpol : 1;
    uint8_t ucsz : 2;
    uint8_t usbs : 1;
    uint8_t upm : 2;
    uint8_t umsel : 1;
    uint8_t rsvd : 1;
  } bits;
} Atm128UartMode_t;

typedef Atm128UartMode_t Atm128_UCSR0C_t;
typedef Atm128UartMode_t Atm128_UCSR1C_t;





enum __nesc_unnamed4307 {
  ATM128_19200_BAUD_4MHZ = 12, 
  ATM128_38400_BAUD_4MHZ = 6, 
  ATM128_57600_BAUD_4MHZ = 3, 

  ATM128_19200_BAUD_4MHZ_2X = 25, 
  ATM128_38400_BAUD_4MHZ_2X = 12, 
  ATM128_57600_BAUD_4MHZ_2X = 8, 

  ATM128_19200_BAUD_7MHZ = 23, 
  ATM128_38400_BAUD_7MHZ = 11, 
  ATM128_57600_BAUD_7MHZ = 7, 

  ATM128_19200_BAUD_7MHZ_2X = 47, 
  ATM128_38400_BAUD_7MHZ_2X = 23, 
  ATM128_57600_BAUD_7MHZ_2X = 15, 

  ATM128_19200_BAUD_8MHZ = 25, 
  ATM128_38400_BAUD_8MHZ = 12, 
  ATM128_57600_BAUD_8MHZ = 8, 

  ATM128_19200_BAUD_8MHZ_2X = 51, 
  ATM128_38400_BAUD_8MHZ_2X = 34, 
  ATM128_57600_BAUD_8MHZ_2X = 11
};

typedef uint8_t Atm128_UBRR0L_t;
typedef uint8_t Atm128_UBRR0H_t;

typedef uint8_t Atm128_UBRR1L_t;
typedef uint8_t Atm128_UBRR1H_t;

typedef uint8_t uart_parity_t;
typedef uint8_t uart_speed_t;
typedef uint8_t uart_duplex_t;

enum __nesc_unnamed4308 {
  TOS_UART_PARITY_NONE = 0, 
  TOS_UART_PARITY_EVEN = 1, 
  TOS_UART_PARITY_ODD = 2
};

enum __nesc_unnamed4309 {
  TOS_UART_19200 = 0, 
  TOS_UART_38400 = 1, 
  TOS_UART_57600 = 2
};

enum __nesc_unnamed4310 {
  TOS_UART_OFF = 0, 
  TOS_UART_RONLY = 1, 
  TOS_UART_TONLY = 2, 
  TOS_UART_DUPLEX = 3
};
typedef TMilli BlinkC__Timer0__precision_tag;
typedef uint16_t TouchScreenP__Read__val_t;
typedef uint16_t AdcP__Read__val_t;
typedef uint16_t AdcP__ReadNow__val_t;
typedef uint16_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__val_t;
enum /*TouchScreenC.AdcReadClientC*/AdcReadClientC__0____nesc_unnamed4311 {
  AdcReadClientC__0__ID = 0U, AdcReadClientC__0__HAL_ID = 0U
};
typedef TMicro /*Atm128Uart1C.UartP*/Atm128UartP__0__Counter__precision_tag;
typedef uint32_t /*Atm128Uart1C.UartP*/Atm128UartP__0__Counter__size_type;
enum HilTimerMilliC____nesc_unnamed4312 {
  HilTimerMilliC__TIMER_COUNT = 1U
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
# 62 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t MotePlatformP__PlatformInit__init(void );
# 44 "/homes/hglanzer/GIT/tinyos/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortF.Bit0*/HplAtm128GeneralIOPinP__40__IO__makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortF.Bit0*/HplAtm128GeneralIOPinP__40__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortF.Bit1*/HplAtm128GeneralIOPinP__41__IO__makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortF.Bit1*/HplAtm128GeneralIOPinP__41__IO__clr(void );




static void /*HplAtm128GeneralIOC.G3*/HplAtm128GeneralIOSlowPinP__11__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.G3*/HplAtm128GeneralIOSlowPinP__11__IO__set(void );
static void /*HplAtm128GeneralIOC.G3*/HplAtm128GeneralIOSlowPinP__11__IO__clr(void );




static void /*HplAtm128GeneralIOC.G4*/HplAtm128GeneralIOSlowPinP__12__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.G4*/HplAtm128GeneralIOSlowPinP__12__IO__set(void );
static void /*HplAtm128GeneralIOC.G4*/HplAtm128GeneralIOSlowPinP__12__IO__clr(void );
# 62 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Init.nc"
static error_t MeasureClockC__Init__init(void );
# 60 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/Atm128Calibrate.nc"
static uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
#line 53
static uint8_t MeasureClockC__Atm128Calibrate__adcPrescaler(void );
# 67 "/homes/hglanzer/GIT/tinyos/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/homes/hglanzer/GIT/tinyos/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2aad821a0108);
# 75 "/homes/hglanzer/GIT/tinyos/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/homes/hglanzer/GIT/tinyos/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2aad821a0108);
# 57 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 76 "/homes/hglanzer/GIT/tinyos/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 52 "/homes/hglanzer/GIT/tinyos/tos/interfaces/McuPowerState.nc"
static void McuSleepC__McuPowerState__update(void );
# 83 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/Timer.nc"
static void BlinkC__Timer0__fired(void );
# 60 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Boot.nc"
static void BlinkC__Boot__booted(void );
# 15 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/uart/bigAVR6UART0.nc"
static void BlinkC__bigAVR6UART0__receiveDone(uint8_t *buf, uint16_t len, error_t error);

static void BlinkC__bigAVR6UART0__sendDone(uint8_t *buf, uint16_t len, error_t error);
# 75 "/homes/hglanzer/GIT/tinyos/tos/interfaces/TaskBasic.nc"
static void BlinkC__testTask__runTask(void );
# 24 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
static void BlinkC__GLCD__tsPressed(void );
#line 68
static void BlinkC__GLCD__initDone(void );
#line 22
static void BlinkC__GLCD__calibrated(void );
#line 78
static void BlinkC__GLCD__barWritten(void );
#line 76
static void BlinkC__GLCD__lineWritten(void );



static void BlinkC__GLCD__screenCleared(void );
#line 19
static void BlinkC__GLCD__xyReady(uint16_t x, uint16_t y);
#line 70
static void BlinkC__GLCD__circleWritten(void );



static void BlinkC__GLCD__rectangleWritten(void );
#line 72
static void BlinkC__GLCD__stringWritten(void );
# 38 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
static void GLCDP__LCD128x64__initDone(void );









static void GLCDP__LCD128x64__barWritten(void );

static void GLCDP__LCD128x64__screenCleared(void );
#line 46
static void GLCDP__LCD128x64__lineWritten(void );
#line 40
static void GLCDP__LCD128x64__circleWritten(void );



static void GLCDP__LCD128x64__rectangleWritten(void );
#line 42
static void GLCDP__LCD128x64__stringWritten(void );
# 66 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
static error_t GLCDP__GLCD__startClearScreen(uint8_t pattern);
#line 56
static error_t GLCDP__GLCD__startWriteBar(uint8_t x, uint8_t y, uint8_t length, uint8_t width);

static error_t GLCDP__GLCD__startWriteRectangle(uint8_t x, uint8_t y, uint8_t a, uint8_t b);



static error_t GLCDP__GLCD__startWriteString(char *data, uint8_t x, uint8_t y);
#line 34
static void GLCDP__GLCD__initLCD(uint8_t pattern);
# 13 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreen.nc"
static void GLCDP__TouchScreen__tsPressed(void );
#line 11
static void GLCDP__TouchScreen__xyReady(uint16_t x, uint16_t y);
# 63 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Read.nc"
static void TouchScreenP__Read__readDone(error_t result, TouchScreenP__Read__val_t val);
# 32 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t TouchScreenP__Atm128AdcConfig__getRefVoltage(void );
#line 25
static uint8_t TouchScreenP__Atm128AdcConfig__getChannel(void );
#line 39
static uint8_t TouchScreenP__Atm128AdcConfig__getPrescaler(void );
# 75 "/homes/hglanzer/GIT/tinyos/tos/interfaces/TaskBasic.nc"
static void TouchScreenP__checkTS__runTask(void );
# 4 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreen.nc"
static void TouchScreenP__TouchScreen__getXY(void );
# 62 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Init.nc"
static error_t Atm128AdcP__Init__init(void );
# 119 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
static bool Atm128AdcP__Atm128AdcMultiple__default__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 70 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static bool Atm128AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
# 156 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/HplAtm128Adc.nc"
static void Atm128AdcP__HplAtm128Adc__dataReady(uint16_t data);
# 95 "/homes/hglanzer/GIT/tinyos/tos/interfaces/AsyncStdControl.nc"
static error_t Atm128AdcP__AsyncStdControl__start(void );









static error_t Atm128AdcP__AsyncStdControl__stop(void );
# 53 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/HplAtm128Adc.nc"
static Atm128Admux_t HplAtm128AdcP__HplAtm128Adc__getAdmux(void );
#line 82
static void HplAtm128AdcP__HplAtm128Adc__enableAdc(void );
#line 58
static void HplAtm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t admux);
#line 150
static bool HplAtm128AdcP__HplAtm128Adc__cancel(void );
#line 86
static void HplAtm128AdcP__HplAtm128Adc__disableAdc(void );








static void HplAtm128AdcP__HplAtm128Adc__disableInterruption(void );
#line 69
static void HplAtm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t adcsra);
#line 64
static Atm128Adcsra_t HplAtm128AdcP__HplAtm128Adc__getAdcsra(void );










static uint16_t HplAtm128AdcP__HplAtm128Adc__getValue(void );
# 62 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Init.nc"
static error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void );
# 79 "/homes/hglanzer/GIT/tinyos/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
# 53 "/homes/hglanzer/GIT/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(
# 55 "/homes/hglanzer/GIT/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2aad82572af8);
# 65 "/homes/hglanzer/GIT/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(
# 60 "/homes/hglanzer/GIT/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2aad8256fcc8);
# 59 "/homes/hglanzer/GIT/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(
# 60 "/homes/hglanzer/GIT/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2aad8256fcc8);
# 56 "/homes/hglanzer/GIT/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
# 120 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(
# 54 "/homes/hglanzer/GIT/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2aad82573830);
# 88 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(
# 54 "/homes/hglanzer/GIT/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2aad82573830);
# 102 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Resource.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__default__granted(
# 54 "/homes/hglanzer/GIT/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2aad82573830);
# 75 "/homes/hglanzer/GIT/tinyos/tos/interfaces/TaskBasic.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
# 62 "/homes/hglanzer/GIT/tinyos/tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 73 "/homes/hglanzer/GIT/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void );
# 55 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Read.nc"
static error_t AdcP__Read__read(
# 48 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2aad825dfac0);
# 66 "/homes/hglanzer/GIT/tinyos/tos/interfaces/ReadNow.nc"
static void AdcP__ReadNow__default__readDone(
# 49 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2aad825dc6d8, 
# 66 "/homes/hglanzer/GIT/tinyos/tos/interfaces/ReadNow.nc"
error_t result, AdcP__ReadNow__val_t val);
# 32 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__default__getRefVoltage(
# 53 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2aad825dacd0);
# 25 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__default__getChannel(
# 53 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2aad825dacd0);
# 39 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__default__getPrescaler(
# 53 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2aad825dacd0);
# 81 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static void AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise);
# 75 "/homes/hglanzer/GIT/tinyos/tos/interfaces/TaskBasic.nc"
static void AdcP__acquiredData__runTask(void );
# 55 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Read.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(
# 24 "/homes/hglanzer/GIT/tinyos/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2aad8260e6b8);
# 63 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Read.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(
# 24 "/homes/hglanzer/GIT/tinyos/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2aad8260e6b8, 
# 63 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t val);
#line 63
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(
# 26 "/homes/hglanzer/GIT/tinyos/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2aad8260b390, 
# 63 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__val_t val);
# 120 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(
# 27 "/homes/hglanzer/GIT/tinyos/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2aad8260ae30);
# 88 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__request(
# 27 "/homes/hglanzer/GIT/tinyos/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2aad8260ae30);
# 102 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Resource.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(
# 27 "/homes/hglanzer/GIT/tinyos/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2aad8260ae30);
# 75 "/homes/hglanzer/GIT/tinyos/tos/interfaces/TaskBasic.nc"
static void LCD128x64P__writeRectangle__runTask(void );
# 36 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
static void LCD128x64P__LCD128x64__startClearScreen(uint8_t pattern);
#line 26
static void LCD128x64P__LCD128x64__startWriteBar(uint8_t x, uint8_t y, uint8_t length, uint8_t width);

static void LCD128x64P__LCD128x64__startWriteRectangle(uint8_t x, uint8_t y, uint8_t a, uint8_t b);



static void LCD128x64P__LCD128x64__startWriteString(char *data, uint8_t x, uint8_t y);
#line 20
static void LCD128x64P__LCD128x64__setPixel(uint8_t x, uint8_t y);
#line 4
static void LCD128x64P__LCD128x64__initLCD(uint8_t pattern);
# 75 "/homes/hglanzer/GIT/tinyos/tos/interfaces/TaskBasic.nc"
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
# 5 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/uart/bigAVR6UART0.nc"
static void bigAVR6UART0P__bigAVR6UART0__send(uint8_t *str, uint16_t len);

static error_t bigAVR6UART0P__bigAVR6UART0__receive(uint8_t *buf, uint16_t len);
# 79 "/homes/hglanzer/GIT/tinyos/tos/interfaces/UartStream.nc"
static void bigAVR6UART0P__UartStream__receivedByte(uint8_t byte);
#line 99
static void bigAVR6UART0P__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void bigAVR6UART0P__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 62 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Init.nc"
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__Init__init(void );
# 48 "/homes/hglanzer/GIT/tinyos/tos/interfaces/UartStream.nc"
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
#line 90
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__receive(
#line 86
uint8_t * buf, 



uint16_t len);
# 49 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
static void /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 47
static void /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__txDone(void );
# 95 "/homes/hglanzer/GIT/tinyos/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__StdControl__start(void );









static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__StdControl__stop(void );
# 62 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart0Init__init(void );
# 49 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart0__default__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart0__default__txDone(void );
# 62 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart1Init__init(void );
# 42 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
static error_t HplAtm128UartP__HplUart1__enableRxIntr(void );
#line 40
static error_t HplAtm128UartP__HplUart1__enableTxIntr(void );
static error_t HplAtm128UartP__HplUart1__disableTxIntr(void );

static error_t HplAtm128UartP__HplUart1__disableRxIntr(void );


static void HplAtm128UartP__HplUart1__tx(uint8_t data);
# 95 "/homes/hglanzer/GIT/tinyos/tos/interfaces/StdControl.nc"
static error_t HplAtm128UartP__Uart1TxControl__start(void );









static error_t HplAtm128UartP__Uart1TxControl__stop(void );
#line 95
static error_t HplAtm128UartP__Uart1RxControl__start(void );









static error_t HplAtm128UartP__Uart1RxControl__stop(void );
# 109 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__getNow(void );
#line 103
static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__startAt(/*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__size_type t0, /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__size_type dt);
#line 116
static /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__getAlarm(void );
#line 73
static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__stop(void );
# 62 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Init__init(void );
# 64 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Counter__size_type /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Counter__get(void );
# 58 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__fired(void );
# 70 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Timer__overflow(void );
# 53 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer0SyncP__TimerCtrl__getInterruptFlag(void );
#line 46
static void HplAtm128Timer0SyncP__TimerCtrl__setControl(Atm128TimerControl_t control);
# 62 "/homes/hglanzer/GIT/tinyos/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm128Timer0SyncP__McuPowerOverride__lowestState(void );
# 51 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128TimerSync.nc"
static int HplAtm128Timer0SyncP__TimerSync__compareBusy(void );
#line 39
static void HplAtm128Timer0SyncP__TimerSync__setTimer0Synchronous(void );
# 48 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128Compare.nc"
static HplAtm128Timer0SyncP__Compare__size_type HplAtm128Timer0SyncP__Compare__get(void );





static void HplAtm128Timer0SyncP__Compare__set(HplAtm128Timer0SyncP__Compare__size_type t);










static void HplAtm128Timer0SyncP__Compare__start(void );
# 61 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer.nc"
static HplAtm128Timer0SyncP__Timer__timer_size HplAtm128Timer0SyncP__Timer__get(void );
# 75 "/homes/hglanzer/GIT/tinyos/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 78 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 75 "/homes/hglanzer/GIT/tinyos/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 83
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2aad8297ada0);
# 64 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 48 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2aad8297ada0, 
# 64 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/Timer.nc"
uint32_t dt);
# 82 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 62 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 62
static error_t PlatformP__MeasureClock__init(void );
# 51 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/PlatformP.nc"
static inline void PlatformP__power_init(void );






static inline error_t PlatformP__Init__init(void );
# 62 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Init.nc"
static error_t MotePlatformP__SubInit__init(void );
# 23 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void );
# 56 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortF.Bit0*/HplAtm128GeneralIOPinP__40__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortF.Bit0*/HplAtm128GeneralIOPinP__40__IO__makeInput(void );
#line 56
static __inline void /*HplAtm128GeneralIOC.PortF.Bit1*/HplAtm128GeneralIOPinP__41__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortF.Bit1*/HplAtm128GeneralIOPinP__41__IO__makeInput(void );
# 56 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOSlowPinP.nc"
static __inline void /*HplAtm128GeneralIOC.G3*/HplAtm128GeneralIOSlowPinP__11__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.G3*/HplAtm128GeneralIOSlowPinP__11__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.G3*/HplAtm128GeneralIOSlowPinP__11__IO__makeOutput(void );
#line 56
static __inline void /*HplAtm128GeneralIOC.G4*/HplAtm128GeneralIOSlowPinP__12__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.G4*/HplAtm128GeneralIOSlowPinP__12__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.G4*/HplAtm128GeneralIOSlowPinP__12__IO__makeOutput(void );
# 33 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/MeasureClockC.nc"
enum MeasureClockC____nesc_unnamed4313 {


  MeasureClockC__MAGIC = 488 / (16 / PLATFORM_MHZ)
};



uint16_t MeasureClockC__cycles;

static inline error_t MeasureClockC__Init__init(void );
#line 107
static inline uint8_t MeasureClockC__Atm128Calibrate__adcPrescaler(void );
#line 124
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 62 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 60 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 62 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 57 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 72
static void RealMainP__Scheduler__taskLoop(void );
#line 65
static bool RealMainP__Scheduler__runNextTask(void );
# 63 "/homes/hglanzer/GIT/tinyos/tos/system/RealMainP.nc"
int main(void )   ;
# 75 "/homes/hglanzer/GIT/tinyos/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 56 "/homes/hglanzer/GIT/tinyos/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2aad821a0108);
# 76 "/homes/hglanzer/GIT/tinyos/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/homes/hglanzer/GIT/tinyos/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4314 {

  SchedulerBasicP__NUM_TASKS = 13U, 
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
# 62 "/homes/hglanzer/GIT/tinyos/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 66 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/McuSleepC.nc"
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
#line 121
static inline void McuSleepC__McuPowerState__update(void );
# 64 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/Timer.nc"
static void BlinkC__Timer0__startPeriodic(uint32_t dt);
# 5 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/uart/bigAVR6UART0.nc"
static void BlinkC__bigAVR6UART0__send(uint8_t *str, uint16_t len);

static error_t BlinkC__bigAVR6UART0__receive(uint8_t *buf, uint16_t len);
# 66 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
static error_t BlinkC__GLCD__startClearScreen(uint8_t pattern);
#line 56
static error_t BlinkC__GLCD__startWriteBar(uint8_t x, uint8_t y, uint8_t length, uint8_t width);

static error_t BlinkC__GLCD__startWriteRectangle(uint8_t x, uint8_t y, uint8_t a, uint8_t b);



static error_t BlinkC__GLCD__startWriteString(char *data, uint8_t x, uint8_t y);
#line 34
static void BlinkC__GLCD__initLCD(uint8_t pattern);
# 29 "BlinkC.nc"
enum BlinkC____nesc_unnamed4315 {
#line 29
  BlinkC__testTask = 0U
};
#line 29
typedef int BlinkC____nesc_sillytask_testTask[BlinkC__testTask];
#line 26
static volatile uint8_t BlinkC__count = 0;
#line 26
static volatile uint8_t BlinkC__count2 = 8;
#line 26
static volatile uint8_t BlinkC__tmp = 0;
#line 26
static volatile uint8_t BlinkC__x_lokal;
char BlinkC__buf[10] = "0000000000";
#line 27
char BlinkC__uartBuf[11] = "\0\0\0\0\0\0\0\0\0\0\0";

static inline void BlinkC__testTask__runTask(void );






static void BlinkC__GLCD__xyReady(uint16_t x, uint16_t y);
#line 75
static inline void BlinkC__Timer0__fired(void );
#line 92
static inline void BlinkC__Boot__booted(void );





static inline void BlinkC__GLCD__initDone(void );









static inline void BlinkC__GLCD__tsPressed(void );




static inline void BlinkC__GLCD__calibrated(void );









static inline void BlinkC__GLCD__screenCleared(void );




static inline void BlinkC__GLCD__barWritten(void );



static inline void BlinkC__GLCD__circleWritten(void );



static inline void BlinkC__GLCD__rectangleWritten(void );



static inline void BlinkC__GLCD__stringWritten(void );



static inline void BlinkC__GLCD__lineWritten(void );




static inline void BlinkC__bigAVR6UART0__sendDone(uint8_t *stream, uint16_t len, error_t error);
#line 164
static inline void BlinkC__bigAVR6UART0__receiveDone(uint8_t *stream, uint16_t len, error_t error);
# 36 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
static void GLCDP__LCD128x64__startClearScreen(uint8_t pattern);
#line 26
static void GLCDP__LCD128x64__startWriteBar(uint8_t x, uint8_t y, uint8_t length, uint8_t width);

static void GLCDP__LCD128x64__startWriteRectangle(uint8_t x, uint8_t y, uint8_t a, uint8_t b);



static void GLCDP__LCD128x64__startWriteString(char *data, uint8_t x, uint8_t y);
#line 4
static void GLCDP__LCD128x64__initLCD(uint8_t pattern);
# 24 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
static void GLCDP__GLCD__tsPressed(void );
#line 68
static void GLCDP__GLCD__initDone(void );
#line 22
static void GLCDP__GLCD__calibrated(void );
#line 78
static void GLCDP__GLCD__barWritten(void );
#line 76
static void GLCDP__GLCD__lineWritten(void );



static void GLCDP__GLCD__screenCleared(void );
#line 19
static void GLCDP__GLCD__xyReady(uint16_t x, uint16_t y);
#line 70
static void GLCDP__GLCD__circleWritten(void );



static void GLCDP__GLCD__rectangleWritten(void );
#line 72
static void GLCDP__GLCD__stringWritten(void );
# 4 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreen.nc"
static void GLCDP__TouchScreen__getXY(void );
# 13 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCDP.nc"
static volatile uint8_t GLCDP__stateTS = UNCALIBRATED;
#line 13
static volatile uint8_t GLCDP__stateGLCD = 0;
static volatile uint16_t GLCDP__x_max = 865;
#line 14
static volatile uint16_t GLCDP__y_max = 800;
#line 14
static volatile uint16_t GLCDP__x_min = 54;
#line 14
static volatile uint16_t GLCDP__y_min = 128;
#line 27
static inline void GLCDP__calcXY(uint16_t x_raw, uint16_t y_raw);
#line 96
static inline void GLCDP__TouchScreen__xyReady(uint16_t x, uint16_t y);
#line 145
static inline void GLCDP__TouchScreen__tsPressed(void );









static inline void GLCDP__GLCD__initLCD(uint8_t pattern);
#line 175
static inline error_t GLCDP__GLCD__startWriteBar(uint8_t x, uint8_t y, uint8_t length, uint8_t width);
#line 193
static error_t GLCDP__GLCD__startWriteRectangle(uint8_t x, uint8_t y, uint8_t a, uint8_t b);
#line 231
static error_t GLCDP__GLCD__startWriteString(char *data, uint8_t x, uint8_t y);
#line 267
static error_t GLCDP__GLCD__startClearScreen(uint8_t pattern);
#line 288
static inline void GLCDP__LCD128x64__initDone(void );




static inline void GLCDP__LCD128x64__circleWritten(void );





static inline void GLCDP__LCD128x64__rectangleWritten(void );





static inline void GLCDP__LCD128x64__lineWritten(void );





static inline void GLCDP__LCD128x64__barWritten(void );










static inline void GLCDP__LCD128x64__stringWritten(void );
#line 338
static inline void GLCDP__LCD128x64__screenCleared(void );
# 55 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Read.nc"
static error_t TouchScreenP__Read__read(void );
# 46 "/homes/hglanzer/GIT/tinyos/tos/interfaces/GeneralIO.nc"
static void TouchScreenP__driveA__makeOutput(void );
#line 40
static void TouchScreenP__driveA__set(void );
static void TouchScreenP__driveA__clr(void );
# 67 "/homes/hglanzer/GIT/tinyos/tos/interfaces/TaskBasic.nc"
static error_t TouchScreenP__checkTS__postTask(void );
# 44 "/homes/hglanzer/GIT/tinyos/tos/interfaces/GeneralIO.nc"
static void TouchScreenP__adcX__makeInput(void );
#line 41
static void TouchScreenP__adcX__clr(void );




static void TouchScreenP__driveB__makeOutput(void );
#line 40
static void TouchScreenP__driveB__set(void );
static void TouchScreenP__driveB__clr(void );
# 13 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreen.nc"
static void TouchScreenP__TouchScreen__tsPressed(void );
#line 11
static void TouchScreenP__TouchScreen__xyReady(uint16_t x, uint16_t y);
# 44 "/homes/hglanzer/GIT/tinyos/tos/interfaces/GeneralIO.nc"
static void TouchScreenP__adcY__makeInput(void );
#line 41
static void TouchScreenP__adcY__clr(void );
# 36 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreenP.nc"
enum TouchScreenP____nesc_unnamed4316 {
#line 36
  TouchScreenP__checkTS = 1U
};
#line 36
typedef int TouchScreenP____nesc_sillytask_checkTS[TouchScreenP__checkTS];
#line 32
volatile uint8_t TouchScreenP__channel;
static volatile uint8_t TouchScreenP__state;
#line 33
static volatile uint8_t TouchScreenP__pressDetect = FALSE;
static volatile uint16_t TouchScreenP__x;
#line 34
static volatile uint16_t TouchScreenP__y;

static inline void TouchScreenP__checkTS__runTask(void );




static void TouchScreenP__TouchScreen__getXY(void );
#line 61
static inline void TouchScreenP__Read__readDone(error_t err, uint16_t val);
#line 152
static inline uint8_t TouchScreenP__Atm128AdcConfig__getRefVoltage(void );




static inline uint8_t TouchScreenP__Atm128AdcConfig__getChannel(void );







static inline uint8_t TouchScreenP__Atm128AdcConfig__getPrescaler(void );
# 119 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
static bool Atm128AdcP__Atm128AdcMultiple__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 81 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static void Atm128AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise);
# 53 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/HplAtm128Adc.nc"
static Atm128Admux_t Atm128AdcP__HplAtm128Adc__getAdmux(void );
#line 82
static void Atm128AdcP__HplAtm128Adc__enableAdc(void );
#line 58
static void Atm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t admux);
#line 150
static bool Atm128AdcP__HplAtm128Adc__cancel(void );
#line 86
static void Atm128AdcP__HplAtm128Adc__disableAdc(void );








static void Atm128AdcP__HplAtm128Adc__disableInterruption(void );
#line 69
static void Atm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t adcsra);
# 53 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/Atm128Calibrate.nc"
static uint8_t Atm128AdcP__Atm128Calibrate__adcPrescaler(void );
# 102 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/Atm128AdcP.nc"
#line 98
struct Atm128AdcP____nesc_unnamed4317 {
  bool multiple : 1;
  bool precise : 1;
  uint8_t channel : 5;
} Atm128AdcP__f;
#line 102
#line 98
struct Atm128AdcP____nesc_unnamed4317 



Atm128AdcP__nextF;

static inline error_t Atm128AdcP__Init__init(void );
#line 124
static inline error_t Atm128AdcP__AsyncStdControl__start(void );




static inline error_t Atm128AdcP__AsyncStdControl__stop(void );









static __inline bool Atm128AdcP__isPrecise(Atm128Admux_t admux, uint8_t channel, uint8_t refVoltage);




static inline void Atm128AdcP__HplAtm128Adc__dataReady(uint16_t data);
#line 204
static inline void Atm128AdcP__getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler);
#line 228
static inline bool Atm128AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
#line 262
static inline bool Atm128AdcP__Atm128AdcMultiple__default__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 156 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/HplAtm128Adc.nc"
static void HplAtm128AdcP__HplAtm128Adc__dataReady(uint16_t data);
# 52 "/homes/hglanzer/GIT/tinyos/tos/interfaces/McuPowerState.nc"
static void HplAtm128AdcP__McuPowerState__update(void );
# 49 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline Atm128Admux_t HplAtm128AdcP__HplAtm128Adc__getAdmux(void );


static inline Atm128Adcsra_t HplAtm128AdcP__HplAtm128Adc__getAdcsra(void );


static inline uint16_t HplAtm128AdcP__HplAtm128Adc__getValue(void );



static inline uint8_t HplAtm128AdcP__Admux2int(Atm128Admux_t x);
static inline uint8_t HplAtm128AdcP__Adcsra2int(Atm128Adcsra_t x);


static inline void HplAtm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t x);


static inline void HplAtm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t x);
#line 78
static inline void HplAtm128AdcP__HplAtm128Adc__enableAdc(void );



static inline void HplAtm128AdcP__HplAtm128Adc__disableAdc(void );




static inline void HplAtm128AdcP__HplAtm128Adc__disableInterruption(void );
#line 108
void __vector_21(void ) __attribute((signal))   ;








static inline bool HplAtm128AdcP__HplAtm128Adc__cancel(void );
# 49 "/homes/hglanzer/GIT/tinyos/tos/system/RoundRobinResourceQueueC.nc"
enum /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0____nesc_unnamed4318 {
  RoundRobinResourceQueueC__0__NO_ENTRY = 0xFF, 
  RoundRobinResourceQueueC__0__SIZE = 1U ? (1U - 1) / 8 + 1 : 0
};

uint8_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__SIZE];
uint8_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__last = 0;

static inline void /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id);



static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void );




static inline bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
#line 97
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
# 53 "/homes/hglanzer/GIT/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(
# 55 "/homes/hglanzer/GIT/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2aad82572af8);
# 65 "/homes/hglanzer/GIT/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(
# 60 "/homes/hglanzer/GIT/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2aad8256fcc8);
# 59 "/homes/hglanzer/GIT/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(
# 60 "/homes/hglanzer/GIT/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2aad8256fcc8);
# 79 "/homes/hglanzer/GIT/tinyos/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void );
# 73 "/homes/hglanzer/GIT/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void );
# 102 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Resource.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__granted(
# 54 "/homes/hglanzer/GIT/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2aad82573830);
# 67 "/homes/hglanzer/GIT/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void );
# 75 "/homes/hglanzer/GIT/tinyos/tos/system/ArbiterP.nc"
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_unnamed4319 {
#line 75
  ArbiterP__0__grantedTask = 2U
};
#line 75
typedef int /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_sillytask_grantedTask[/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask];
#line 67
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_unnamed4320 {
#line 67
  ArbiterP__0__RES_CONTROLLED, ArbiterP__0__RES_GRANTING, ArbiterP__0__RES_IMM_GRANTING, ArbiterP__0__RES_BUSY
};
#line 68
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_unnamed4321 {
#line 68
  ArbiterP__0__default_owner_id = 1U
};
#line 69
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0____nesc_unnamed4322 {
#line 69
  ArbiterP__0__NO_RES = 0xFF
};
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__default_owner_id;
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId;



static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(uint8_t id);
#line 111
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id);
#line 133
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 190
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
#line 202
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id);
#line 216
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 62 "/homes/hglanzer/GIT/tinyos/tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup(void );
# 56 "/homes/hglanzer/GIT/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release(void );
# 95 "/homes/hglanzer/GIT/tinyos/tos/interfaces/AsyncStdControl.nc"
static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start(void );









static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop(void );
# 69 "/homes/hglanzer/GIT/tinyos/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void );









static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void );




static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 63 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Read.nc"
static void AdcP__Read__readDone(
# 48 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2aad825dfac0, 
# 63 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Read.nc"
error_t result, AdcP__Read__val_t val);
# 66 "/homes/hglanzer/GIT/tinyos/tos/interfaces/ReadNow.nc"
static void AdcP__ReadNow__readDone(
# 49 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2aad825dc6d8, 
# 66 "/homes/hglanzer/GIT/tinyos/tos/interfaces/ReadNow.nc"
error_t result, AdcP__ReadNow__val_t val);
# 32 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__getRefVoltage(
# 53 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2aad825dacd0);
# 25 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__getChannel(
# 53 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2aad825dacd0);
# 39 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__getPrescaler(
# 53 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2aad825dacd0);
# 70 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static bool AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
# 67 "/homes/hglanzer/GIT/tinyos/tos/interfaces/TaskBasic.nc"
static error_t AdcP__acquiredData__postTask(void );
# 103 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/AdcP.nc"
enum AdcP____nesc_unnamed4323 {
#line 103
  AdcP__acquiredData = 3U
};
#line 103
typedef int AdcP____nesc_sillytask_acquiredData[AdcP__acquiredData];
#line 57
enum AdcP____nesc_unnamed4324 {
  AdcP__IDLE, 
  AdcP__ACQUIRE_DATA, 
  AdcP__ACQUIRE_DATA_NOW
};




uint8_t AdcP__state;
uint8_t AdcP__client;
uint16_t AdcP__val;

static inline uint8_t AdcP__channel(void );



static inline uint8_t AdcP__refVoltage(void );



static inline uint8_t AdcP__prescaler(void );



static void AdcP__sample(void );



static inline error_t AdcP__startGet(uint8_t newState, uint8_t newClient);








static inline error_t AdcP__Read__read(uint8_t c);







static inline void AdcP__acquiredData__runTask(void );




static inline void AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise);
#line 137
static inline uint8_t AdcP__Atm128AdcConfig__default__getChannel(uint8_t c);



static inline uint8_t AdcP__Atm128AdcConfig__default__getRefVoltage(uint8_t c);



static inline uint8_t AdcP__Atm128AdcConfig__default__getPrescaler(uint8_t c);




static inline void AdcP__ReadNow__default__readDone(uint8_t c, error_t e, uint16_t d);
# 63 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Read.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__readDone(
# 24 "/homes/hglanzer/GIT/tinyos/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2aad8260e6b8, 
# 63 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t val);
#line 55
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__read(
# 26 "/homes/hglanzer/GIT/tinyos/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2aad8260b390);
# 120 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__release(
# 27 "/homes/hglanzer/GIT/tinyos/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2aad8260ae30);
# 88 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__request(
# 27 "/homes/hglanzer/GIT/tinyos/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2aad8260ae30);



static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(uint8_t client);



static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(uint8_t client);



static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data);




static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__request(uint8_t client);


static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(uint8_t client);
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data);
# 67 "/homes/hglanzer/GIT/tinyos/tos/interfaces/TaskBasic.nc"
static error_t LCD128x64P__writeRectangle__postTask(void );
# 38 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
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
# 67 "/homes/hglanzer/GIT/tinyos/tos/interfaces/TaskBasic.nc"
static error_t LCD128x64P__writeString__postTask(void );
#line 67
static error_t LCD128x64P__wait4Controller__postTask(void );
#line 67
static error_t LCD128x64P__writeBar__postTask(void );
#line 67
static error_t LCD128x64P__clearScreenNB__postTask(void );
# 37 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
enum LCD128x64P____nesc_unnamed4325 {
#line 37
  LCD128x64P__wait4Controller = 4U
};
#line 37
typedef int LCD128x64P____nesc_sillytask_wait4Controller[LCD128x64P__wait4Controller];
#line 170
enum LCD128x64P____nesc_unnamed4326 {
#line 170
  LCD128x64P__writeRectangle = 5U
};
#line 170
typedef int LCD128x64P____nesc_sillytask_writeRectangle[LCD128x64P__writeRectangle];
#line 186
enum LCD128x64P____nesc_unnamed4327 {
#line 186
  LCD128x64P__writeCircle = 6U
};
#line 186
typedef int LCD128x64P____nesc_sillytask_writeCircle[LCD128x64P__writeCircle];
#line 219
enum LCD128x64P____nesc_unnamed4328 {
#line 219
  LCD128x64P__writeString = 7U
};
#line 219
typedef int LCD128x64P____nesc_sillytask_writeString[LCD128x64P__writeString];
#line 247
enum LCD128x64P____nesc_unnamed4329 {
#line 247
  LCD128x64P__clearScreenNB = 8U
};
#line 247
typedef int LCD128x64P____nesc_sillytask_clearScreenNB[LCD128x64P__clearScreenNB];
#line 278
enum LCD128x64P____nesc_unnamed4330 {
#line 278
  LCD128x64P__writeLine = 9U
};
#line 278
typedef int LCD128x64P____nesc_sillytask_writeLine[LCD128x64P__writeLine];
#line 356
enum LCD128x64P____nesc_unnamed4331 {
#line 356
  LCD128x64P__writeBar = 10U
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
#line 455
static inline void LCD128x64P__LCD128x64__startWriteRectangle(uint8_t x, uint8_t y, uint8_t a, uint8_t b);
#line 478
static inline void LCD128x64P__LCD128x64__startClearScreen(uint8_t pattern);
#line 490
static inline void LCD128x64P__LCD128x64__startWriteBar(uint8_t x, uint8_t y, uint8_t length, uint8_t width);
# 15 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/uart/bigAVR6UART0.nc"
static void bigAVR6UART0P__bigAVR6UART0__receiveDone(uint8_t *buf, uint16_t len, error_t error);

static void bigAVR6UART0P__bigAVR6UART0__sendDone(uint8_t *buf, uint16_t len, error_t error);
# 48 "/homes/hglanzer/GIT/tinyos/tos/interfaces/UartStream.nc"
static error_t bigAVR6UART0P__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
#line 90
static error_t bigAVR6UART0P__UartStream__receive(
#line 86
uint8_t * buf, 



uint16_t len);
# 95 "/homes/hglanzer/GIT/tinyos/tos/interfaces/StdControl.nc"
static error_t bigAVR6UART0P__StdControl__start(void );









static error_t bigAVR6UART0P__StdControl__stop(void );
# 18 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/uart/bigAVR6UART0P.nc"
static inline void bigAVR6UART0P__bigAVR6UART0__send(uint8_t *str, uint16_t len);
#line 30
static inline error_t bigAVR6UART0P__bigAVR6UART0__receive(uint8_t *buf, uint16_t len);
#line 42
static inline void bigAVR6UART0P__UartStream__sendDone(uint8_t *buf, uint16_t len, error_t error);





static inline void bigAVR6UART0P__UartStream__receivedByte(uint8_t byte);




static inline void bigAVR6UART0P__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error);
# 95 "/homes/hglanzer/GIT/tinyos/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUartTxControl__start(void );









static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void );
# 79 "/homes/hglanzer/GIT/tinyos/tos/interfaces/UartStream.nc"
static void /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte);
#line 99
static void /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 42 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void );
#line 40
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void );
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void );

static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void );


static void /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data);
# 95 "/homes/hglanzer/GIT/tinyos/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUartRxControl__start(void );









static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void );
# 64 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/Atm128UartP.nc"
uint16_t /*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_len;
#line 64
uint16_t /*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_len;
uint8_t * /*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_buf;
#line 65
uint8_t * /*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_buf;
uint16_t /*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_pos;
#line 66
uint16_t /*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_pos;
uint16_t /*Atm128Uart1C.UartP*/Atm128UartP__0__m_byte_time;
uint8_t /*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_intr;
uint8_t /*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_intr;

static inline error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__Init__init(void );







static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__StdControl__start(void );
#line 95
static inline error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__StdControl__stop(void );
#line 117
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__receive(uint8_t *buf, uint16_t len);
#line 135
static inline void /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 157
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len);
#line 175
static inline void /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__txDone(void );
# 49 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart0__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart0__txDone(void );

static void HplAtm128UartP__HplUart1__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__txDone(void );
# 60 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/Atm128Calibrate.nc"
static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 52 "/homes/hglanzer/GIT/tinyos/tos/interfaces/McuPowerState.nc"
static void HplAtm128UartP__McuPowerState__update(void );
# 96 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0Init__init(void );
#line 180
void __vector_18(void ) __attribute((signal))   ;





void __vector_20(void ) __attribute((interrupt))   ;



static inline error_t HplAtm128UartP__Uart1Init__init(void );
#line 210
static inline error_t HplAtm128UartP__Uart1TxControl__start(void );





static inline error_t HplAtm128UartP__Uart1TxControl__stop(void );





static inline error_t HplAtm128UartP__Uart1RxControl__start(void );





static inline error_t HplAtm128UartP__Uart1RxControl__stop(void );





static inline error_t HplAtm128UartP__HplUart1__enableTxIntr(void );





static inline error_t HplAtm128UartP__HplUart1__disableTxIntr(void );




static inline error_t HplAtm128UartP__HplUart1__enableRxIntr(void );




static inline error_t HplAtm128UartP__HplUart1__disableRxIntr(void );
#line 267
static void HplAtm128UartP__HplUart1__tx(uint8_t data);






void __vector_30(void ) __attribute((signal))   ;




void __vector_32(void ) __attribute((interrupt))   ;



static inline void HplAtm128UartP__HplUart0__default__txDone(void );
static inline void HplAtm128UartP__HplUart0__default__rxDone(uint8_t data);
# 53 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__TimerCtrl__getInterruptFlag(void );
#line 46
static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__TimerCtrl__setControl(Atm128TimerControl_t control);
# 78 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__fired(void );
# 82 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Counter__overflow(void );
# 51 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128TimerSync.nc"
static int /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__TimerSync__compareBusy(void );
#line 39
static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__TimerSync__setTimer0Synchronous(void );
# 48 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__get(void );





static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__start(void );
# 61 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Timer__get(void );
# 45 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/Atm128AlarmSyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__set;
uint32_t /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__t0;
#line 46
uint32_t /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__dt;
uint32_t /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__base;



enum /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0____nesc_unnamed4332 {
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
# 58 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128Compare.nc"
static void HplAtm128Timer0SyncP__Compare__fired(void );
# 70 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer.nc"
static void HplAtm128Timer0SyncP__Timer__overflow(void );
# 71 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer0SyncP.nc"
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
# 67 "/homes/hglanzer/GIT/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 109 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 74 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4333 {
#line 74
  AlarmToTimerC__0__fired = 11U
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
# 67 "/homes/hglanzer/GIT/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 48 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2aad8297ada0);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4334 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 12U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4335 {

  VirtualizeTimerC__0__NUM_TIMERS = 1, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4336 {

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




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);
#line 206
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 58 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 92 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/atm128hardware.h"
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

# 124 "/homes/hglanzer/GIT/tinyos/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 57 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 57
  SchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 51 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/PlatformP.nc"
static inline void PlatformP__power_init(void )
#line 51
{
  /* atomic removed: atomic calls only */
#line 52
  {
    * (volatile uint8_t *)(0x35 + 0x20) = 1 << 5;
  }
}

# 60 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP__Adcsra2int(Atm128Adcsra_t x)
#line 60
{
#line 60
  union __nesc_unnamed4337 {
#line 60
    Atm128Adcsra_t f;
#line 60
    uint8_t t;
  } 
#line 60
  c = { .f = x };

#line 60
  return c.t;
}




static inline void HplAtm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t x)
#line 66
{
  * (volatile uint8_t *)(0x06 + 0x20) = HplAtm128AdcP__Adcsra2int(x);
}

# 69 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t adcsra){
#line 69
  HplAtm128AdcP__HplAtm128Adc__setAdcsra(adcsra);
#line 69
}
#line 69
# 104 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP__Init__init(void )
#line 104
{
  /* atomic removed: atomic calls only */
  {
    Atm128Adcsra_t adcsr;

    adcsr.aden = ATM128_ADC_ENABLE_OFF;
    adcsr.adsc = ATM128_ADC_START_CONVERSION_OFF;
    adcsr.adfr = ATM128_ADC_FREE_RUNNING_OFF;
    adcsr.adif = ATM128_ADC_INT_FLAG_OFF;
    adcsr.adie = ATM128_ADC_INT_ENABLE_OFF;
    adcsr.adps = ATM128_ADC_PRESCALE_2;
    Atm128AdcP__HplAtm128Adc__setAdcsra(adcsr);
  }
  return SUCCESS;
}

# 62 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Init.nc"
inline static error_t MotePlatformP__SubInit__init(void ){
#line 62
  unsigned char result;
#line 62

#line 62
  result = Atm128AdcP__Init__init();
#line 62

#line 62
  return result;
#line 62
}
#line 62
# 23 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void )
#line 23
{

  * (volatile uint8_t *)(0x15 + 0x20) = 0;
  * (volatile uint8_t *)(0x14 + 0x20) = 0xff;





  return MotePlatformP__SubInit__init();
}

# 62 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteInit__init(void ){
#line 62
  unsigned char result;
#line 62

#line 62
  result = MotePlatformP__PlatformInit__init();
#line 62

#line 62
  return result;
#line 62
}
#line 62
# 69 "/homes/hglanzer/GIT/tinyos/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 43 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/MeasureClockC.nc"
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

# 62 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Init.nc"
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
# 58 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/PlatformP.nc"
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

# 62 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Init.nc"
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
# 65 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Scheduler.nc"
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
# 103 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 58 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/AlarmToTimerC.nc"
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

# 129 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 211 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/Atm128AlarmSyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__stop(void )
#line 211
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 212
    /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__set = FALSE;
#line 212
    __nesc_atomic_end(__nesc_atomic); }
}

# 73 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__stop();
#line 73
}
#line 73
# 71 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 229 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/Atm128AlarmSyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__getNow(void )
#line 229
{
  return /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Counter__get();
}

# 109 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/Alarm.nc"
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
# 96 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/Timer.nc"
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
# 102 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
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

# 118 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer0SyncP.nc"
static inline Atm128_TIFR_t HplAtm128Timer0SyncP__TimerCtrl__getInterruptFlag(void )
#line 118
{
  return * (Atm128_TIFR_t *)& * (volatile uint8_t *)(0x36 + 0x20);
}

# 53 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128TimerCtrl8.nc"
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
# 48 "/homes/hglanzer/GIT/tinyos/tos/interfaces/UartStream.nc"
inline static error_t bigAVR6UART0P__UartStream__send(uint8_t * buf, uint16_t len){
#line 48
  unsigned char result;
#line 48

#line 48
  result = /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__send(buf, len);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 95 "/homes/hglanzer/GIT/tinyos/tos/interfaces/StdControl.nc"
inline static error_t bigAVR6UART0P__StdControl__start(void ){
#line 95
  unsigned char result;
#line 95

#line 95
  result = /*Atm128Uart1C.UartP*/Atm128UartP__0__StdControl__start();
#line 95

#line 95
  return result;
#line 95
}
#line 95
# 18 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/uart/bigAVR6UART0P.nc"
static inline void bigAVR6UART0P__bigAVR6UART0__send(uint8_t *str, uint16_t len)
{
  bigAVR6UART0P__StdControl__start();
  bigAVR6UART0P__UartStream__send(str, len);
}

# 5 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/uart/bigAVR6UART0.nc"
inline static void BlinkC__bigAVR6UART0__send(uint8_t *str, uint16_t len){
#line 5
  bigAVR6UART0P__bigAVR6UART0__send(str, len);
#line 5
}
#line 5
# 75 "BlinkC.nc"
static inline void BlinkC__Timer0__fired(void )
{



  if (BlinkC__count % 2 == 0) 
    {
      BlinkC__bigAVR6UART0__send((uint8_t *)"rulez\r\n", 7);
    }
  else 
    {
      BlinkC__bigAVR6UART0__send((uint8_t *)"powpow.at\r\n", 11);
    }
  BlinkC__count++;
}

# 206 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x2aad8297ada0){
#line 83
  switch (arg_0x2aad8297ada0) {
#line 83
    case 0U:
#line 83
      BlinkC__Timer0__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x2aad8297ada0);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 121 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC__McuPowerState__update(void )
#line 121
{
}

# 52 "/homes/hglanzer/GIT/tinyos/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128UartP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 210 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart1TxControl__start(void )
#line 210
{
  * (volatile uint8_t *)0x9A |= 1 << 3;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 95 "/homes/hglanzer/GIT/tinyos/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUartTxControl__start(void ){
#line 95
  unsigned char result;
#line 95

#line 95
  result = HplAtm128UartP__Uart1TxControl__start();
#line 95

#line 95
  return result;
#line 95
}
#line 95
# 222 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart1RxControl__start(void )
#line 222
{
  * (volatile uint8_t *)0x9A |= 1 << 4;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 95 "/homes/hglanzer/GIT/tinyos/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUartRxControl__start(void ){
#line 95
  unsigned char result;
#line 95

#line 95
  result = HplAtm128UartP__Uart1RxControl__start();
#line 95

#line 95
  return result;
#line 95
}
#line 95
# 245 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart1__enableRxIntr(void )
#line 245
{
  * (volatile uint8_t *)0x9A |= 1 << 7;
  return SUCCESS;
}

# 42 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void ){
#line 42
  unsigned char result;
#line 42

#line 42
  result = HplAtm128UartP__HplUart1__enableRxIntr();
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 234 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart1__enableTxIntr(void )
#line 234
{
  * (volatile uint8_t *)0x9B |= 1 << 6;
  * (volatile uint8_t *)0x9A |= 1 << 6;
  return SUCCESS;
}

# 40 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void ){
#line 40
  unsigned char result;
#line 40

#line 40
  result = HplAtm128UartP__HplUart1__enableTxIntr();
#line 40

#line 40
  return result;
#line 40
}
#line 40
# 97 "/homes/hglanzer/GIT/tinyos/tos/system/SchedulerBasicP.nc"
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

# 159 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer0SyncP.nc"
static inline void HplAtm128Timer0SyncP__Compare__set(uint8_t t)
#line 159
{
  * (volatile uint8_t *)(0x31 + 0x20) = t;
}

# 54 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__size_type t){
#line 54
  HplAtm128Timer0SyncP__Compare__set(t);
#line 54
}
#line 54
# 74 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer0SyncP.nc"
static inline uint8_t HplAtm128Timer0SyncP__Timer__get(void )
#line 74
{
#line 74
  return * (volatile uint8_t *)(0x32 + 0x20);
}

# 61 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer.nc"
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
# 248 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer0SyncP.nc"
static inline int HplAtm128Timer0SyncP__TimerSync__compareBusy(void )
#line 248
{
  return (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 1)) != 0;
}

# 51 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128TimerSync.nc"
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
# 81 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/Atm128AlarmSyncP.nc"
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

# 67 "/homes/hglanzer/GIT/tinyos/tos/interfaces/TaskBasic.nc"
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
# 81 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 78 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
}
#line 78
# 141 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 233 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/Atm128AlarmSyncP.nc"
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

# 116 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/Alarm.nc"
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
# 74 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 128 "BlinkC.nc"
static inline void BlinkC__GLCD__barWritten(void )
{
}

# 78 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
inline static void GLCDP__GLCD__barWritten(void ){
#line 78
  BlinkC__GLCD__barWritten();
#line 78
}
#line 78
# 311 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCDP.nc"
static inline void GLCDP__LCD128x64__barWritten(void )
{
  GLCDP__stateGLCD = GLCDP__stateGLCD & ~BUSY_BAR;
  GLCDP__GLCD__barWritten();
}

# 48 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void LCD128x64P__LCD128x64__barWritten(void ){
#line 48
  GLCDP__LCD128x64__barWritten();
#line 48
}
#line 48
# 356 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
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

# 67 "/homes/hglanzer/GIT/tinyos/tos/interfaces/TaskBasic.nc"
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
# 107 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
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

# 144 "BlinkC.nc"
static inline void BlinkC__GLCD__lineWritten(void )
{
}

# 76 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
inline static void GLCDP__GLCD__lineWritten(void ){
#line 76
  BlinkC__GLCD__lineWritten();
#line 76
}
#line 76
# 305 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCDP.nc"
static inline void GLCDP__LCD128x64__lineWritten(void )
{
  GLCDP__stateGLCD = GLCDP__stateGLCD & ~BUSY_LINE;
  GLCDP__GLCD__lineWritten();
}

# 46 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void LCD128x64P__LCD128x64__lineWritten(void ){
#line 46
  GLCDP__LCD128x64__lineWritten();
#line 46
}
#line 46
# 278 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
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

# 58 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
inline static error_t BlinkC__GLCD__startWriteRectangle(uint8_t x, uint8_t y, uint8_t a, uint8_t b){
#line 58
  unsigned char result;
#line 58

#line 58
  result = GLCDP__GLCD__startWriteRectangle(x, y, a, b);
#line 58

#line 58
  return result;
#line 58
}
#line 58
# 123 "BlinkC.nc"
static inline void BlinkC__GLCD__screenCleared(void )
{
  BlinkC__GLCD__startWriteRectangle(0, 0, 128, 4);
}

# 80 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
inline static void GLCDP__GLCD__screenCleared(void ){
#line 80
  BlinkC__GLCD__screenCleared();
#line 80
}
#line 80
# 338 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCDP.nc"
static inline void GLCDP__LCD128x64__screenCleared(void )
{
  GLCDP__stateGLCD = GLCDP__stateGLCD & ~BUSY_CLEAR;
  if (GLCDP__stateGLCD == CALIBRATION_IN_PROGRESS_LEFT_BOTTOM || GLCDP__stateGLCD == CALIBRATION_IN_PROGRESS_RIGHT_TOP) 
    {
    }
  else 

    {
      GLCDP__stateGLCD = GLCDP__stateGLCD & ~BUSY_CLEAR;
      GLCDP__GLCD__screenCleared();
    }
}

# 50 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void LCD128x64P__LCD128x64__screenCleared(void ){
#line 50
  GLCDP__LCD128x64__screenCleared();
#line 50
}
#line 50
# 247 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
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

# 67 "/homes/hglanzer/GIT/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t LCD128x64P__writeRectangle__postTask(void ){
#line 67
  unsigned char result;
#line 67

#line 67
  result = SchedulerBasicP__TaskBasic__postTask(LCD128x64P__writeRectangle);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 455 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
static inline void LCD128x64P__LCD128x64__startWriteRectangle(uint8_t x, uint8_t y, uint8_t a, uint8_t b)
{
  LCD128x64P__xPos[0] = x;
  LCD128x64P__yPos[0] = y;
  LCD128x64P__aRect = a;
  LCD128x64P__bRect = b;

  LCD128x64P__writeRectangle__postTask();
}

# 28 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void GLCDP__LCD128x64__startWriteRectangle(uint8_t x, uint8_t y, uint8_t a, uint8_t b){
#line 28
  LCD128x64P__LCD128x64__startWriteRectangle(x, y, a, b);
#line 28
}
#line 28
# 90 "/homes/hglanzer/GIT/tinyos/tos/interfaces/UartStream.nc"
inline static error_t bigAVR6UART0P__UartStream__receive(uint8_t * buf, uint16_t len){
#line 90
  unsigned char result;
#line 90

#line 90
  result = /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__receive(buf, len);
#line 90

#line 90
  return result;
#line 90
}
#line 90
# 30 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/uart/bigAVR6UART0P.nc"
static inline error_t bigAVR6UART0P__bigAVR6UART0__receive(uint8_t *buf, uint16_t len)
{
  bigAVR6UART0P__UartStream__receive(buf, len);

  return 0;
}

# 7 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/uart/bigAVR6UART0.nc"
inline static error_t BlinkC__bigAVR6UART0__receive(uint8_t *buf, uint16_t len){
#line 7
  unsigned char result;
#line 7

#line 7
  result = bigAVR6UART0P__bigAVR6UART0__receive(buf, len);
#line 7

#line 7
  return result;
#line 7
}
#line 7
# 140 "BlinkC.nc"
static inline void BlinkC__GLCD__stringWritten(void )
{
  BlinkC__bigAVR6UART0__receive((uint8_t *)BlinkC__uartBuf, 5);
}

# 72 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
inline static void GLCDP__GLCD__stringWritten(void ){
#line 72
  BlinkC__GLCD__stringWritten();
#line 72
}
#line 72
# 322 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCDP.nc"
static inline void GLCDP__LCD128x64__stringWritten(void )
{
  GLCDP__stateGLCD = GLCDP__stateGLCD & ~BUSY_STRING;
  if (GLCDP__stateGLCD == CALIBRATION_IN_PROGRESS_LEFT_BOTTOM || GLCDP__stateGLCD == CALIBRATION_IN_PROGRESS_RIGHT_TOP) 
    {
    }
  else 

    {
      GLCDP__GLCD__stringWritten();
    }
}

# 42 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void LCD128x64P__LCD128x64__stringWritten(void ){
#line 42
  GLCDP__LCD128x64__stringWritten();
#line 42
}
#line 42
# 219 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
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

# 132 "BlinkC.nc"
static inline void BlinkC__GLCD__circleWritten(void )
{
}

# 70 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
inline static void GLCDP__GLCD__circleWritten(void ){
#line 70
  BlinkC__GLCD__circleWritten();
#line 70
}
#line 70
# 293 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCDP.nc"
static inline void GLCDP__LCD128x64__circleWritten(void )
{
  GLCDP__stateGLCD = GLCDP__stateGLCD & ~BUSY_CIRCLE;
  GLCDP__GLCD__circleWritten();
}

# 40 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void LCD128x64P__LCD128x64__circleWritten(void ){
#line 40
  GLCDP__LCD128x64__circleWritten();
#line 40
}
#line 40
# 186 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
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

# 136 "BlinkC.nc"
static inline void BlinkC__GLCD__rectangleWritten(void )
{
}

# 74 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
inline static void GLCDP__GLCD__rectangleWritten(void ){
#line 74
  BlinkC__GLCD__rectangleWritten();
#line 74
}
#line 74
# 299 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCDP.nc"
static inline void GLCDP__LCD128x64__rectangleWritten(void )
{
  GLCDP__stateGLCD = GLCDP__stateGLCD & ~BUSY_RECT;
  GLCDP__GLCD__rectangleWritten();
}

# 44 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void LCD128x64P__LCD128x64__rectangleWritten(void ){
#line 44
  GLCDP__LCD128x64__rectangleWritten();
#line 44
}
#line 44
# 170 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
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

# 44 "/homes/hglanzer/GIT/tinyos/tos/system/ArbitratedReadC.nc"
static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__request(uint8_t client)
#line 44
{
  return FAIL;
}

# 88 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Resource.nc"
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__request(uint8_t arg_0x2aad8260ae30){
#line 88
  unsigned char result;
#line 88

#line 88
  switch (arg_0x2aad8260ae30) {
#line 88
    case /*TouchScreenC.AdcReadClientC*/AdcReadClientC__0__ID:
#line 88
      result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(/*TouchScreenC.AdcReadClientC*/AdcReadClientC__0__HAL_ID);
#line 88
      break;
#line 88
    default:
#line 88
      result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__request(arg_0x2aad8260ae30);
#line 88
      break;
#line 88
    }
#line 88

#line 88
  return result;
#line 88
}
#line 88
# 31 "/homes/hglanzer/GIT/tinyos/tos/system/ArbitratedReadC.nc"
static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(uint8_t client)
#line 31
{
  return /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__request(client);
}

# 55 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Read.nc"
inline static error_t TouchScreenP__Read__read(void ){
#line 55
  unsigned char result;
#line 55

#line 55
  result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(/*TouchScreenC.AdcReadClientC*/AdcReadClientC__0__ID);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 19 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
inline static void GLCDP__GLCD__xyReady(uint16_t x, uint16_t y){
#line 19
  BlinkC__GLCD__xyReady(x, y);
#line 19
}
#line 19
# 27 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCDP.nc"
static inline void GLCDP__calcXY(uint16_t x_raw, uint16_t y_raw)
{
  float x_tmp = 0;
#line 29
  float y_tmp = 0;

  if (x_raw < GLCDP__x_max && x_raw > GLCDP__x_min && y_raw < GLCDP__y_max && y_raw > GLCDP__y_min) 
    {


      x_raw = x_raw - 54;
      y_raw = y_raw - 128;


      x_tmp = (float )x_raw / (float )810;
      y_tmp = (float )y_raw / (float )672;
      x_tmp = x_tmp * 128;
      y_tmp = y_tmp * 64;
      GLCDP__GLCD__xyReady(x_tmp, y_tmp);
    }
  else 
    {
      GLCDP__GLCD__xyReady(200, 200);
    }
}

# 4 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreen.nc"
inline static void GLCDP__TouchScreen__getXY(void ){
#line 4
  TouchScreenP__TouchScreen__getXY();
#line 4
}
#line 4
# 113 "BlinkC.nc"
static inline void BlinkC__GLCD__calibrated(void )
{
}

# 22 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
inline static void GLCDP__GLCD__calibrated(void ){
#line 22
  BlinkC__GLCD__calibrated();
#line 22
}
#line 22
# 32 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void GLCDP__LCD128x64__startWriteString(char *data, uint8_t x, uint8_t y){
#line 32
  LCD128x64P__LCD128x64__startWriteString(data, x, y);
#line 32
}
#line 32
# 67 "/homes/hglanzer/GIT/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t LCD128x64P__clearScreenNB__postTask(void ){
#line 67
  unsigned char result;
#line 67

#line 67
  result = SchedulerBasicP__TaskBasic__postTask(LCD128x64P__clearScreenNB);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 478 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
static inline void LCD128x64P__LCD128x64__startClearScreen(uint8_t pattern)
{
  LCD128x64P__modPattern = pattern;
  LCD128x64P__clearScreenNB__postTask();
}

# 36 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void GLCDP__LCD128x64__startClearScreen(uint8_t pattern){
#line 36
  LCD128x64P__LCD128x64__startClearScreen(pattern);
#line 36
}
#line 36
# 96 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCDP.nc"
static inline void GLCDP__TouchScreen__xyReady(uint16_t x, uint16_t y)
{




  if (GLCDP__stateTS == CALIBRATION_IN_PROGRESS_LEFT_BOTTOM) 
    {
      GLCDP__x_min = x;
      GLCDP__y_min = y;
      GLCDP__stateTS = CALIBRATION_IN_PROGRESS_RIGHT_TOP;
      GLCDP__LCD128x64__startClearScreen(0x00);
      GLCDP__LCD128x64__startWriteString("Press Right/Top", 39, 0);
      GLCDP__TouchScreen__getXY();
    }
  else {




    if (GLCDP__stateTS == CALIBRATION_IN_PROGRESS_RIGHT_TOP) 
      {
        if (x > GLCDP__x_min + 100 && y > GLCDP__y_min + 100) 
          {
            GLCDP__x_max = x;
            GLCDP__y_max = y;
            GLCDP__stateTS = CALIBRATION_DONE;
            GLCDP__LCD128x64__startClearScreen(0x00);
            GLCDP__LCD128x64__startWriteString("Calibrated", 30, 32);
            GLCDP__GLCD__calibrated();
          }
        else 
          {
            GLCDP__TouchScreen__getXY();
          }
      }
    else 




      {
        GLCDP__calcXY(x, y);
      }
    }
}

# 11 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreen.nc"
inline static void TouchScreenP__TouchScreen__xyReady(uint16_t x, uint16_t y){
#line 11
  GLCDP__TouchScreen__xyReady(x, y);
#line 11
}
#line 11
# 56 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortF.Bit1*/HplAtm128GeneralIOPinP__41__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )98U &= ~(1 << 1);
}

# 41 "/homes/hglanzer/GIT/tinyos/tos/interfaces/GeneralIO.nc"
inline static void TouchScreenP__adcY__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortF.Bit1*/HplAtm128GeneralIOPinP__41__IO__clr();
#line 41
}
#line 41
# 67 "/homes/hglanzer/GIT/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t TouchScreenP__checkTS__postTask(void ){
#line 67
  unsigned char result;
#line 67

#line 67
  result = SchedulerBasicP__TaskBasic__postTask(TouchScreenP__checkTS);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 56 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOSlowPinP.nc"
static __inline void /*HplAtm128GeneralIOC.G4*/HplAtm128GeneralIOSlowPinP__12__IO__set(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )101U |= 1 << 4;
}

# 40 "/homes/hglanzer/GIT/tinyos/tos/interfaces/GeneralIO.nc"
inline static void TouchScreenP__driveB__set(void ){
#line 40
  /*HplAtm128GeneralIOC.G4*/HplAtm128GeneralIOSlowPinP__12__IO__set();
#line 40
}
#line 40
# 57 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOSlowPinP.nc"
static __inline void /*HplAtm128GeneralIOC.G3*/HplAtm128GeneralIOSlowPinP__11__IO__clr(void )
#line 57
{
  /* atomic removed: atomic calls only */
#line 57
  * (volatile uint8_t * )101U &= ~(1 << 3);
}

# 41 "/homes/hglanzer/GIT/tinyos/tos/interfaces/GeneralIO.nc"
inline static void TouchScreenP__driveA__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.G3*/HplAtm128GeneralIOSlowPinP__11__IO__clr();
#line 41
}
#line 41
# 108 "BlinkC.nc"
static inline void BlinkC__GLCD__tsPressed(void )
{
}

# 24 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
inline static void GLCDP__GLCD__tsPressed(void ){
#line 24
  BlinkC__GLCD__tsPressed();
#line 24
}
#line 24
# 145 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCDP.nc"
static inline void GLCDP__TouchScreen__tsPressed(void )
{
  GLCDP__GLCD__tsPressed();
}

# 13 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreen.nc"
inline static void TouchScreenP__TouchScreen__tsPressed(void ){
#line 13
  GLCDP__TouchScreen__tsPressed();
#line 13
}
#line 13
# 61 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreenP.nc"
static inline void TouchScreenP__Read__readDone(error_t err, uint16_t val)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (err == SUCCESS) 
        {
          switch (TouchScreenP__state) 
            {

              case DUMMY_FIRST_X: 
                TouchScreenP__x = val;
              TouchScreenP__state = FIRST_X;
              TouchScreenP__Read__read();
              break;


              case FIRST_X: 
                if (val > 30) 
                  {
                    if (TouchScreenP__pressDetect == TRUE) 
                      {
                        TouchScreenP__pressDetect = FALSE;
                        TouchScreenP__TouchScreen__tsPressed();
                      }
                    else 
                      {
                        TouchScreenP__x = val;
                        TouchScreenP__driveA__clr();
                        TouchScreenP__driveB__set();

                        TouchScreenP__channel = ATM128_ADC_SNGL_ADC1;
                        TouchScreenP__state = DUMMY_FIRST_Y;
                        TouchScreenP__Read__read();
                      }
                  }
                else 
                  {
                    if (TouchScreenP__pressDetect == TRUE) 
                      {
                        TouchScreenP__checkTS__postTask();
                      }
                    else 
                      {
                        TouchScreenP__Read__read();
                      }
                  }
              break;


              case DUMMY_FIRST_Y: 
                TouchScreenP__y = val;
              TouchScreenP__state = FIRST_Y;
              TouchScreenP__Read__read();
              break;

              case FIRST_Y: 
                if (val > 60) 
                  {
                    TouchScreenP__y = val;
                    TouchScreenP__state = FINISHED;
                    TouchScreenP__adcY__clr();
                    TouchScreenP__TouchScreen__xyReady(TouchScreenP__x, TouchScreenP__y);
                  }
                else 
                  {
                    TouchScreenP__Read__read();
                  }
              break;

              case FINISHED: 
                break;
            }
        }
    }
#line 134
    __nesc_atomic_end(__nesc_atomic); }
}

# 48 "/homes/hglanzer/GIT/tinyos/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data)
#line 48
{
}

# 63 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Read.nc"
inline static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__readDone(uint8_t arg_0x2aad8260e6b8, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t val){
#line 63
  switch (arg_0x2aad8260e6b8) {
#line 63
    case /*TouchScreenC.AdcReadClientC*/AdcReadClientC__0__ID:
#line 63
      TouchScreenP__Read__readDone(result, val);
#line 63
      break;
#line 63
    default:
#line 63
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(arg_0x2aad8260e6b8, result, val);
#line 63
      break;
#line 63
    }
#line 63
}
#line 63
# 52 "/homes/hglanzer/GIT/tinyos/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128AdcP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 82 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__disableAdc(void )
#line 82
{
  * (volatile uint8_t *)(0x06 + 0x20) &= ~(1 << 7);
  HplAtm128AdcP__McuPowerState__update();
}

# 86 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__disableAdc(void ){
#line 86
  HplAtm128AdcP__HplAtm128Adc__disableAdc();
#line 86
}
#line 86
# 129 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP__AsyncStdControl__stop(void )
#line 129
{
  /* atomic removed: atomic calls only */
#line 130
  Atm128AdcP__HplAtm128Adc__disableAdc();

  return SUCCESS;
}

# 105 "/homes/hglanzer/GIT/tinyos/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop(void ){
#line 105
  unsigned char result;
#line 105

#line 105
  result = Atm128AdcP__AsyncStdControl__stop();
#line 105

#line 105
  return result;
#line 105
}
#line 105
# 84 "/homes/hglanzer/GIT/tinyos/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void )
#line 84
{
}

# 62 "/homes/hglanzer/GIT/tinyos/tos/lib/power/PowerDownCleanup.nc"
inline static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup(void ){
#line 62
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup();
#line 62
}
#line 62
# 79 "/homes/hglanzer/GIT/tinyos/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void )
#line 79
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop();
}

# 46 "/homes/hglanzer/GIT/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void ){
#line 46
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted();
#line 46
}
#line 46
# 218 "/homes/hglanzer/GIT/tinyos/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "/homes/hglanzer/GIT/tinyos/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x2aad8256fcc8){
#line 65
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x2aad8256fcc8);
#line 65
}
#line 65
# 67 "/homes/hglanzer/GIT/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char result;
#line 67

#line 67
  result = SchedulerBasicP__TaskBasic__postTask(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 57 "/homes/hglanzer/GIT/tinyos/tos/system/RoundRobinResourceQueueC.nc"
static inline void /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id)
#line 57
{
  /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] &= ~(1 << id % 8);
}

#line 79
static inline resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void )
#line 79
{
  int i;

  /* atomic removed: atomic calls only */
#line 81
  {
    for (i = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__last + 1; ; i++) {
        if (i == 1U) {
          i = 0;
          }
#line 85
        if (/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(i)) {
            /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__clearEntry(i);
            /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__last = i;
            {
              unsigned char __nesc_temp = 
#line 88
              i;

#line 88
              return __nesc_temp;
            }
          }
#line 90
        if (i == /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__last) {
          break;
          }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__NO_ENTRY;

#line 93
      return __nesc_temp;
    }
  }
}

# 70 "/homes/hglanzer/GIT/tinyos/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char result;
#line 70

#line 70
  result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue();
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 66 "/homes/hglanzer/GIT/tinyos/tos/system/RoundRobinResourceQueueC.nc"
static inline bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void )
#line 66
{
  int i;

  /* atomic removed: atomic calls only */
#line 68
  {
    for (i = 0; i < sizeof /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ; i++) 
      if (/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[i] > 0) {
          unsigned char __nesc_temp = 
#line 70
          FALSE;

#line 70
          return __nesc_temp;
        }
#line 71
    {
      unsigned char __nesc_temp = 
#line 71
      TRUE;

#line 71
      return __nesc_temp;
    }
  }
}

# 53 "/homes/hglanzer/GIT/tinyos/tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char result;
#line 53

#line 53
  result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty();
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 111 "/homes/hglanzer/GIT/tinyos/tos/system/ArbiterP.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_BUSY && /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId == id) {
          if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__isEmpty() == FALSE) {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__dequeue();
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__NO_RES;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_GRANTING;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
            }
          else {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__default_owner_id;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted();
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

# 47 "/homes/hglanzer/GIT/tinyos/tos/system/ArbitratedReadC.nc"
static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(uint8_t client)
#line 47
{
#line 47
  return FAIL;
}

# 120 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Resource.nc"
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__release(uint8_t arg_0x2aad8260ae30){
#line 120
  unsigned char result;
#line 120

#line 120
  switch (arg_0x2aad8260ae30) {
#line 120
    case /*TouchScreenC.AdcReadClientC*/AdcReadClientC__0__ID:
#line 120
      result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__release(/*TouchScreenC.AdcReadClientC*/AdcReadClientC__0__HAL_ID);
#line 120
      break;
#line 120
    default:
#line 120
      result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(arg_0x2aad8260ae30);
#line 120
      break;
#line 120
    }
#line 120

#line 120
  return result;
#line 120
}
#line 120
# 39 "/homes/hglanzer/GIT/tinyos/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data)
#line 39
{
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__release(client);
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__readDone(client, result, data);
}

# 63 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Read.nc"
inline static void AdcP__Read__readDone(uint8_t arg_0x2aad825dfac0, error_t result, AdcP__Read__val_t val){
#line 63
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(arg_0x2aad825dfac0, result, val);
#line 63
}
#line 63
# 103 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/AdcP.nc"
static inline void AdcP__acquiredData__runTask(void )
#line 103
{
  AdcP__state = AdcP__IDLE;
  AdcP__Read__readDone(AdcP__client, SUCCESS, AdcP__val);
}

# 204 "/homes/hglanzer/GIT/tinyos/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 204
{
}

# 53 "/homes/hglanzer/GIT/tinyos/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(uint8_t arg_0x2aad82572af8){
#line 53
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(arg_0x2aad82572af8);
#line 53
}
#line 53
# 97 "/homes/hglanzer/GIT/tinyos/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id)
#line 97
{
  /* atomic removed: atomic calls only */
#line 98
  {
    if (!/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(id)) {
        /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] |= 1 << id % 8;
        {
          unsigned char __nesc_temp = 
#line 101
          SUCCESS;

#line 101
          return __nesc_temp;
        }
      }
#line 103
    {
      unsigned char __nesc_temp = 
#line 103
      EBUSY;

#line 103
      return __nesc_temp;
    }
  }
}

# 79 "/homes/hglanzer/GIT/tinyos/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char result;
#line 79

#line 79
  result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(id);
#line 79

#line 79
  return result;
#line 79
}
#line 79
# 133 "/homes/hglanzer/GIT/tinyos/tos/system/ArbiterP.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void )
#line 133
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 134
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__default_owner_id) {
          if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_GRANTING) {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
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
            if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_IMM_GRANTING) {
                /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId;
                /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_BUSY;
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

# 56 "/homes/hglanzer/GIT/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 78 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__enableAdc(void )
#line 78
{
  * (volatile uint8_t *)(0x06 + 0x20) |= 1 << 7;
  HplAtm128AdcP__McuPowerState__update();
}

# 82 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__enableAdc(void ){
#line 82
  HplAtm128AdcP__HplAtm128Adc__enableAdc();
#line 82
}
#line 82
# 124 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP__AsyncStdControl__start(void )
#line 124
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 125
    Atm128AdcP__HplAtm128Adc__enableAdc();
#line 125
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 95 "/homes/hglanzer/GIT/tinyos/tos/interfaces/AsyncStdControl.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start(void ){
#line 95
  unsigned char result;
#line 95

#line 95
  result = Atm128AdcP__AsyncStdControl__start();
#line 95

#line 95
  return result;
#line 95
}
#line 95
# 69 "/homes/hglanzer/GIT/tinyos/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void )
#line 69
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release();
}

# 73 "/homes/hglanzer/GIT/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void ){
#line 73
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested();
#line 73
}
#line 73
# 67 "/homes/hglanzer/GIT/tinyos/tos/interfaces/TaskBasic.nc"
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
# 62 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOSlowPinP.nc"
static __inline void /*HplAtm128GeneralIOC.G3*/HplAtm128GeneralIOSlowPinP__11__IO__makeOutput(void )
#line 62
{
#line 62
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 62
    * (volatile uint8_t * )100U |= 1 << 3;
#line 62
    __nesc_atomic_end(__nesc_atomic); }
}

# 46 "/homes/hglanzer/GIT/tinyos/tos/interfaces/GeneralIO.nc"
inline static void TouchScreenP__driveA__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.G3*/HplAtm128GeneralIOSlowPinP__11__IO__makeOutput();
#line 46
}
#line 46
# 62 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOSlowPinP.nc"
static __inline void /*HplAtm128GeneralIOC.G4*/HplAtm128GeneralIOSlowPinP__12__IO__makeOutput(void )
#line 62
{
#line 62
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 62
    * (volatile uint8_t * )100U |= 1 << 4;
#line 62
    __nesc_atomic_end(__nesc_atomic); }
}

# 46 "/homes/hglanzer/GIT/tinyos/tos/interfaces/GeneralIO.nc"
inline static void TouchScreenP__driveB__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.G4*/HplAtm128GeneralIOSlowPinP__12__IO__makeOutput();
#line 46
}
#line 46
# 59 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortF.Bit0*/HplAtm128GeneralIOPinP__40__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )97U &= ~(1 << 0);
}

# 44 "/homes/hglanzer/GIT/tinyos/tos/interfaces/GeneralIO.nc"
inline static void TouchScreenP__adcX__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortF.Bit0*/HplAtm128GeneralIOPinP__40__IO__makeInput();
#line 44
}
#line 44
# 59 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortF.Bit1*/HplAtm128GeneralIOPinP__41__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )97U &= ~(1 << 1);
}

# 44 "/homes/hglanzer/GIT/tinyos/tos/interfaces/GeneralIO.nc"
inline static void TouchScreenP__adcY__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortF.Bit1*/HplAtm128GeneralIOPinP__41__IO__makeInput();
#line 44
}
#line 44
# 56 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOSlowPinP.nc"
static __inline void /*HplAtm128GeneralIOC.G3*/HplAtm128GeneralIOSlowPinP__11__IO__set(void )
#line 56
{
#line 56
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 56
    * (volatile uint8_t * )101U |= 1 << 3;
#line 56
    __nesc_atomic_end(__nesc_atomic); }
}

# 40 "/homes/hglanzer/GIT/tinyos/tos/interfaces/GeneralIO.nc"
inline static void TouchScreenP__driveA__set(void ){
#line 40
  /*HplAtm128GeneralIOC.G3*/HplAtm128GeneralIOSlowPinP__11__IO__set();
#line 40
}
#line 40
# 57 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOSlowPinP.nc"
static __inline void /*HplAtm128GeneralIOC.G4*/HplAtm128GeneralIOSlowPinP__12__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )101U &= ~(1 << 4);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 41 "/homes/hglanzer/GIT/tinyos/tos/interfaces/GeneralIO.nc"
inline static void TouchScreenP__driveB__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.G4*/HplAtm128GeneralIOSlowPinP__12__IO__clr();
#line 41
}
#line 41
# 56 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortF.Bit0*/HplAtm128GeneralIOPinP__40__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )98U &= ~(1 << 0);
}

# 41 "/homes/hglanzer/GIT/tinyos/tos/interfaces/GeneralIO.nc"
inline static void TouchScreenP__adcX__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortF.Bit0*/HplAtm128GeneralIOPinP__40__IO__clr();
#line 41
}
#line 41
# 86 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/AdcP.nc"
static inline error_t AdcP__startGet(uint8_t newState, uint8_t newClient)
#line 86
{

  AdcP__state = newState;
  AdcP__client = newClient;
  AdcP__sample();

  return SUCCESS;
}

static inline error_t AdcP__Read__read(uint8_t c)
#line 95
{
  return AdcP__startGet(AdcP__ACQUIRE_DATA, c);
}

# 55 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Read.nc"
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__read(uint8_t arg_0x2aad8260b390){
#line 55
  unsigned char result;
#line 55

#line 55
  result = AdcP__Read__read(arg_0x2aad8260b390);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 35 "/homes/hglanzer/GIT/tinyos/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(uint8_t client)
#line 35
{
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__read(client);
}

# 202 "/homes/hglanzer/GIT/tinyos/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Resource.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__granted(uint8_t arg_0x2aad82573830){
#line 102
  switch (arg_0x2aad82573830) {
#line 102
    case /*TouchScreenC.AdcReadClientC*/AdcReadClientC__0__HAL_ID:
#line 102
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(/*TouchScreenC.AdcReadClientC*/AdcReadClientC__0__ID);
#line 102
      break;
#line 102
    default:
#line 102
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__default__granted(arg_0x2aad82573830);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 216 "/homes/hglanzer/GIT/tinyos/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "/homes/hglanzer/GIT/tinyos/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x2aad8256fcc8){
#line 59
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(arg_0x2aad8256fcc8);
#line 59
}
#line 59
# 190 "/homes/hglanzer/GIT/tinyos/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId;
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId);
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__granted(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId);
}

# 107 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/MeasureClockC.nc"
static inline uint8_t MeasureClockC__Atm128Calibrate__adcPrescaler(void )
#line 107
{

  if (MeasureClockC__cycles >= 390) {
    return ATM128_ADC_PRESCALE_128;
    }
#line 111
  if (MeasureClockC__cycles >= 195) {
    return ATM128_ADC_PRESCALE_64;
    }
#line 113
  if (MeasureClockC__cycles >= 97) {
    return ATM128_ADC_PRESCALE_32;
    }
#line 115
  if (MeasureClockC__cycles >= 48) {
    return ATM128_ADC_PRESCALE_16;
    }
#line 117
  if (MeasureClockC__cycles >= 24) {
    return ATM128_ADC_PRESCALE_8;
    }
#line 119
  if (MeasureClockC__cycles >= 12) {
    return ATM128_ADC_PRESCALE_4;
    }
#line 121
  return ATM128_ADC_PRESCALE_2;
}

# 53 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/Atm128Calibrate.nc"
inline static uint8_t Atm128AdcP__Atm128Calibrate__adcPrescaler(void ){
#line 53
  unsigned char result;
#line 53

#line 53
  result = MeasureClockC__Atm128Calibrate__adcPrescaler();
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 59 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP__Admux2int(Atm128Admux_t x)
#line 59
{
#line 59
  union __nesc_unnamed4338 {
#line 59
    Atm128Admux_t f;
#line 59
    uint8_t t;
  } 
#line 59
  c = { .f = x };

#line 59
  return c.t;
}


static inline void HplAtm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t x)
#line 63
{
  * (volatile uint8_t *)(0x07 + 0x20) = HplAtm128AdcP__Admux2int(x);
}

# 58 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t admux){
#line 58
  HplAtm128AdcP__HplAtm128Adc__setAdmux(admux);
#line 58
}
#line 58
# 139 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/Atm128AdcP.nc"
static __inline bool Atm128AdcP__isPrecise(Atm128Admux_t admux, uint8_t channel, uint8_t refVoltage)
#line 139
{
  return refVoltage == admux.refs && ((
  channel <= ATM128_ADC_SNGL_ADC7 || channel >= ATM128_ADC_SNGL_1_23) || channel == admux.mux);
}

# 49 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline Atm128Admux_t HplAtm128AdcP__HplAtm128Adc__getAdmux(void )
#line 49
{
  return * (Atm128Admux_t *)& * (volatile uint8_t *)(0x07 + 0x20);
}

# 53 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static Atm128Admux_t Atm128AdcP__HplAtm128Adc__getAdmux(void ){
#line 53
  struct __nesc_unnamed4251 result;
#line 53

#line 53
  result = HplAtm128AdcP__HplAtm128Adc__getAdmux();
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 204 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline void Atm128AdcP__getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler)
#line 204
{
  Atm128Admux_t admux;
  Atm128Adcsra_t adcsr;

  admux = Atm128AdcP__HplAtm128Adc__getAdmux();
  Atm128AdcP__f.precise = Atm128AdcP__isPrecise(admux, channel, refVoltage);
  Atm128AdcP__f.channel = channel;

  admux.refs = refVoltage;
  admux.adlar = leftJustify;
  admux.mux = channel;
  Atm128AdcP__HplAtm128Adc__setAdmux(admux);

  adcsr.aden = ATM128_ADC_ENABLE_ON;
  adcsr.adsc = ATM128_ADC_START_CONVERSION_ON;
  adcsr.adfr = Atm128AdcP__f.multiple;
  adcsr.adif = ATM128_ADC_INT_FLAG_ON;
  adcsr.adie = ATM128_ADC_INT_ENABLE_ON;
  if (prescaler == ATM128_ADC_PRESCALE) {
    prescaler = Atm128AdcP__Atm128Calibrate__adcPrescaler();
    }
#line 224
  adcsr.adps = prescaler;
  Atm128AdcP__HplAtm128Adc__setAdcsra(adcsr);
}

static inline bool Atm128AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler)
#line 229
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      Atm128AdcP__f.multiple = FALSE;
      Atm128AdcP__getData(channel, refVoltage, leftJustify, prescaler);

      {
        unsigned char __nesc_temp = 
#line 235
        Atm128AdcP__f.precise;

        {
#line 235
          __nesc_atomic_end(__nesc_atomic); 
#line 235
          return __nesc_temp;
        }
      }
    }
#line 238
    __nesc_atomic_end(__nesc_atomic); }
}

# 70 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/Atm128AdcSingle.nc"
inline static bool AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler){
#line 70
  unsigned char result;
#line 70

#line 70
  result = Atm128AdcP__Atm128AdcSingle__getData(channel, refVoltage, leftJustify, prescaler);
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 157 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreenP.nc"
static inline uint8_t TouchScreenP__Atm128AdcConfig__getChannel(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      {
        unsigned char __nesc_temp = 
#line 161
        TouchScreenP__channel;

        {
#line 161
          __nesc_atomic_end(__nesc_atomic); 
#line 161
          return __nesc_temp;
        }
      }
    }
#line 164
    __nesc_atomic_end(__nesc_atomic); }
}

# 137 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__Atm128AdcConfig__default__getChannel(uint8_t c)
#line 137
{
  return ATM128_ADC_SNGL_GND;
}

# 25 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP__Atm128AdcConfig__getChannel(uint8_t arg_0x2aad825dacd0){
#line 25
  unsigned char result;
#line 25

#line 25
  switch (arg_0x2aad825dacd0) {
#line 25
    case /*TouchScreenC.AdcReadClientC*/AdcReadClientC__0__ID:
#line 25
      result = TouchScreenP__Atm128AdcConfig__getChannel();
#line 25
      break;
#line 25
    default:
#line 25
      result = AdcP__Atm128AdcConfig__default__getChannel(arg_0x2aad825dacd0);
#line 25
      break;
#line 25
    }
#line 25

#line 25
  return result;
#line 25
}
#line 25
# 70 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__channel(void )
#line 70
{
  return AdcP__Atm128AdcConfig__getChannel(AdcP__client);
}

# 152 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreenP.nc"
static inline uint8_t TouchScreenP__Atm128AdcConfig__getRefVoltage(void )
{
  return 1;
}

# 141 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__Atm128AdcConfig__default__getRefVoltage(uint8_t c)
#line 141
{
  return ATM128_ADC_VREF_OFF;
}

# 32 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP__Atm128AdcConfig__getRefVoltage(uint8_t arg_0x2aad825dacd0){
#line 32
  unsigned char result;
#line 32

#line 32
  switch (arg_0x2aad825dacd0) {
#line 32
    case /*TouchScreenC.AdcReadClientC*/AdcReadClientC__0__ID:
#line 32
      result = TouchScreenP__Atm128AdcConfig__getRefVoltage();
#line 32
      break;
#line 32
    default:
#line 32
      result = AdcP__Atm128AdcConfig__default__getRefVoltage(arg_0x2aad825dacd0);
#line 32
      break;
#line 32
    }
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 74 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__refVoltage(void )
#line 74
{
  return AdcP__Atm128AdcConfig__getRefVoltage(AdcP__client);
}

# 165 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreenP.nc"
static inline uint8_t TouchScreenP__Atm128AdcConfig__getPrescaler(void )
{
  return ATM128_ADC_PRESCALE_128;
}

# 145 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__Atm128AdcConfig__default__getPrescaler(uint8_t c)
#line 145
{
  return ATM128_ADC_PRESCALE_2;
}

# 39 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP__Atm128AdcConfig__getPrescaler(uint8_t arg_0x2aad825dacd0){
#line 39
  unsigned char result;
#line 39

#line 39
  switch (arg_0x2aad825dacd0) {
#line 39
    case /*TouchScreenC.AdcReadClientC*/AdcReadClientC__0__ID:
#line 39
      result = TouchScreenP__Atm128AdcConfig__getPrescaler();
#line 39
      break;
#line 39
    default:
#line 39
      result = AdcP__Atm128AdcConfig__default__getPrescaler(arg_0x2aad825dacd0);
#line 39
      break;
#line 39
    }
#line 39

#line 39
  return result;
#line 39
}
#line 39
# 78 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__prescaler(void )
#line 78
{
  return AdcP__Atm128AdcConfig__getPrescaler(AdcP__client);
}

# 36 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreenP.nc"
static inline void TouchScreenP__checkTS__runTask(void )
{
  TouchScreenP__TouchScreen__getXY();
}

# 29 "BlinkC.nc"
static inline void BlinkC__testTask__runTask(void )
{
}

# 61 "/homes/hglanzer/GIT/tinyos/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void )
#line 61
{
  memset(/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ, 0, sizeof /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ);
  return SUCCESS;
}

# 71 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__Init__init(void )
#line 71
{
  if (PLATFORM_BAUDRATE == 19200UL) {
    /*Atm128Uart1C.UartP*/Atm128UartP__0__m_byte_time = 200;
    }
  else {
#line 74
    if (PLATFORM_BAUDRATE == 57600UL) {
      /*Atm128Uart1C.UartP*/Atm128UartP__0__m_byte_time = 68;
      }
    }
#line 76
  return SUCCESS;
}

# 124 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/MeasureClockC.nc"
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate)
#line 124
{


  return 8;
}

# 60 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/Atm128Calibrate.nc"
inline static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate){
#line 60
  unsigned short result;
#line 60

#line 60
  result = MeasureClockC__Atm128Calibrate__baudrateRegister(baudrate);
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 190 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart1Init__init(void )
#line 190
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr1;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr1 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)0x99 = ubrr1;
  * (volatile uint8_t *)0x98 = ubrr1 >> 8;
  * (volatile uint8_t *)0x9B = stts.flat;
  * (volatile uint8_t *)0x9D = mode.flat;
  * (volatile uint8_t *)0x9A = ctrl.flat;

  return SUCCESS;
}

#line 96
static inline error_t HplAtm128UartP__Uart0Init__init(void )
#line 96
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr0;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr0 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)(0x09 + 0x20) = ubrr0;
  * (volatile uint8_t *)0x90 = ubrr0 >> 8;
  * (volatile uint8_t *)(0x0B + 0x20) = stts.flat;
  * (volatile uint8_t *)0x95 = mode.flat;
  * (volatile uint8_t *)(0x0A + 0x20) = ctrl.flat;

  return SUCCESS;
}

# 146 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer0SyncP.nc"
static inline void HplAtm128Timer0SyncP__Compare__start(void )
#line 146
{
#line 146
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 1;
}

# 65 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__start(void ){
#line 65
  HplAtm128Timer0SyncP__Compare__start();
#line 65
}
#line 65
# 100 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer0SyncP.nc"
static inline void HplAtm128Timer0SyncP__TimerCtrl__setControl(Atm128TimerControl_t x)
#line 100
{
  * (volatile uint8_t *)(0x33 + 0x20) = x.flat;
}

# 46 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__TimerCtrl__setControl(Atm128TimerControl_t control){
#line 46
  HplAtm128Timer0SyncP__TimerCtrl__setControl(control);
#line 46
}
#line 46
# 240 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer0SyncP.nc"
static inline void HplAtm128Timer0SyncP__TimerSync__setTimer0Synchronous(void )
#line 240
{
  * (volatile uint8_t *)(0x30 + 0x20) &= 1 << 3;
}

# 39 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128TimerSync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__TimerSync__setTimer0Synchronous(void ){
#line 39
  HplAtm128Timer0SyncP__TimerSync__setTimer0Synchronous();
#line 39
}
#line 39
# 61 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/Atm128AlarmSyncP.nc"
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

# 62 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char result;
#line 62

#line 62
  result = /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Init__init();
#line 62
  result = ecombine(result, HplAtm128UartP__Uart0Init__init());
#line 62
  result = ecombine(result, HplAtm128UartP__Uart1Init__init());
#line 62
  result = ecombine(result, /*Atm128Uart1C.UartP*/Atm128UartP__0__Init__init());
#line 62
  result = ecombine(result, /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__Init__init());
#line 62

#line 62
  return result;
#line 62
}
#line 62
# 67 "/homes/hglanzer/GIT/tinyos/tos/interfaces/TaskBasic.nc"
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
# 146 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 149
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
}

# 64 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/Timer.nc"
inline static void BlinkC__Timer0__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(0U, dt);
#line 64
}
#line 64
# 98 "BlinkC.nc"
static inline void BlinkC__GLCD__initDone(void )
{


  BlinkC__GLCD__startWriteRectangle(0, 0, 128, 4);


  BlinkC__Timer0__startPeriodic(500);
}

# 68 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
inline static void GLCDP__GLCD__initDone(void ){
#line 68
  BlinkC__GLCD__initDone();
#line 68
}
#line 68
# 288 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCDP.nc"
static inline void GLCDP__LCD128x64__initDone(void )
{
  GLCDP__GLCD__initDone();
}

# 38 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void LCD128x64P__LCD128x64__initDone(void ){
#line 38
  GLCDP__LCD128x64__initDone();
#line 38
}
#line 38
# 265 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
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

# 4 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void GLCDP__LCD128x64__initLCD(uint8_t pattern){
#line 4
  LCD128x64P__LCD128x64__initLCD(pattern);
#line 4
}
#line 4
# 155 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCDP.nc"
static inline void GLCDP__GLCD__initLCD(uint8_t pattern)
{
  GLCDP__LCD128x64__initLCD(pattern);
}

# 34 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
inline static void BlinkC__GLCD__initLCD(uint8_t pattern){
#line 34
  GLCDP__GLCD__initLCD(pattern);
#line 34
}
#line 34
# 92 "BlinkC.nc"
static inline void BlinkC__Boot__booted(void )
{
  BlinkC__GLCD__initLCD(0x01);
  BlinkC__bigAVR6UART0__receive((uint8_t *)BlinkC__uartBuf, 5);
}

# 60 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  BlinkC__Boot__booted();
#line 60
}
#line 60
# 179 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer0SyncP.nc"
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

# 62 "/homes/hglanzer/GIT/tinyos/tos/interfaces/McuPowerOverride.nc"
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
# 74 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/McuSleepC.nc"
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

# 140 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 140
{
  return m1 < m2 ? m1 : m2;
}

# 108 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/McuSleepC.nc"
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

# 76 "/homes/hglanzer/GIT/tinyos/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 76
  McuSleepC__McuSleep__sleep();
#line 76
}
#line 76
# 78 "/homes/hglanzer/GIT/tinyos/tos/system/SchedulerBasicP.nc"
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

# 72 "/homes/hglanzer/GIT/tinyos/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 72
  SchedulerBasicP__Scheduler__taskLoop();
#line 72
}
#line 72
# 55 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline uint16_t HplAtm128AdcP__HplAtm128Adc__getValue(void )
#line 55
{
  return * (volatile uint16_t *)(0x04 + 0x20);
}

#line 52
static inline Atm128Adcsra_t HplAtm128AdcP__HplAtm128Adc__getAdcsra(void )
#line 52
{
  return * (Atm128Adcsra_t *)& * (volatile uint8_t *)(0x06 + 0x20);
}

#line 117
static inline bool HplAtm128AdcP__HplAtm128Adc__cancel(void )
#line 117
{
  /* atomic removed: atomic calls only */

  {
    Atm128Adcsra_t oldSr = HplAtm128AdcP__HplAtm128Adc__getAdcsra();
#line 121
    Atm128Adcsra_t newSr;





    newSr = oldSr;
    newSr.aden = FALSE;
    newSr.adif = TRUE;
    newSr.adie = FALSE;

    HplAtm128AdcP__HplAtm128Adc__setAdcsra(newSr);
    newSr.adsc = FALSE;
    HplAtm128AdcP__HplAtm128Adc__setAdcsra(newSr);
    newSr.aden = TRUE;
    HplAtm128AdcP__HplAtm128Adc__setAdcsra(newSr);

    {
      unsigned char __nesc_temp = 
#line 138
      oldSr.adif || oldSr.adsc;

#line 138
      return __nesc_temp;
    }
  }
}

# 150 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static bool Atm128AdcP__HplAtm128Adc__cancel(void ){
#line 150
  unsigned char result;
#line 150

#line 150
  result = HplAtm128AdcP__HplAtm128Adc__cancel();
#line 150

#line 150
  return result;
#line 150
}
#line 150
# 262 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline bool Atm128AdcP__Atm128AdcMultiple__default__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage)
#line 263
{
  return FALSE;
}

# 119 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
inline static bool Atm128AdcP__Atm128AdcMultiple__dataReady(uint16_t data, bool precise, uint8_t channel, uint8_t *newChannel, uint8_t *newRefVoltage){
#line 119
  unsigned char result;
#line 119

#line 119
  result = Atm128AdcP__Atm128AdcMultiple__default__dataReady(data, precise, channel, newChannel, newRefVoltage);
#line 119

#line 119
  return result;
#line 119
}
#line 119
# 150 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/AdcP.nc"
static inline void AdcP__ReadNow__default__readDone(uint8_t c, error_t e, uint16_t d)
#line 150
{
}

# 66 "/homes/hglanzer/GIT/tinyos/tos/interfaces/ReadNow.nc"
inline static void AdcP__ReadNow__readDone(uint8_t arg_0x2aad825dc6d8, error_t result, AdcP__ReadNow__val_t val){
#line 66
    AdcP__ReadNow__default__readDone(arg_0x2aad825dc6d8, result, val);
#line 66
}
#line 66
# 67 "/homes/hglanzer/GIT/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t AdcP__acquiredData__postTask(void ){
#line 67
  unsigned char result;
#line 67

#line 67
  result = SchedulerBasicP__TaskBasic__postTask(AdcP__acquiredData);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 108 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/AdcP.nc"
static inline void AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise)
#line 108
{
  switch (AdcP__state) 
    {
      case AdcP__ACQUIRE_DATA: 
        if (!precise) {
          AdcP__sample();
          }
        else {
            AdcP__val = data;
            AdcP__acquiredData__postTask();
          }
      break;

      case AdcP__ACQUIRE_DATA_NOW: 
        if (!precise) {
          AdcP__sample();
          }
        else {
            AdcP__state = AdcP__IDLE;
            AdcP__ReadNow__readDone(AdcP__client, SUCCESS, data);
          }
      break;

      default: 
        break;
    }
}

# 81 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/Atm128AdcSingle.nc"
inline static void Atm128AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise){
#line 81
  AdcP__Atm128AdcSingle__dataReady(data, precise);
#line 81
}
#line 81
# 87 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__disableInterruption(void )
#line 87
{
#line 87
  * (volatile uint8_t *)(0x06 + 0x20) &= ~(1 << 3);
}

# 95 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__disableInterruption(void ){
#line 95
  HplAtm128AdcP__HplAtm128Adc__disableInterruption();
#line 95
}
#line 95
# 144 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline void Atm128AdcP__HplAtm128Adc__dataReady(uint16_t data)
#line 144
{
  bool precise;
#line 145
  bool multiple;
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      channel = Atm128AdcP__f.channel;
      precise = Atm128AdcP__f.precise;
      multiple = Atm128AdcP__f.multiple;
    }
#line 153
    __nesc_atomic_end(__nesc_atomic); }

  if (!multiple) 
    {


      Atm128AdcP__HplAtm128Adc__disableInterruption();
      Atm128AdcP__Atm128AdcSingle__dataReady(data, precise);
    }
  else 
    {







      bool cont;
      uint8_t nextChannel;
#line 172
      uint8_t nextVoltage;
      Atm128Admux_t admux;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          admux = Atm128AdcP__HplAtm128Adc__getAdmux();
          nextVoltage = admux.refs;
          nextChannel = admux.mux;
        }
#line 180
        __nesc_atomic_end(__nesc_atomic); }

      cont = Atm128AdcP__Atm128AdcMultiple__dataReady(data, precise, channel, 
      &nextChannel, &nextVoltage);
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        if (cont) 
          {



            admux.refs = nextVoltage;
            admux.mux = nextChannel;
            Atm128AdcP__HplAtm128Adc__setAdmux(admux);

            Atm128AdcP__f = Atm128AdcP__nextF;
            Atm128AdcP__nextF.channel = nextChannel;
            Atm128AdcP__nextF.precise = Atm128AdcP__isPrecise(admux, nextChannel, nextVoltage);
          }
        else {
          Atm128AdcP__HplAtm128Adc__cancel();
          }
#line 200
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 156 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void HplAtm128AdcP__HplAtm128Adc__dataReady(uint16_t data){
#line 156
  Atm128AdcP__HplAtm128Adc__dataReady(data);
#line 156
}
#line 156
# 284 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart0__default__rxDone(uint8_t data)
#line 284
{
}

# 49 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__rxDone(uint8_t data){
#line 49
  HplAtm128UartP__HplUart0__default__rxDone(data);
#line 49
}
#line 49
# 283 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart0__default__txDone(void )
#line 283
{
}

# 47 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__txDone(void ){
#line 47
  HplAtm128UartP__HplUart0__default__txDone();
#line 47
}
#line 47
# 48 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/uart/bigAVR6UART0P.nc"
static inline void bigAVR6UART0P__UartStream__receivedByte(uint8_t byte)
{
}

# 79 "/homes/hglanzer/GIT/tinyos/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte){
#line 79
  bigAVR6UART0P__UartStream__receivedByte(byte);
#line 79
}
#line 79
# 62 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
inline static error_t BlinkC__GLCD__startWriteString(char *data, uint8_t x, uint8_t y){
#line 62
  unsigned char result;
#line 62

#line 62
  result = GLCDP__GLCD__startWriteString(data, x, y);
#line 62

#line 62
  return result;
#line 62
}
#line 62
# 164 "BlinkC.nc"
static inline void BlinkC__bigAVR6UART0__receiveDone(uint8_t *stream, uint16_t len, error_t error)
{
  BlinkC__GLCD__startWriteString("GOTCHA", 0, BlinkC__count2);
}

# 15 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/uart/bigAVR6UART0.nc"
inline static void bigAVR6UART0P__bigAVR6UART0__receiveDone(uint8_t *buf, uint16_t len, error_t error){
#line 15
  BlinkC__bigAVR6UART0__receiveDone(buf, len, error);
#line 15
}
#line 15
# 53 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/uart/bigAVR6UART0P.nc"
static inline void bigAVR6UART0P__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error)
{
  bigAVR6UART0P__bigAVR6UART0__receiveDone(buf, len, error);
}

# 99 "/homes/hglanzer/GIT/tinyos/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__receiveDone(uint8_t * buf, uint16_t len, error_t error){
#line 99
  bigAVR6UART0P__UartStream__receiveDone(buf, len, error);
#line 99
}
#line 99
# 250 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart1__disableRxIntr(void )
#line 250
{
  * (volatile uint8_t *)0x9A &= ~(1 << 7);
  return SUCCESS;
}

# 43 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void ){
#line 43
  unsigned char result;
#line 43

#line 43
  result = HplAtm128UartP__HplUart1__disableRxIntr();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 135 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data)
#line 135
{

  if (/*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_buf) {
      /*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_buf[/*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_pos++] = data;
      if (/*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_pos >= /*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_len) {
          uint8_t *buf = /*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_buf;

          /* atomic removed: atomic calls only */
#line 141
          {
            /*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_buf = (void *)0;
            if (/*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_intr != 3) {
                /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
                /*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_intr = 0;
              }
          }
          /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__receiveDone(buf, /*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_len, SUCCESS);
        }
    }
  else {
      /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__receivedByte(data);
    }
}

# 49 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__rxDone(uint8_t data){
#line 49
  /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__rxDone(data);
#line 49
}
#line 49
# 66 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
inline static error_t BlinkC__GLCD__startClearScreen(uint8_t pattern){
#line 66
  unsigned char result;
#line 66

#line 66
  result = GLCDP__GLCD__startClearScreen(pattern);
#line 66

#line 66
  return result;
#line 66
}
#line 66
# 67 "/homes/hglanzer/GIT/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t LCD128x64P__writeBar__postTask(void ){
#line 67
  unsigned char result;
#line 67

#line 67
  result = SchedulerBasicP__TaskBasic__postTask(LCD128x64P__writeBar);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 490 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
static inline void LCD128x64P__LCD128x64__startWriteBar(uint8_t x, uint8_t y, uint8_t length, uint8_t width)
{
  LCD128x64P__xPos[4] = x;
  LCD128x64P__yPos[4] = y;
  LCD128x64P__aBar = length;
  LCD128x64P__bBar = width;
  LCD128x64P__writeBar__postTask();
}

# 26 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void GLCDP__LCD128x64__startWriteBar(uint8_t x, uint8_t y, uint8_t length, uint8_t width){
#line 26
  LCD128x64P__LCD128x64__startWriteBar(x, y, length, width);
#line 26
}
#line 26
# 175 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCDP.nc"
static inline error_t GLCDP__GLCD__startWriteBar(uint8_t x, uint8_t y, uint8_t length, uint8_t width)
{
  if ((GLCDP__stateGLCD & BUSY_BAR) == 1) 
    {
      return FAIL;
    }
  else {
#line 181
    if (((width == 0 || length == 0) || x + length > 128) || y + width > 64) 
      {
        return FAIL;
      }
    else 
      {
        GLCDP__stateGLCD = GLCDP__stateGLCD | BUSY_BAR;
        GLCDP__LCD128x64__startWriteBar(x, y, length, width);
        return SUCCESS;
      }
    }
}

# 56 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
inline static error_t BlinkC__GLCD__startWriteBar(uint8_t x, uint8_t y, uint8_t length, uint8_t width){
#line 56
  unsigned char result;
#line 56

#line 56
  result = GLCDP__GLCD__startWriteBar(x, y, length, width);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 149 "BlinkC.nc"
static inline void BlinkC__bigAVR6UART0__sendDone(uint8_t *stream, uint16_t len, error_t error)
{
  BlinkC__GLCD__startWriteBar(0, 1, BlinkC__count, 2);
  if (BlinkC__count == 128) 
    {
      BlinkC__GLCD__startClearScreen(0x00);
      BlinkC__count = 0;
    }
  BlinkC__bigAVR6UART0__receive((uint8_t *)BlinkC__uartBuf, 5);
}

# 17 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/uart/bigAVR6UART0.nc"
inline static void bigAVR6UART0P__bigAVR6UART0__sendDone(uint8_t *buf, uint16_t len, error_t error){
#line 17
  BlinkC__bigAVR6UART0__sendDone(buf, len, error);
#line 17
}
#line 17
# 228 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart1RxControl__stop(void )
#line 228
{
  * (volatile uint8_t *)0x9A &= ~(1 << 4);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 105 "/homes/hglanzer/GIT/tinyos/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void ){
#line 105
  unsigned char result;
#line 105

#line 105
  result = HplAtm128UartP__Uart1RxControl__stop();
#line 105

#line 105
  return result;
#line 105
}
#line 105
# 216 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart1TxControl__stop(void )
#line 216
{
  * (volatile uint8_t *)0x9A &= ~(1 << 3);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 105 "/homes/hglanzer/GIT/tinyos/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void ){
#line 105
  unsigned char result;
#line 105

#line 105
  result = HplAtm128UartP__Uart1TxControl__stop();
#line 105

#line 105
  return result;
#line 105
}
#line 105
# 95 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__StdControl__stop(void )
#line 95
{
  /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUartTxControl__stop();
  /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUartRxControl__stop();
  return SUCCESS;
}

# 105 "/homes/hglanzer/GIT/tinyos/tos/interfaces/StdControl.nc"
inline static error_t bigAVR6UART0P__StdControl__stop(void ){
#line 105
  unsigned char result;
#line 105

#line 105
  result = /*Atm128Uart1C.UartP*/Atm128UartP__0__StdControl__stop();
#line 105

#line 105
  return result;
#line 105
}
#line 105
# 42 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/uart/bigAVR6UART0P.nc"
static inline void bigAVR6UART0P__UartStream__sendDone(uint8_t *buf, uint16_t len, error_t error)
{
  bigAVR6UART0P__StdControl__stop();
  bigAVR6UART0P__bigAVR6UART0__sendDone(buf, len, error);
}

# 57 "/homes/hglanzer/GIT/tinyos/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__sendDone(uint8_t * buf, uint16_t len, error_t error){
#line 57
  bigAVR6UART0P__UartStream__sendDone(buf, len, error);
#line 57
}
#line 57
# 240 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart1__disableTxIntr(void )
#line 240
{
  * (volatile uint8_t *)0x9A &= ~(1 << 6);
  return SUCCESS;
}

# 41 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void ){
#line 41
  unsigned char result;
#line 41

#line 41
  result = HplAtm128UartP__HplUart1__disableTxIntr();
#line 41

#line 41
  return result;
#line 41
}
#line 41





inline static void /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data){
#line 46
  HplAtm128UartP__HplUart1__tx(data);
#line 46
}
#line 46
# 175 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__txDone(void )
#line 175
{

  if (/*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_pos < /*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_len) {
      /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__tx(/*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_buf[/*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_pos++]);
    }
  else {
      uint8_t *buf = /*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_buf;

#line 182
      /*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_buf = (void *)0;
      /*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_intr = 0;
      /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
      /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__sendDone(buf, /*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_len, SUCCESS);
    }
}

# 47 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__txDone(void ){
#line 47
  /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__txDone();
#line 47
}
#line 47
# 164 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer0SyncP.nc"
static __inline void HplAtm128Timer0SyncP__stabiliseTimer0(void )
#line 164
{
  * (volatile uint8_t *)(0x33 + 0x20) = * (volatile uint8_t *)(0x33 + 0x20);
  while (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 0)) 
    ;
}

# 58 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 82 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Counter__overflow(void ){
#line 82
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 82
}
#line 82
# 88 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 88
{
   __asm volatile ("sei");}

# 156 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer0SyncP.nc"
static inline uint8_t HplAtm128Timer0SyncP__Compare__get(void )
#line 156
{
#line 156
  return * (volatile uint8_t *)(0x31 + 0x20);
}

# 48 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128Compare.nc"
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
# 156 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/Atm128AlarmSyncP.nc"
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

# 58 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128Compare.nc"
inline static void HplAtm128Timer0SyncP__Compare__fired(void ){
#line 58
  /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__fired();
#line 58
}
#line 58
# 237 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/Atm128AlarmSyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Timer__overflow(void )
#line 237
{
}

# 70 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer.nc"
inline static void HplAtm128Timer0SyncP__Timer__overflow(void ){
#line 70
  /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Timer__overflow();
#line 70
}
#line 70
# 63 "/homes/hglanzer/GIT/tinyos/tos/system/RealMainP.nc"
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

# 134 "/homes/hglanzer/GIT/tinyos/tos/system/SchedulerBasicP.nc"
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

# 75 "/homes/hglanzer/GIT/tinyos/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x2aad821a0108){
#line 75
  switch (arg_0x2aad821a0108) {
#line 75
    case BlinkC__testTask:
#line 75
      BlinkC__testTask__runTask();
#line 75
      break;
#line 75
    case TouchScreenP__checkTS:
#line 75
      TouchScreenP__checkTS__runTask();
#line 75
      break;
#line 75
    case /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask:
#line 75
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case AdcP__acquiredData:
#line 75
      AdcP__acquiredData__runTask();
#line 75
      break;
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
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x2aad821a0108);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 168 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/Atm128AlarmSyncP.nc"
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

# 75 "/homes/hglanzer/GIT/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
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

# 79 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/Atm128UartP.nc"
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__StdControl__start(void )
#line 79
{

  /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
  /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
  /*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_intr = 0;
  /*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_intr = 0;


  /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUartTxControl__start();
  /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUartRxControl__start();


  /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__enableRxIntr();
  return SUCCESS;
}

#line 157
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len)
#line 157
{

  if (len == 0) {
    return FAIL;
    }
  else {
#line 161
    if (/*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_buf) {
      return EBUSY;
      }
    }
#line 164
  /*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_len = len;
  /*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_buf = buf;
  /*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_pos = 0;
  /*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_intr = 1;
  /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__enableTxIntr();
  /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__tx(buf[/*Atm128Uart1C.UartP*/Atm128UartP__0__m_tx_pos++]);

  return SUCCESS;
}

# 267 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/HplAtm128UartP.nc"
static void HplAtm128UartP__HplUart1__tx(uint8_t data)
#line 267
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 268
    {
      * (volatile uint8_t *)0x9C = data;
      * (volatile uint8_t *)0x9B |= 1 << 6;
    }
#line 271
    __nesc_atomic_end(__nesc_atomic); }
}

# 170 "/homes/hglanzer/GIT/tinyos/tos/system/SchedulerBasicP.nc"
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

# 219 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/Atm128AlarmSyncP.nc"
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

# 85 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
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

# 193 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCDP.nc"
static error_t GLCDP__GLCD__startWriteRectangle(uint8_t x, uint8_t y, uint8_t a, uint8_t b)
{
  if ((GLCDP__stateGLCD & BUSY_RECT) == 1) 
    {
      return FAIL;
    }
  else {
#line 199
    if (x + a > 128 || y + b > 64) 
      {
        return FAIL;
      }
    else 
      {
        GLCDP__stateGLCD = GLCDP__stateGLCD | BUSY_RECT;
        GLCDP__LCD128x64__startWriteRectangle(x, y, a, b);
        return SUCCESS;
      }
    }
}

# 117 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/Atm128UartP.nc"
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__receive(uint8_t *buf, uint16_t len)
#line 117
{

  if (len == 0) {
    return FAIL;
    }
#line 121
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 121
    {
      if (/*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_buf) 
        {
          unsigned char __nesc_temp = 
#line 123
          EBUSY;

          {
#line 123
            __nesc_atomic_end(__nesc_atomic); 
#line 123
            return __nesc_temp;
          }
        }
#line 124
      /*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_buf = buf;
      /*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_len = len;
      /*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_pos = 0;
      /*Atm128Uart1C.UartP*/Atm128UartP__0__m_rx_intr |= 1;
      /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__enableRxIntr();
    }
#line 129
    __nesc_atomic_end(__nesc_atomic); }

  return SUCCESS;
}

# 75 "/homes/hglanzer/GIT/tinyos/tos/system/RoundRobinResourceQueueC.nc"
static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id)
#line 75
{
  return /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] & (1 << id % 8);
}

# 77 "/homes/hglanzer/GIT/tinyos/tos/system/ArbiterP.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Resource__request(uint8_t id)
#line 77
{
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceRequested__requested(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__RES_GRANTING;
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId = id;
        }
      else {
#line 84
        if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__reqResId == id) {
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
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__Queue__enqueue(id);

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
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 440 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
static void LCD128x64P__LCD128x64__startWriteString(char *data, uint8_t x, uint8_t y)
{
  LCD128x64P__xPos[2] = x;
  LCD128x64P__yPos[2] = y;
  LCD128x64P__dataPtr = data;

  LCD128x64P__writeString__postTask();
}

# 41 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreenP.nc"
static void TouchScreenP__TouchScreen__getXY(void )
{
  TouchScreenP__state = DUMMY_FIRST_X;
  TouchScreenP__driveA__makeOutput();
  TouchScreenP__driveB__makeOutput();
  TouchScreenP__adcX__makeInput();
  TouchScreenP__adcY__makeInput();

  TouchScreenP__driveA__set();
  TouchScreenP__driveB__clr();
  TouchScreenP__adcX__clr();
  TouchScreenP__adcY__clr();

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      TouchScreenP__channel = ATM128_ADC_SNGL_ADC0;
    }
#line 57
    __nesc_atomic_end(__nesc_atomic); }
  TouchScreenP__Read__read();
}

# 36 "BlinkC.nc"
static void BlinkC__GLCD__xyReady(uint16_t x, uint16_t y)
{
  BlinkC__tmp = x % 10;
  BlinkC__buf[3] = BlinkC__tmp + 0x30;
  x = (x - BlinkC__tmp) / 10;

  BlinkC__tmp = x % 10;
  BlinkC__buf[2] = BlinkC__tmp + 0x30;
  x = (x - BlinkC__tmp) / 10;

  BlinkC__tmp = x % 10;
  BlinkC__buf[1] = BlinkC__tmp + 0x30;
  x = (x - BlinkC__tmp) / 10;

  BlinkC__tmp = x % 10;
  BlinkC__buf[0] = BlinkC__tmp + 0x30;
  BlinkC__buf[4] = '/';

  BlinkC__tmp = y % 10;
  BlinkC__buf[8] = BlinkC__tmp + 0x30;
  y = (y - BlinkC__tmp) / 10;

  BlinkC__tmp = y % 10;
  BlinkC__buf[7] = BlinkC__tmp + 0x30;
  y = (y - BlinkC__tmp) / 10;

  BlinkC__tmp = y % 10;
  BlinkC__buf[6] = BlinkC__tmp + 0x30;
  y = (y - BlinkC__tmp) / 10;

  BlinkC__tmp = y % 10;
  BlinkC__buf[5] = BlinkC__tmp + 0x30;
  BlinkC__buf[9] = '\0';

  BlinkC__GLCD__startWriteString(BlinkC__buf, 45, 40);
  BlinkC__x_lokal = x;
  BlinkC__GLCD__startClearScreen(0x00);
#line 72
  ;
}

# 231 "/homes/hglanzer/GIT/tinyos/tos/platforms/bigAVR6/GLCD/GLCDP.nc"
static error_t GLCDP__GLCD__startWriteString(char *data, uint8_t x, uint8_t y)
{
  if ((GLCDP__stateGLCD & BUSY_STRING) == 1) 
    {
      return FAIL;
    }
  else {
#line 237
    if (x > 128 || y > 7) 
      {
        return FAIL;
      }
    else 
      {
        GLCDP__stateGLCD = GLCDP__stateGLCD | BUSY_STRING;
        GLCDP__LCD128x64__startWriteString(data, x, y);
        return SUCCESS;
      }
    }
}

#line 267
static error_t GLCDP__GLCD__startClearScreen(uint8_t pattern)
{
  if ((GLCDP__stateGLCD & BUSY_CLEAR) == 1) 
    {
      return FAIL;
    }
  else 
    {
      GLCDP__stateGLCD = GLCDP__stateGLCD | BUSY_CLEAR;
      GLCDP__LCD128x64__startClearScreen(pattern);
      return SUCCESS;
    }
}

# 82 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/AdcP.nc"
static void AdcP__sample(void )
#line 82
{
  AdcP__Atm128AdcSingle__getData(AdcP__channel(), AdcP__refVoltage(), FALSE, AdcP__prescaler());
}

# 108 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/adc/HplAtm128AdcP.nc"
__attribute((signal))   void __vector_21(void )
#line 108
{
  uint16_t data = HplAtm128AdcP__HplAtm128Adc__getValue();

  __nesc_enable_interrupt();
  HplAtm128AdcP__HplAtm128Adc__dataReady(data);
}

# 180 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/HplAtm128UartP.nc"
__attribute((signal))   void __vector_18(void )
#line 180
{
  if ((* (volatile uint8_t *)(0x0B + 0x20) & (1 << 7)) != 0) {
      HplAtm128UartP__HplUart0__rxDone(* (volatile uint8_t *)(0x0C + 0x20));
    }
}

__attribute((interrupt))   void __vector_20(void )
#line 186
{
  HplAtm128UartP__HplUart0__txDone();
}

#line 274
__attribute((signal))   void __vector_30(void )
#line 274
{
  if ((* (volatile uint8_t *)0x9B & (1 << 7)) != 0) {
    HplAtm128UartP__HplUart1__rxDone(* (volatile uint8_t *)0x9C);
    }
}

#line 279
__attribute((interrupt))   void __vector_32(void )
#line 279
{
  HplAtm128UartP__HplUart1__txDone();
}

# 210 "/homes/hglanzer/GIT/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer0SyncP.nc"
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

