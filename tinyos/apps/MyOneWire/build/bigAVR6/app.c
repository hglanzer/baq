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
extern void *memset(void *arg_0x2b99930507f0, int arg_0x2b9993050a58, size_t arg_0x2b9993050d00);










extern size_t strlen(const char *arg_0x2b999305b758) __attribute((__pure__)) ;
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


typedef int (*__compar_fn_t)(const void *arg_0x2b9993071968, const void *arg_0x2b9993071c40);
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
# 41 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/Atm128Uart.h"
typedef uint8_t Atm128_UDR0_t;
typedef uint8_t Atm128_UDR1_t;
#line 57
#line 45
typedef union __nesc_unnamed4298 {
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
typedef union __nesc_unnamed4299 {
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

enum __nesc_unnamed4300 {
  ATM128_UART_DATA_SIZE_5_BITS = 0, 
  ATM128_UART_DATA_SIZE_6_BITS = 1, 
  ATM128_UART_DATA_SIZE_7_BITS = 2, 
  ATM128_UART_DATA_SIZE_8_BITS = 3
};
#line 98
#line 88
typedef union __nesc_unnamed4301 {
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





enum __nesc_unnamed4302 {
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

enum __nesc_unnamed4303 {
  TOS_UART_PARITY_NONE = 0, 
  TOS_UART_PARITY_EVEN = 1, 
  TOS_UART_PARITY_ODD = 2
};

enum __nesc_unnamed4304 {
  TOS_UART_19200 = 0, 
  TOS_UART_38400 = 1, 
  TOS_UART_57600 = 2
};

enum __nesc_unnamed4305 {
  TOS_UART_OFF = 0, 
  TOS_UART_RONLY = 1, 
  TOS_UART_TONLY = 2, 
  TOS_UART_DUPLEX = 3
};
typedef TMilli OWTestC__Timer0__precision_tag;
typedef TMicro OWTestC__Timer1__precision_tag;
typedef TMilli OneWireP__Timer0__precision_tag;
typedef TMicro OneWireP__BusyWait__precision_tag;
typedef uint16_t OneWireP__BusyWait__size_type;
enum HilTimerMilliC____nesc_unnamed4306 {
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
typedef TMicro BusyWaitMicroC__BusyWait__precision_tag;
typedef uint16_t BusyWaitMicroC__BusyWait__size_type;
typedef TMicro /*Atm128Uart1C.UartP*/Atm128UartP__0__Counter__precision_tag;
typedef uint32_t /*Atm128Uart1C.UartP*/Atm128UartP__0__Counter__size_type;
enum HilTimerMicroC____nesc_unnamed4307 {
  HilTimerMicroC__TIMER_COUNT = 1U
};
typedef TMicro /*AlarmCounterMicroP.Atm128AlarmSyncC*/Atm128AlarmSyncC__1__precision;
typedef /*AlarmCounterMicroP.Atm128AlarmSyncC*/Atm128AlarmSyncC__1__precision /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__precision;
typedef /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__precision /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Alarm__precision_tag;
typedef uint32_t /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Alarm__size_type;
typedef /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__precision /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Counter__precision_tag;
typedef uint32_t /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Counter__size_type;
typedef uint8_t /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Compare__size_type;
typedef uint8_t /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Timer__timer_size;
typedef TMicro /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__precision_tag;
typedef /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__precision_tag /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Alarm__precision_tag;
typedef uint32_t /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Alarm__size_type;
typedef /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__precision_tag /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Timer__precision_tag;
typedef TMicro /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__precision_tag;
typedef /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__precision_tag /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__TimerFrom__precision_tag;
typedef /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__precision_tag /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__Timer__precision_tag;
typedef TMicro /*HilTimerMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag;
typedef /*HilTimerMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*HilTimerMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__LocalTime__precision_tag;
typedef /*HilTimerMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__precision_tag /*HilTimerMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__precision_tag;
typedef uint32_t /*HilTimerMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__size_type;
# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t MotePlatformP__SubInit__default__init(void );
#line 62
static error_t MotePlatformP__PlatformInit__init(void );
# 44 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.G0*/HplAtm128GeneralIOSlowPinP__8__IO__makeInput(void );
#line 43
static bool /*HplAtm128GeneralIOC.G0*/HplAtm128GeneralIOSlowPinP__8__IO__get(void );


static void /*HplAtm128GeneralIOC.G0*/HplAtm128GeneralIOSlowPinP__8__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.G0*/HplAtm128GeneralIOSlowPinP__8__IO__set(void );
static void /*HplAtm128GeneralIOC.G0*/HplAtm128GeneralIOSlowPinP__8__IO__clr(void );
# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/Init.nc"
static error_t MeasureClockC__Init__init(void );
# 60 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/Atm128Calibrate.nc"
static uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/homes/mhartmann/baq/tinyos/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b9993179108);
# 75 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/homes/mhartmann/baq/tinyos/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b9993179108);
# 57 "/homes/mhartmann/baq/tinyos/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 76 "/homes/mhartmann/baq/tinyos/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 52 "/homes/mhartmann/baq/tinyos/tos/interfaces/McuPowerState.nc"
static void McuSleepC__McuPowerState__update(void );
# 83 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
static void OWTestC__Timer0__fired(void );
# 60 "/homes/mhartmann/baq/tinyos/tos/interfaces/Boot.nc"
static void OWTestC__Boot__booted(void );
# 15 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/uart/bigAVR6UART0.nc"
static void OWTestC__bigAVR6UART0__receiveDone(uint8_t *buf, uint16_t len, error_t error);

static void OWTestC__bigAVR6UART0__sendDone(uint8_t *buf, uint16_t len, error_t error);
# 5 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/OneWire/OneWire.nc"
static void OWTestC__OneWire__initDone(error_t msg);
# 83 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
static void OWTestC__Timer1__fired(void );
#line 83
static void OneWireP__Timer0__fired(void );
# 3 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/OneWire/OneWire.nc"
static void OneWireP__OneWire__init(void );
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
uint8_t arg_0x2b9993515da0);
# 64 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 48 "/homes/mhartmann/baq/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b9993515da0, 
# 64 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
uint32_t dt);
# 82 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 66 "/homes/mhartmann/baq/tinyos/tos/lib/timer/BusyWait.nc"
static void BusyWaitMicroC__BusyWait__wait(BusyWaitMicroC__BusyWait__size_type dt);
# 5 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/uart/bigAVR6UART0.nc"
static void bigAVR6UART0P__bigAVR6UART0__send(uint8_t *str, uint16_t len);
# 79 "/homes/mhartmann/baq/tinyos/tos/interfaces/UartStream.nc"
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
# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/Init.nc"
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__Init__init(void );
# 48 "/homes/mhartmann/baq/tinyos/tos/interfaces/UartStream.nc"
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 49 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
static void /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 47
static void /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__txDone(void );
# 95 "/homes/mhartmann/baq/tinyos/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__StdControl__start(void );









static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__StdControl__stop(void );
# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart0Init__init(void );
# 49 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart0__default__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart0__default__txDone(void );
# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart1Init__init(void );
# 42 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
static error_t HplAtm128UartP__HplUart1__enableRxIntr(void );
#line 40
static error_t HplAtm128UartP__HplUart1__enableTxIntr(void );
static error_t HplAtm128UartP__HplUart1__disableTxIntr(void );

static error_t HplAtm128UartP__HplUart1__disableRxIntr(void );


static void HplAtm128UartP__HplUart1__tx(uint8_t data);
# 95 "/homes/mhartmann/baq/tinyos/tos/interfaces/StdControl.nc"
static error_t HplAtm128UartP__Uart1TxControl__start(void );









static error_t HplAtm128UartP__Uart1TxControl__stop(void );
#line 95
static error_t HplAtm128UartP__Uart1RxControl__start(void );









static error_t HplAtm128UartP__Uart1RxControl__stop(void );
# 109 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Alarm__size_type /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Alarm__getNow(void );
#line 103
static void /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Alarm__startAt(/*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Alarm__size_type t0, /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Alarm__size_type dt);
#line 116
static /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Alarm__size_type /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Alarm__getAlarm(void );
#line 73
static void /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Alarm__stop(void );
# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Init__init(void );
# 64 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Counter.nc"
static /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Counter__size_type /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Counter__get(void );
# 58 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Compare.nc"
static void /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Compare__fired(void );
# 70 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer.nc"
static void /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Timer__overflow(void );
# 75 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__fired__runTask(void );
# 78 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Alarm.nc"
static void /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Alarm__fired(void );
# 136 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Timer__getNow(void );
#line 129
static void /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Timer__stop(void );
# 75 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__updateFromTimer__runTask(void );
# 83 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
static void /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__TimerFrom__fired(void );
#line 83
static void /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__Timer__default__fired(
# 48 "/homes/mhartmann/baq/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b9993515da0);
# 82 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Counter.nc"
static void /*HilTimerMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
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
# 55 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOSlowPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.G0*/HplAtm128GeneralIOSlowPinP__8__IO__get(void );
static __inline void /*HplAtm128GeneralIOC.G0*/HplAtm128GeneralIOSlowPinP__8__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.G0*/HplAtm128GeneralIOSlowPinP__8__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.G0*/HplAtm128GeneralIOSlowPinP__8__IO__makeInput(void );

static __inline void /*HplAtm128GeneralIOC.G0*/HplAtm128GeneralIOSlowPinP__8__IO__makeOutput(void );
# 33 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/MeasureClockC.nc"
enum MeasureClockC____nesc_unnamed4308 {


  MeasureClockC__MAGIC = 488 / (16 / PLATFORM_MHZ)
};



uint16_t MeasureClockC__cycles;

static inline error_t MeasureClockC__Init__init(void );
#line 124
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
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
uint8_t arg_0x2b9993179108);
# 76 "/homes/mhartmann/baq/tinyos/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/homes/mhartmann/baq/tinyos/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4309 {

  SchedulerBasicP__NUM_TASKS = 4U, 
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




static inline void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
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
#line 121
static inline void McuSleepC__McuPowerState__update(void );
# 64 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
static void OWTestC__Timer0__startPeriodic(uint32_t dt);
# 5 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/uart/bigAVR6UART0.nc"
static void OWTestC__bigAVR6UART0__send(uint8_t *str, uint16_t len);
# 3 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/OneWire/OneWire.nc"
static void OWTestC__OneWire__init(void );
# 13 "OWTestC.nc"
char *OWTestC__str = "<NOT INIT>";

static inline void OWTestC__Boot__booted(void );






static inline void OWTestC__Timer0__fired(void );





static inline void OWTestC__Timer1__fired(void );





static void OWTestC__OneWire__initDone(error_t msg);
#line 70
static inline void OWTestC__bigAVR6UART0__receiveDone(uint8_t *buf, uint16_t len, error_t error);



static inline void OWTestC__bigAVR6UART0__sendDone(uint8_t *buf, uint16_t len, error_t error);
# 66 "/homes/mhartmann/baq/tinyos/tos/lib/timer/BusyWait.nc"
static void OneWireP__BusyWait__wait(OneWireP__BusyWait__size_type dt);
# 5 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/OneWire/OneWire.nc"
static void OneWireP__OneWire__initDone(error_t msg);
# 44 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
static void OneWireP__Bus__makeInput(void );
#line 43
static bool OneWireP__Bus__get(void );


static void OneWireP__Bus__makeOutput(void );
#line 40
static void OneWireP__Bus__set(void );
static void OneWireP__Bus__clr(void );
# 13 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/OneWire/OneWireP.nc"
static inline void OneWireP__OneWire__init(void );
#line 36
static inline void OneWireP__Timer0__fired(void );
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



enum /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0____nesc_unnamed4310 {
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
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4311 {
#line 74
  AlarmToTimerC__0__fired = 0U
};
#line 74
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 55
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






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
uint8_t arg_0x2b9993515da0);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4312 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 1U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4313 {

  VirtualizeTimerC__0__NUM_TIMERS = 2, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4314 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];






static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 102
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 141
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);
#line 206
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 58 "/homes/mhartmann/baq/tinyos/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 40 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC__BusyWait__wait(uint16_t dt);
# 15 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/uart/bigAVR6UART0.nc"
static void bigAVR6UART0P__bigAVR6UART0__receiveDone(uint8_t *buf, uint16_t len, error_t error);

static void bigAVR6UART0P__bigAVR6UART0__sendDone(uint8_t *buf, uint16_t len, error_t error);
# 48 "/homes/mhartmann/baq/tinyos/tos/interfaces/UartStream.nc"
static error_t bigAVR6UART0P__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 95 "/homes/mhartmann/baq/tinyos/tos/interfaces/StdControl.nc"
static error_t bigAVR6UART0P__StdControl__start(void );









static error_t bigAVR6UART0P__StdControl__stop(void );
# 18 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/uart/bigAVR6UART0P.nc"
static inline void bigAVR6UART0P__bigAVR6UART0__send(uint8_t *str, uint16_t len);
#line 42
static inline void bigAVR6UART0P__UartStream__sendDone(uint8_t *buf, uint16_t len, error_t error);





static inline void bigAVR6UART0P__UartStream__receivedByte(uint8_t byte);




static inline void bigAVR6UART0P__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error);
# 95 "/homes/mhartmann/baq/tinyos/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUartTxControl__start(void );









static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void );
# 79 "/homes/mhartmann/baq/tinyos/tos/interfaces/UartStream.nc"
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
# 42 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void );
#line 40
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void );
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void );

static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void );


static void /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data);
# 95 "/homes/mhartmann/baq/tinyos/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUartRxControl__start(void );









static error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void );
# 64 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/Atm128UartP.nc"
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







static inline error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__StdControl__start(void );
#line 95
static inline error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__StdControl__stop(void );
#line 135
static inline void /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 157
static inline error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len);
#line 175
static inline void /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__txDone(void );
# 49 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart0__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart0__txDone(void );

static void HplAtm128UartP__HplUart1__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__txDone(void );
# 60 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/Atm128Calibrate.nc"
static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 52 "/homes/mhartmann/baq/tinyos/tos/interfaces/McuPowerState.nc"
static void HplAtm128UartP__McuPowerState__update(void );
# 96 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/HplAtm128UartP.nc"
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
# 53 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__TimerCtrl__getInterruptFlag(void );
#line 46
static void /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__TimerCtrl__setControl(Atm128TimerControl_t control);
# 78 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Alarm__fired(void );
# 82 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Counter__overflow(void );
# 51 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128TimerSync.nc"
static int /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__TimerSync__compareBusy(void );
#line 39
static void /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__TimerSync__setTimer0Synchronous(void );
# 48 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Compare.nc"
static /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Compare__size_type /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Compare__get(void );





static void /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Compare__set(/*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Compare__size_type t);










static void /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Compare__start(void );
# 61 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer.nc"
static /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Timer__timer_size /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Timer__get(void );
# 45 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/Atm128AlarmSyncP.nc"
uint8_t /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__set;
uint32_t /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__t0;
#line 46
uint32_t /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__dt;
uint32_t /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__base;



enum /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1____nesc_unnamed4315 {
  Atm128AlarmSyncP__1__MINDT = 2, 
  Atm128AlarmSyncP__1__MAXT = 230
};



static void /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__setInterrupt(void );


static inline error_t /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Init__init(void );
#line 81
static inline void /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__setOcr0(uint8_t n);
#line 97
static void /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__setInterrupt(void );
#line 156
static inline void /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Compare__fired(void );
#line 168
static uint32_t /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Counter__get(void );
#line 211
static inline void /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Alarm__stop(void );







static void /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Alarm__startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Alarm__getNow(void );



static inline uint32_t /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Alarm__getAlarm(void );



static inline void /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Timer__overflow(void );
# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__fired__postTask(void );
# 109 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Alarm.nc"
static /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Alarm__size_type /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Alarm__getNow(void );
#line 103
static void /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Alarm__startAt(/*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Alarm__size_type t0, /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Alarm__size_type dt);
#line 116
static /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Alarm__size_type /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Alarm__stop(void );
# 83 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
static void /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Timer__fired(void );
# 74 "/homes/mhartmann/baq/tinyos/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1____nesc_unnamed4316 {
#line 74
  AlarmToTimerC__1__fired = 2U
};
#line 74
typedef int /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1____nesc_sillytask_fired[/*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__fired];
#line 55
uint32_t /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__m_dt;
bool /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__m_oneshot;

static inline void /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Timer__stop(void );


static void /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__fired__runTask(void );






static inline void /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Alarm__fired(void );
#line 93
static inline void /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Timer__getNow(void );
# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__updateFromTimer__postTask(void );
# 136 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__TimerFrom__getNow(void );
#line 129
static void /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__TimerFrom__stop(void );




static void /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__Timer__fired(
# 48 "/homes/mhartmann/baq/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b9993515da0);
#line 71
enum /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1____nesc_unnamed4317 {
#line 71
  VirtualizeTimerC__1__updateFromTimer = 3U
};
#line 71
typedef int /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1____nesc_sillytask_updateFromTimer[/*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__updateFromTimer];
#line 53
enum /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1____nesc_unnamed4318 {

  VirtualizeTimerC__1__NUM_TIMERS = 1, 
  VirtualizeTimerC__1__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1____nesc_unnamed4319 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__Timer_t;

/*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__Timer_t /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__m_timers[/*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__NUM_TIMERS];






static void /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__fireTimers(uint32_t now);
#line 102
static void /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__updateFromTimer__runTask(void );
#line 141
static inline void /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__TimerFrom__fired(void );
#line 206
static inline void /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__Timer__default__fired(uint8_t num);
# 58 "/homes/mhartmann/baq/tinyos/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void );
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

# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/Init.nc"
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
# 69 "/homes/mhartmann/baq/tinyos/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

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
# 118 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer0SyncP.nc"
static inline Atm128_TIFR_t HplAtm128Timer0SyncP__TimerCtrl__getInterruptFlag(void )
#line 118
{
  return * (Atm128_TIFR_t *)& * (volatile uint8_t *)(0x36 + 0x20);
}

# 53 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__TimerCtrl__getInterruptFlag(void ){
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
# 211 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/Atm128AlarmSyncP.nc"
static inline void /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Alarm__stop(void )
#line 211
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 212
    /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__set = FALSE;
#line 212
    __nesc_atomic_end(__nesc_atomic); }
}

# 73 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Alarm__stop(void ){
#line 73
  /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Alarm__stop();
#line 73
}
#line 73
# 71 "/homes/mhartmann/baq/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Timer__stop(void )
{
#line 72
  /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Alarm__stop();
}

# 78 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__TimerFrom__stop(void ){
#line 78
  /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Timer__stop();
#line 78
}
#line 78
# 28 "OWTestC.nc"
static inline void OWTestC__Timer1__fired(void )
#line 28
{
}

# 206 "/homes/mhartmann/baq/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__Timer__default__fired(uint8_t num)
{
}

# 83 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__Timer__fired(uint8_t arg_0x2b9993515da0){
#line 83
  switch (arg_0x2b9993515da0) {
#line 83
    case 0U:
#line 83
      OWTestC__Timer1__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__Timer__default__fired(arg_0x2b9993515da0);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__updateFromTimer__postTask(void ){
#line 67
  unsigned char result;
#line 67

#line 67
  result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__updateFromTimer);
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

# 103 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Alarm__startAt(/*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Alarm__size_type t0, /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Alarm__size_type dt){
#line 103
  /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 58 "/homes/mhartmann/baq/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__m_dt = dt;
  /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__m_oneshot = oneshot;
  /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Alarm__startAt(t0, dt);
}

#line 93
static inline void /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__start(t0, dt, TRUE);
}

# 129 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 159 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer0SyncP.nc"
static inline void HplAtm128Timer0SyncP__Compare__set(uint8_t t)
#line 159
{
  * (volatile uint8_t *)(0x31 + 0x20) = t;
}

# 54 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Compare.nc"
inline static void /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Compare__set(/*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Compare__size_type t){
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
inline static /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Timer__timer_size /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Timer__get(void ){
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
inline static int /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__TimerSync__compareBusy(void ){
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
static inline void /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__setOcr0(uint8_t n)
#line 81
{
  while (/*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__TimerSync__compareBusy()) 
    ;
  if (n == /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Timer__get()) {
    n++;
    }


  if (/*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__base + n + 1 < /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__base) {
    n = -/*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__base - 1;
    }
#line 91
  /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Compare__set(n);
}

# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__fired__postTask(void ){
#line 67
  unsigned char result;
#line 67

#line 67
  result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__fired);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 81 "/homes/mhartmann/baq/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Alarm__fired(void )
{
#line 82
  /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__fired__postTask();
}

# 78 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Alarm__fired(void ){
#line 78
  /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Alarm__fired();
#line 78
}
#line 78
# 233 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/Atm128AlarmSyncP.nc"
static inline uint32_t /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Alarm__getAlarm(void )
#line 233
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 234
    {
      unsigned long __nesc_temp = 
#line 234
      /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__t0 + /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__dt;

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
inline static /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Alarm__size_type /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Alarm__getAlarm(void ){
#line 116
  unsigned long result;
#line 116

#line 116
  result = /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Alarm__getAlarm();
#line 116

#line 116
  return result;
#line 116
}
#line 116
# 229 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/Atm128AlarmSyncP.nc"
static inline uint32_t /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Alarm__getNow(void )
#line 229
{
  return /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Counter__get();
}

# 109 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Alarm__size_type /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Alarm__getNow(void ){
#line 109
  unsigned long result;
#line 109

#line 109
  result = /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Alarm__getNow();
#line 109

#line 109
  return result;
#line 109
}
#line 109
# 96 "/homes/mhartmann/baq/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Timer__getNow(void )
{
#line 97
  return /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Alarm__getNow();
}

# 136 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__TimerFrom__getNow(void ){
#line 136
  unsigned long result;
#line 136

#line 136
  result = /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Timer__getNow();
#line 136

#line 136
  return result;
#line 136
}
#line 136
# 141 "/homes/mhartmann/baq/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__TimerFrom__fired(void )
{
  /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__fireTimers(/*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__TimerFrom__getNow());
}

# 83 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Timer__fired(void ){
#line 83
  /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__TimerFrom__fired();
#line 83
}
#line 83
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
# 36 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/OneWire/OneWireP.nc"
static inline void OneWireP__Timer0__fired(void )
#line 36
{
}

# 5 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/OneWire/OneWire.nc"
inline static void OneWireP__OneWire__initDone(error_t msg){
#line 5
  OWTestC__OneWire__initDone(msg);
#line 5
}
#line 5
# 55 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOSlowPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.G0*/HplAtm128GeneralIOSlowPinP__8__IO__get(void )
#line 55
{
#line 55
  return (* (volatile uint8_t * )99U & (1 << 0)) != 0;
}

# 43 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static bool OneWireP__Bus__get(void ){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*HplAtm128GeneralIOC.G0*/HplAtm128GeneralIOSlowPinP__8__IO__get();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 40 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/BusyWaitMicroC.nc"
static __inline void BusyWaitMicroC__BusyWait__wait(uint16_t dt)
#line 40
{

  if (dt) {


     __asm volatile (
    "1:	sbiw	%0,1\n"
    "	adiw	%0,1\n"
    "	sbiw	%0,1\n"
    "	brne	1b" : "+w"(dt));
    }
}

# 66 "/homes/mhartmann/baq/tinyos/tos/lib/timer/BusyWait.nc"
inline static void OneWireP__BusyWait__wait(OneWireP__BusyWait__size_type dt){
#line 66
  BusyWaitMicroC__BusyWait__wait(dt);
#line 66
}
#line 66
# 60 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOSlowPinP.nc"
static __inline void /*HplAtm128GeneralIOC.G0*/HplAtm128GeneralIOSlowPinP__8__IO__makeInput(void )
#line 60
{
#line 60
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 60
    * (volatile uint8_t * )100U &= ~(1 << 0);
#line 60
    __nesc_atomic_end(__nesc_atomic); }
}

# 44 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void OneWireP__Bus__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.G0*/HplAtm128GeneralIOSlowPinP__8__IO__makeInput();
#line 44
}
#line 44
# 57 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOSlowPinP.nc"
static __inline void /*HplAtm128GeneralIOC.G0*/HplAtm128GeneralIOSlowPinP__8__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )101U &= ~(1 << 0);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 41 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void OneWireP__Bus__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.G0*/HplAtm128GeneralIOSlowPinP__8__IO__clr();
#line 41
}
#line 41
# 56 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOSlowPinP.nc"
static __inline void /*HplAtm128GeneralIOC.G0*/HplAtm128GeneralIOSlowPinP__8__IO__set(void )
#line 56
{
#line 56
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 56
    * (volatile uint8_t * )101U |= 1 << 0;
#line 56
    __nesc_atomic_end(__nesc_atomic); }
}

# 40 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void OneWireP__Bus__set(void ){
#line 40
  /*HplAtm128GeneralIOC.G0*/HplAtm128GeneralIOSlowPinP__8__IO__set();
#line 40
}
#line 40
# 62 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOSlowPinP.nc"
static __inline void /*HplAtm128GeneralIOC.G0*/HplAtm128GeneralIOSlowPinP__8__IO__makeOutput(void )
#line 62
{
#line 62
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 62
    * (volatile uint8_t * )100U |= 1 << 0;
#line 62
    __nesc_atomic_end(__nesc_atomic); }
}

# 46 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void OneWireP__Bus__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.G0*/HplAtm128GeneralIOSlowPinP__8__IO__makeOutput();
#line 46
}
#line 46
# 13 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/OneWire/OneWireP.nc"
static inline void OneWireP__OneWire__init(void )
#line 13
{

  OneWireP__Bus__makeOutput();
  OneWireP__Bus__set();
  OneWireP__Bus__clr();
  OneWireP__BusyWait__wait(500);
  OneWireP__Bus__makeInput();
  OneWireP__BusyWait__wait(20);

  if (OneWireP__Bus__get() == FALSE) {

      OneWireP__OneWire__initDone(FAIL);
    }
  else {

      OneWireP__OneWire__initDone(SUCCESS);
    }
}

# 3 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/OneWire/OneWire.nc"
inline static void OWTestC__OneWire__init(void ){
#line 3
  OneWireP__OneWire__init();
#line 3
}
#line 3
# 22 "OWTestC.nc"
static inline void OWTestC__Timer0__fired(void )
#line 22
{

  OWTestC__OneWire__init();
}

# 206 "/homes/mhartmann/baq/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x2b9993515da0){
#line 83
  switch (arg_0x2b9993515da0) {
#line 83
    case 0U:
#line 83
      OneWireP__Timer0__fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      OWTestC__Timer0__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x2b9993515da0);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 46 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
inline static void /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data){
#line 46
  HplAtm128UartP__HplUart1__tx(data);
#line 46
}
#line 46
# 234 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart1__enableTxIntr(void )
#line 234
{
  * (volatile uint8_t *)0x9B |= 1 << 6;
  * (volatile uint8_t *)0x9A |= 1 << 6;
  return SUCCESS;
}

# 40 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
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
# 157 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len)
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

# 48 "/homes/mhartmann/baq/tinyos/tos/interfaces/UartStream.nc"
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
# 245 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart1__enableRxIntr(void )
#line 245
{
  * (volatile uint8_t *)0x9A |= 1 << 7;
  return SUCCESS;
}

# 42 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
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
# 121 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC__McuPowerState__update(void )
#line 121
{
}

# 52 "/homes/mhartmann/baq/tinyos/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128UartP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 222 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart1RxControl__start(void )
#line 222
{
  * (volatile uint8_t *)0x9A |= 1 << 4;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 95 "/homes/mhartmann/baq/tinyos/tos/interfaces/StdControl.nc"
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
# 210 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart1TxControl__start(void )
#line 210
{
  * (volatile uint8_t *)0x9A |= 1 << 3;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 95 "/homes/mhartmann/baq/tinyos/tos/interfaces/StdControl.nc"
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
# 250 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart1__disableRxIntr(void )
#line 250
{
  * (volatile uint8_t *)0x9A &= ~(1 << 7);
  return SUCCESS;
}

# 43 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
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
# 240 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart1__disableTxIntr(void )
#line 240
{
  * (volatile uint8_t *)0x9A &= ~(1 << 6);
  return SUCCESS;
}

# 41 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
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
# 79 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__StdControl__start(void )
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

# 95 "/homes/mhartmann/baq/tinyos/tos/interfaces/StdControl.nc"
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
# 18 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/uart/bigAVR6UART0P.nc"
static inline void bigAVR6UART0P__bigAVR6UART0__send(uint8_t *str, uint16_t len)
{
  bigAVR6UART0P__StdControl__start();
  bigAVR6UART0P__UartStream__send(str, len);
}

# 5 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/uart/bigAVR6UART0.nc"
inline static void OWTestC__bigAVR6UART0__send(uint8_t *str, uint16_t len){
#line 5
  bigAVR6UART0P__bigAVR6UART0__send(str, len);
#line 5
}
#line 5
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
# 54 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__size_type t){
#line 54
  HplAtm128Timer0SyncP__Compare__set(t);
#line 54
}
#line 54
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

# 71 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/Atm128UartP.nc"
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

# 124 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/MeasureClockC.nc"
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate)
#line 124
{


  return 8;
}

# 60 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/Atm128Calibrate.nc"
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
# 190 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/HplAtm128UartP.nc"
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

# 65 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Compare.nc"
inline static void /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Compare__start(void ){
#line 65
  HplAtm128Timer0SyncP__Compare__start();
#line 65
}
#line 65
# 46 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__TimerCtrl__setControl(Atm128TimerControl_t control){
#line 46
  HplAtm128Timer0SyncP__TimerCtrl__setControl(control);
#line 46
}
#line 46
# 39 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128TimerSync.nc"
inline static void /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__TimerSync__setTimer0Synchronous(void ){
#line 39
  HplAtm128Timer0SyncP__TimerSync__setTimer0Synchronous();
#line 39
}
#line 39
# 61 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/Atm128AlarmSyncP.nc"
static inline error_t /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Init__init(void )
#line 61
{
  /* atomic removed: atomic calls only */
  {
    Atm128TimerControl_t x;

    /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__TimerSync__setTimer0Synchronous();
    x.flat = 0;
    x.bits.cs = 3;
    x.bits.wgm1 = 1;
    /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__TimerCtrl__setControl(x);
    /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Compare__set(/*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__MAXT);
    /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Compare__start();
  }
  /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__setInterrupt();
  return SUCCESS;
}

# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char result;
#line 62

#line 62
  result = /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Init__init();
#line 62
  result = ecombine(result, HplAtm128UartP__Uart0Init__init());
#line 62
  result = ecombine(result, HplAtm128UartP__Uart1Init__init());
#line 62
  result = ecombine(result, /*Atm128Uart1C.UartP*/Atm128UartP__0__Init__init());
#line 62
  result = ecombine(result, /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Init__init());
#line 62

#line 62
  return result;
#line 62
}
#line 62
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
# 146 "/homes/mhartmann/baq/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
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

# 64 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
inline static void OWTestC__Timer0__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(1U, dt);
#line 64
}
#line 64
# 15 "OWTestC.nc"
static inline void OWTestC__Boot__booted(void )
#line 15
{

  OWTestC__Timer0__startPeriodic(2000);
}

# 60 "/homes/mhartmann/baq/tinyos/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  OWTestC__Boot__booted();
#line 60
}
#line 60
# 175 "/homes/mhartmann/baq/tinyos/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
inline static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x2b9993179108){
#line 75
  switch (arg_0x2b9993179108) {
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
    case /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__fired:
#line 75
      /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__fired__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__updateFromTimer:
#line 75
      /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__updateFromTimer__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x2b9993179108);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
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

# 58 "/homes/mhartmann/baq/tinyos/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow(void )
{
}

# 82 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Counter__overflow(void ){
#line 82
  /*HilTimerMicroC.CounterToLocalTimeC*/CounterToLocalTimeC__1__Counter__overflow();
#line 82
}
#line 82
# 48 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Compare.nc"
inline static /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Compare__size_type /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Compare__get(void ){
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
static inline void /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Compare__fired(void )
#line 156
{
  int overflowed;


  /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__base += /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Compare__get() + 1U;
  overflowed = !/*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__base;
  __nesc_enable_interrupt();
  /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__setInterrupt();
  if (overflowed) {
    /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Counter__overflow();
    }
}

# 58 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Compare.nc"
inline static void HplAtm128Timer0SyncP__Compare__fired(void ){
#line 58
  /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Compare__fired();
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

#line 237
static inline void /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Timer__overflow(void )
#line 237
{
}

# 70 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/HplAtm128Timer.nc"
inline static void HplAtm128Timer0SyncP__Timer__overflow(void ){
#line 70
  /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Timer__overflow();
#line 70
  /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Timer__overflow();
#line 70
}
#line 70
# 284 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart0__default__rxDone(uint8_t data)
#line 284
{
}

# 49 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__rxDone(uint8_t data){
#line 49
  HplAtm128UartP__HplUart0__default__rxDone(data);
#line 49
}
#line 49
# 283 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart0__default__txDone(void )
#line 283
{
}

# 47 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__txDone(void ){
#line 47
  HplAtm128UartP__HplUart0__default__txDone();
#line 47
}
#line 47
# 48 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/uart/bigAVR6UART0P.nc"
static inline void bigAVR6UART0P__UartStream__receivedByte(uint8_t byte)
{
}

# 79 "/homes/mhartmann/baq/tinyos/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte){
#line 79
  bigAVR6UART0P__UartStream__receivedByte(byte);
#line 79
}
#line 79
# 70 "OWTestC.nc"
static inline void OWTestC__bigAVR6UART0__receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 70
{
}

# 15 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/uart/bigAVR6UART0.nc"
inline static void bigAVR6UART0P__bigAVR6UART0__receiveDone(uint8_t *buf, uint16_t len, error_t error){
#line 15
  OWTestC__bigAVR6UART0__receiveDone(buf, len, error);
#line 15
}
#line 15
# 53 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/uart/bigAVR6UART0P.nc"
static inline void bigAVR6UART0P__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error)
{
  bigAVR6UART0P__bigAVR6UART0__receiveDone(buf, len, error);
}

# 99 "/homes/mhartmann/baq/tinyos/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__receiveDone(uint8_t * buf, uint16_t len, error_t error){
#line 99
  bigAVR6UART0P__UartStream__receiveDone(buf, len, error);
#line 99
}
#line 99
# 135 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/Atm128UartP.nc"
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

# 49 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__rxDone(uint8_t data){
#line 49
  /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__rxDone(data);
#line 49
}
#line 49
# 74 "OWTestC.nc"
static inline void OWTestC__bigAVR6UART0__sendDone(uint8_t *buf, uint16_t len, error_t error)
#line 74
{
}

# 17 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/uart/bigAVR6UART0.nc"
inline static void bigAVR6UART0P__bigAVR6UART0__sendDone(uint8_t *buf, uint16_t len, error_t error){
#line 17
  OWTestC__bigAVR6UART0__sendDone(buf, len, error);
#line 17
}
#line 17
# 228 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart1RxControl__stop(void )
#line 228
{
  * (volatile uint8_t *)0x9A &= ~(1 << 4);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 105 "/homes/mhartmann/baq/tinyos/tos/interfaces/StdControl.nc"
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
# 216 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart1TxControl__stop(void )
#line 216
{
  * (volatile uint8_t *)0x9A &= ~(1 << 3);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 105 "/homes/mhartmann/baq/tinyos/tos/interfaces/StdControl.nc"
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
# 95 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart1C.UartP*/Atm128UartP__0__StdControl__stop(void )
#line 95
{
  /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUartTxControl__stop();
  /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUartRxControl__stop();
  return SUCCESS;
}

# 105 "/homes/mhartmann/baq/tinyos/tos/interfaces/StdControl.nc"
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
# 42 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/uart/bigAVR6UART0P.nc"
static inline void bigAVR6UART0P__UartStream__sendDone(uint8_t *buf, uint16_t len, error_t error)
{
  bigAVR6UART0P__StdControl__stop();
  bigAVR6UART0P__bigAVR6UART0__sendDone(buf, len, error);
}

# 57 "/homes/mhartmann/baq/tinyos/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart1C.UartP*/Atm128UartP__0__UartStream__sendDone(uint8_t * buf, uint16_t len, error_t error){
#line 57
  bigAVR6UART0P__UartStream__sendDone(buf, len, error);
#line 57
}
#line 57
# 175 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/Atm128UartP.nc"
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

# 47 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__txDone(void ){
#line 47
  /*Atm128Uart1C.UartP*/Atm128UartP__0__HplUart__txDone();
#line 47
}
#line 47
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

# 102 "/homes/mhartmann/baq/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint8_t num;

  /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__NUM_TIMERS; num++) 
    {
      /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__Timer_t *timer = &/*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__m_timers[num];

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
        /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__fireTimers(now);
        }
      else {
#line 137
        /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 168 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/Atm128AlarmSyncP.nc"
static uint32_t /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Counter__get(void )
#line 168
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Timer__get();

      if (/*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__TimerCtrl__getInterruptFlag().bits.ocf0) {


        now = /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__base + /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Compare__get() + 1 + /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Timer__get();
        }
      else {

        now = /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__base + now8;
        }
    }
#line 186
    __nesc_atomic_end(__nesc_atomic); }
#line 186
  return now;
}

# 75 "/homes/mhartmann/baq/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__fireTimers(uint32_t now)
{
  uint8_t num;

  for (num = 0; num < /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__NUM_TIMERS; num++) 
    {
      /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__Timer_t *timer = &/*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__m_timers[num];

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
              /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMicroC.VirtualizeTimerC*/VirtualizeTimerC__1__updateFromTimer__postTask();
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

# 219 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/Atm128AlarmSyncP.nc"
static void /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Alarm__startAt(uint32_t nt0, uint32_t ndt)
#line 219
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__set = TRUE;
      /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__t0 = nt0;
      /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__dt = ndt;
    }
#line 225
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__setInterrupt();
}

#line 97
static void /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__setInterrupt(void )
#line 97
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Compare__get() - /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Timer__get();
      uint8_t newOcr0;
      uint8_t tifr = (uint8_t )/*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__TimerCtrl__getInterruptFlag().flat;

#line 108
      ;
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__MINDT) || tifr & (1 << 1)) {
          if (interrupt_in < /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__MINDT) {
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

      if (!/*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__set) {
          newOcr0 = /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__MAXT;
          ;
        }
      else 
        {
          uint32_t now = /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Counter__get();

#line 127
          ;

          if ((uint32_t )(now - /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__t0) >= /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__dt) 
            {
              /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__set = FALSE;
              fired = TRUE;
              newOcr0 = /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__t0 + /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__dt - /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__base;

              if (alarm_in > /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__MAXT) {
                newOcr0 = /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__MAXT;
                }
              else {
#line 143
                if ((uint8_t )alarm_in < /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__MINDT) {
                  newOcr0 = /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__MINDT;
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
      /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__setOcr0(newOcr0);
    }
#line 151
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMicroP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__1__Alarm__fired();
    }
}

# 74 "/homes/mhartmann/baq/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static void /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__fired__runTask(void )
{
  if (/*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__m_oneshot == FALSE) {
    /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__start(/*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Alarm__getAlarm(), /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__m_dt, FALSE);
    }
#line 78
  /*HilTimerMicroC.AlarmToTimerC*/AlarmToTimerC__1__Timer__fired();
}

# 102 "/homes/mhartmann/baq/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
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

# 34 "OWTestC.nc"
static void OWTestC__OneWire__initDone(error_t msg)
#line 34
{

  if (msg == FAIL) {

      OWTestC__str = "FAIL";
    }
  else {

      OWTestC__str = "YESSSS";
    }


  OWTestC__bigAVR6UART0__send(OWTestC__str, strlen(OWTestC__str) + 1);
}

# 267 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/HplAtm128UartP.nc"
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

# 74 "/homes/mhartmann/baq/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
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

# 180 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/HplAtm128UartP.nc"
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

