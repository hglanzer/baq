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
# 112 "/opt/tinyos-2.x/sys/lib/gcc/avr/4.1.2/../../../../avr/include/string.h" 3
extern void *memcpy(void *arg_0x2b7b4a3a8940, const void *arg_0x2b7b4a3a8c18, size_t arg_0x2b7b4a3a7020);



extern void *memset(void *arg_0x2b7b4a3ab7f0, int arg_0x2b7b4a3aba58, size_t arg_0x2b7b4a3abd00);
#line 131
extern char *strncpy(char *arg_0x2b7b4a3ba7c0, const char *arg_0x2b7b4a3baa98, size_t arg_0x2b7b4a3bad40);
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


typedef int (*__compar_fn_t)(const void *arg_0x2b7b4a3cc968, const void *arg_0x2b7b4a3ccc40);
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
#line 121
typedef T32khz TOne;
typedef TMicro TThree;
typedef uint16_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;

enum __nesc_unnamed4293 {

  MICA_PRESCALER_ONE = ATM128_CLK16_DIVIDE_256, 
  MICA_DIVIDE_ONE_FOR_32KHZ_LOG2 = 1, 
  MICA_PRESCALER_THREE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_THREE_FOR_MICRO_LOG2 = 1, 
  EXT_STANDBY_T0_THRESHOLD = 8
};





enum __nesc_unnamed4294 {
  PLATFORM_MHZ = 16
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
# 6 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/Platform.h"
enum __nesc_unnamed4299 {

  INITIALIZE = 1, 
  READY = 2, 
  READ = 3, 
  EJECTED = 4, 
  UNINIT = 5, 
  BUSY = 6
};
# 4 "songs.h"
struct song {
  char track[2];
  uint32_t startBlockAddress;
  uint32_t *nextAddress;
  uint32_t *prevAddress;
  char artist[20];
  char title[20];
};
# 1 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.h"
enum __nesc_unnamed4300 {

  UNCALIBRATED = 0, 
  CALIBRATION_IN_PROGRESS_LEFT_BOTTOM = 1, 
  CALIBRATION_IN_PROGRESS_RIGHT_TOP = 2, 
  CALIBRATION_DONE = 3
};

enum __nesc_unnamed4301 {

  BUSY_STRING = 1, 
  BUSY_CIRCLE = 2, 
  BUSY_RECT = 4, 
  BUSY_LINE = 8, 
  BUSY_CLEAR = 16, 
  BUSY_BAR = 32
};
# 1 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreen.h"
enum __nesc_unnamed4302 {
  INIT = 0, 
  DUMMY_FIRST_X = 1, 
  FIRST_X = 2, 
  DUMMY_FIRST_Y = 3, 
  FIRST_Y = 4, 
  FINISHED = 5
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
# 41 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128Spi.h"
enum __nesc_unnamed4303 {
  ATM128_SPI_CLK_DIVIDE_4 = 0, 
  ATM128_SPI_CLK_DIVIDE_16 = 1, 
  ATM128_SPI_CLK_DIVIDE_64 = 2, 
  ATM128_SPI_CLK_DIVIDE_128 = 3
};
#line 58
#line 49
typedef struct __nesc_unnamed4304 {
  uint8_t spie : 1;
  uint8_t spe : 1;
  uint8_t dord : 1;
  uint8_t mstr : 1;
  uint8_t cpol : 1;
  uint8_t cpha : 1;
  uint8_t spr : 2;
} 
Atm128SPIControl_s;



#line 59
typedef union __nesc_unnamed4305 {
  uint8_t flat;
  Atm128SPIControl_s bits;
} Atm128SPIControl_t;

typedef Atm128SPIControl_t Atm128_SPCR_t;








#line 67
typedef struct __nesc_unnamed4306 {
  uint8_t spif : 1;
  uint8_t wcol : 1;
  uint8_t rsvd : 5;
  uint8_t spi2x : 1;
} 
Atm128SPIStatus_s;



#line 74
typedef union __nesc_unnamed4307 {
  uint8_t flat;
  Atm128SPIStatus_s bits;
} Atm128SPIStatus_t;

typedef Atm128SPIStatus_t Atm128_SPSR_t;

typedef uint8_t Atm128_SPDR_t;
typedef TMilli MP3P__Timer0__precision_tag;
enum /*MP3C.SPI0*/SoftSPIMasterC__0____nesc_unnamed4308 {
  SoftSPIMasterC__0__RESOURCE_ID = 0U
};
enum HilTimerMilliC____nesc_unnamed4309 {
  HilTimerMilliC__TIMER_COUNT = 3U
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
typedef TMilli MP3TestC__Timer0__precision_tag;
typedef TMilli MP3TestC__Timer1__precision_tag;
typedef uint16_t TouchScreenP__Read__val_t;
typedef uint16_t AdcP__Read__val_t;
typedef uint16_t AdcP__ReadNow__val_t;
typedef uint16_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__val_t;
enum /*TouchScreenC.AdcReadClientC*/AdcReadClientC__0____nesc_unnamed4310 {
  AdcReadClientC__0__ID = 0U, AdcReadClientC__0__HAL_ID = 0U
};
# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t MotePlatformP__PlatformInit__init(void );
# 46 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void );
#line 46
static void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void );
#line 46
static void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void );
#line 44
static void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void );
#line 44
static void /*HplAtm128GeneralIOC.PortB.Bit5*/HplAtm128GeneralIOPinP__13__IO__makeInput(void );
#line 44
static void /*HplAtm128GeneralIOC.PortB.Bit6*/HplAtm128GeneralIOPinP__14__IO__makeInput(void );
#line 44
static void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeInput(void );

static void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP__25__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP__25__IO__set(void );
static void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP__25__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__set(void );
static void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP__27__IO__makeOutput(void );
#line 44
static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void );

static void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__makeOutput(void );
#line 44
static void /*HplAtm128GeneralIOC.PortF.Bit0*/HplAtm128GeneralIOPinP__40__IO__makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortF.Bit0*/HplAtm128GeneralIOPinP__40__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortF.Bit1*/HplAtm128GeneralIOPinP__41__IO__makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortF.Bit1*/HplAtm128GeneralIOPinP__41__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortF.Bit2*/HplAtm128GeneralIOPinP__42__IO__makeInput(void );
#line 43
static bool /*HplAtm128GeneralIOC.PortF.Bit2*/HplAtm128GeneralIOPinP__42__IO__get(void );


static void /*HplAtm128GeneralIOC.PortF.Bit3*/HplAtm128GeneralIOPinP__43__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortF.Bit3*/HplAtm128GeneralIOPinP__43__IO__set(void );
static void /*HplAtm128GeneralIOC.PortF.Bit3*/HplAtm128GeneralIOPinP__43__IO__clr(void );




static void /*HplAtm128GeneralIOC.G1*/HplAtm128GeneralIOSlowPinP__9__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.G1*/HplAtm128GeneralIOSlowPinP__9__IO__set(void );
static void /*HplAtm128GeneralIOC.G1*/HplAtm128GeneralIOSlowPinP__9__IO__clr(void );


static void /*HplAtm128GeneralIOC.G2*/HplAtm128GeneralIOSlowPinP__10__IO__makeInput(void );
#line 43
static bool /*HplAtm128GeneralIOC.G2*/HplAtm128GeneralIOSlowPinP__10__IO__get(void );


static void /*HplAtm128GeneralIOC.G3*/HplAtm128GeneralIOSlowPinP__11__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.G3*/HplAtm128GeneralIOSlowPinP__11__IO__set(void );
static void /*HplAtm128GeneralIOC.G3*/HplAtm128GeneralIOSlowPinP__11__IO__clr(void );




static void /*HplAtm128GeneralIOC.G4*/HplAtm128GeneralIOSlowPinP__12__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.G4*/HplAtm128GeneralIOSlowPinP__12__IO__set(void );
static void /*HplAtm128GeneralIOC.G4*/HplAtm128GeneralIOSlowPinP__12__IO__clr(void );
# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/Init.nc"
static error_t MeasureClockC__Init__init(void );
# 53 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/Atm128Calibrate.nc"
static uint8_t MeasureClockC__Atm128Calibrate__adcPrescaler(void );
# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/homes/mhartmann/baq/tinyos/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b7b4a4d4108);
# 75 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/homes/mhartmann/baq/tinyos/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2b7b4a4d4108);
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
static void MP3P__Timer0__fired(void );
# 102 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static void MP3P__SPI0__granted(void );
# 3 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/MP3/MP3.nc"
static error_t MP3P__MP3__writeRegister(uint8_t mp3Register, uint16_t mp3Cmd);
#line 2
static error_t MP3P__MP3__init(void );


static error_t MP3P__MP3__writeData(uint8_t *data, uint8_t len);


static error_t MP3P__MP3__setVolume(uint8_t volume);
static bool MP3P__MP3__isReady(void );
#line 4
static uint16_t MP3P__MP3__readRegister(uint8_t mp3Register);
# 12 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/SoftSPI/SoftSPI.nc"
static error_t SoftSPIImplP__SoftSPIMaster__receiveByte(
# 7 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/SoftSPI/SoftSPIImplP.nc"
uint8_t arg_0x2b7b4a729e80, 
# 12 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/SoftSPI/SoftSPI.nc"
uint8_t *data);
#line 9
static error_t SoftSPIImplP__SoftSPIMaster__sendByte(
# 7 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/SoftSPI/SoftSPIImplP.nc"
uint8_t arg_0x2b7b4a729e80, 
# 9 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/SoftSPI/SoftSPI.nc"
uint8_t msg);
# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/Init.nc"
static error_t /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init(void );
# 53 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceQueue.nc"
static bool /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );
#line 70
static resource_client_id_t /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 61 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(
# 55 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2b7b4a75e7e8);
# 65 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(
# 60 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2b7b4a75c9b8);
# 59 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(
# 60 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2b7b4a75c9b8);
# 56 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 46
static void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void );
#line 81
static void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested(void );
# 120 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static error_t /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__Resource__release(
# 54 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2b7b4a75f658);
# 97 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static error_t /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__Resource__immediateRequest(
# 54 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2b7b4a75f658);
# 102 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__Resource__default__granted(
# 54 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2b7b4a75f658);
# 98 "/homes/mhartmann/baq/tinyos/tos/interfaces/ArbiterInfo.nc"
static uint8_t /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void );
# 75 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
# 12 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/SoftSPI/SoftSPI.nc"
static error_t SoftSPIP__SoftSPI__receiveByte(uint8_t *data);
#line 9
static error_t SoftSPIP__SoftSPI__sendByte(uint8_t msg);
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
#line 136
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(
# 48 "/homes/mhartmann/baq/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b7b4a946778);
# 83 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "/homes/mhartmann/baq/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b7b4a946778);
# 73 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "/homes/mhartmann/baq/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b7b4a946778, 
# 73 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 48 "/homes/mhartmann/baq/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2b7b4a946778);
# 82 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 83 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
static void MP3TestC__Timer0__fired(void );
# 60 "/homes/mhartmann/baq/tinyos/tos/interfaces/Boot.nc"
static void MP3TestC__Boot__booted(void );
# 75 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static void MP3TestC__readMMCData__runTask(void );
# 83 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
static void MP3TestC__Timer1__fired(void );
# 7 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/mmc/MMC.nc"
static void MP3TestC__MMC__initDone(void );



static void MP3TestC__MMC__error(uint8_t *errStr);
#line 9
static void MP3TestC__MMC__blockReady(uint8_t *data);
# 26 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
static void MP3TestC__GLCD__tsPressed(void );
#line 70
static void MP3TestC__GLCD__initDone(void );
#line 24
static void MP3TestC__GLCD__calibrated(void );
#line 80
static void MP3TestC__GLCD__barWritten(void );

static void MP3TestC__GLCD__screenCleared(void );
#line 78
static void MP3TestC__GLCD__lineWritten(void );
#line 21
static void MP3TestC__GLCD__xyReady(uint16_t x, uint16_t y);
#line 72
static void MP3TestC__GLCD__circleWritten(void );



static void MP3TestC__GLCD__rectangleWritten(void );
#line 74
static void MP3TestC__GLCD__stringWritten(void );
# 75 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static void MP3TestC__writeMP3Data__runTask(void );
# 47 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
static void GLCDP__LCD128x64__initDone(void );









static void GLCDP__LCD128x64__barWritten(void );

static void GLCDP__LCD128x64__screenCleared(void );
#line 55
static void GLCDP__LCD128x64__lineWritten(void );
#line 49
static void GLCDP__LCD128x64__circleWritten(void );



static void GLCDP__LCD128x64__rectangleWritten(void );
#line 51
static void GLCDP__LCD128x64__stringWritten(void );
# 14 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
static void GLCDP__GLCD__isPressed(bool on);
#line 12
static void GLCDP__GLCD__getXY(void );
#line 60
static error_t GLCDP__GLCD__startWriteRectangle(uint8_t x, uint8_t y, uint8_t a, uint8_t b);



static error_t GLCDP__GLCD__startWriteString(char *data, uint8_t x, uint8_t y);
#line 36
static void GLCDP__GLCD__initLCD(uint8_t pattern);
# 13 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreen.nc"
static void GLCDP__TouchScreen__tsPressed(void );
#line 11
static void GLCDP__TouchScreen__xyReady(uint16_t x, uint16_t y);
# 63 "/homes/mhartmann/baq/tinyos/tos/interfaces/Read.nc"
static void TouchScreenP__Read__readDone(error_t result, TouchScreenP__Read__val_t val);
# 32 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t TouchScreenP__Atm128AdcConfig__getRefVoltage(void );
#line 25
static uint8_t TouchScreenP__Atm128AdcConfig__getChannel(void );
#line 39
static uint8_t TouchScreenP__Atm128AdcConfig__getPrescaler(void );
# 75 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static void TouchScreenP__checkTS__runTask(void );
# 6 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreen.nc"
static void TouchScreenP__TouchScreen__isPressed(bool on);
#line 4
static void TouchScreenP__TouchScreen__getXY(void );
# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/Init.nc"
static error_t Atm128AdcP__Init__init(void );
# 119 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
static bool Atm128AdcP__Atm128AdcMultiple__default__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 70 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static bool Atm128AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
# 156 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/HplAtm128Adc.nc"
static void Atm128AdcP__HplAtm128Adc__dataReady(uint16_t data);
# 95 "/homes/mhartmann/baq/tinyos/tos/interfaces/AsyncStdControl.nc"
static error_t Atm128AdcP__AsyncStdControl__start(void );









static error_t Atm128AdcP__AsyncStdControl__stop(void );
# 53 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/HplAtm128Adc.nc"
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
# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/Init.nc"
static error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void );
# 79 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
# 53 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(
# 55 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2b7b4a75e7e8);
# 65 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(
# 60 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2b7b4a75c9b8);
# 59 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(
# 60 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2b7b4a75c9b8);
# 56 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void );
# 120 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__release(
# 54 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2b7b4a75f658);
# 88 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__request(
# 54 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2b7b4a75f658);
# 102 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__default__granted(
# 54 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2b7b4a75f658);
# 75 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask__runTask(void );
# 62 "/homes/mhartmann/baq/tinyos/tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 73 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void );
# 55 "/homes/mhartmann/baq/tinyos/tos/interfaces/Read.nc"
static error_t AdcP__Read__read(
# 48 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2b7b4ac0fac0);
# 66 "/homes/mhartmann/baq/tinyos/tos/interfaces/ReadNow.nc"
static void AdcP__ReadNow__default__readDone(
# 49 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2b7b4ac0d6d8, 
# 66 "/homes/mhartmann/baq/tinyos/tos/interfaces/ReadNow.nc"
error_t result, AdcP__ReadNow__val_t val);
# 32 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__default__getRefVoltage(
# 53 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2b7b4ac34cd0);
# 25 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__default__getChannel(
# 53 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2b7b4ac34cd0);
# 39 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__default__getPrescaler(
# 53 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2b7b4ac34cd0);
# 81 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static void AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise);
# 75 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static void AdcP__acquiredData__runTask(void );
# 55 "/homes/mhartmann/baq/tinyos/tos/interfaces/Read.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(
# 24 "/homes/mhartmann/baq/tinyos/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2b7b4ac396b8);
# 63 "/homes/mhartmann/baq/tinyos/tos/interfaces/Read.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(
# 24 "/homes/mhartmann/baq/tinyos/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2b7b4ac396b8, 
# 63 "/homes/mhartmann/baq/tinyos/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t val);
#line 63
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(
# 26 "/homes/mhartmann/baq/tinyos/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2b7b4ac36390, 
# 63 "/homes/mhartmann/baq/tinyos/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__val_t val);
# 120 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(
# 27 "/homes/mhartmann/baq/tinyos/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2b7b4ac35e30);
# 88 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__request(
# 27 "/homes/mhartmann/baq/tinyos/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2b7b4ac35e30);
# 102 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(
# 27 "/homes/mhartmann/baq/tinyos/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2b7b4ac35e30);
# 75 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static void LCD128x64P__writeRectangle__runTask(void );
# 45 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
static void LCD128x64P__LCD128x64__startClearScreen(uint8_t pattern);
#line 37
static void LCD128x64P__LCD128x64__startWriteRectangle(uint8_t x, uint8_t y, uint8_t a, uint8_t b);



static void LCD128x64P__LCD128x64__startWriteString(char *data, uint8_t x, uint8_t y);
#line 29
static void LCD128x64P__LCD128x64__setPixel(uint8_t x, uint8_t y);
#line 13
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
# 5 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/mmc/MMC.nc"
static uint8_t MMCP__MMC__readBlock(uint32_t addr);
#line 3
static uint8_t MMCP__MMC__init(void );
# 102 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static void MMCP__Resource__granted(void );
# 75 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static void Atm128SpiP__zeroTask__runTask(void );
# 82 "/homes/mhartmann/baq/tinyos/tos/interfaces/SpiPacket.nc"
static void Atm128SpiP__SpiPacket__default__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 102 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static void Atm128SpiP__ResourceArbiter__granted(
# 99 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2b7b4adb1060);
# 45 "/homes/mhartmann/baq/tinyos/tos/interfaces/SpiByte.nc"
static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx);
# 109 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP__Spi__dataReady(uint8_t data);
# 120 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__Resource__release(
# 95 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2b7b4ad9fae0);
# 88 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__Resource__request(
# 95 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2b7b4ad9fae0);
# 102 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static void Atm128SpiP__Resource__default__granted(
# 95 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2b7b4ad9fae0);
# 89 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128Spi.nc"
static void HplAtm128SpiP__SPI__sleep(void );
#line 83
static void HplAtm128SpiP__SPI__initMaster(void );
#line 122
static void HplAtm128SpiP__SPI__setMasterBit(bool isMaster);
#line 113
static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled);
#line 97
static uint8_t HplAtm128SpiP__SPI__read(void );
#line 142
static void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on);
#line 131
static void HplAtm128SpiP__SPI__setClock(uint8_t speed);
#line 125
static void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle);
#line 103
static void HplAtm128SpiP__SPI__write(uint8_t data);
#line 116
static void HplAtm128SpiP__SPI__enableSpi(bool busOn);
#line 128
static void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing);
# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/Init.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init(void );
# 79 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );








static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
# 53 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(
# 52 "/homes/mhartmann/baq/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b7b4ae8a2f0);
# 65 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(
# 56 "/homes/mhartmann/baq/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b7b4ae89868);
# 59 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(
# 56 "/homes/mhartmann/baq/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b7b4ae89868);
# 120 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(
# 51 "/homes/mhartmann/baq/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b7b4ae8b158);
# 88 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(
# 51 "/homes/mhartmann/baq/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b7b4ae8b158);
# 90 "/homes/mhartmann/baq/tinyos/tos/interfaces/ArbiterInfo.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse(void );
# 75 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );
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
# 61 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void );
#line 61
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void );
#line 61
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void );
#line 59
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void );
#line 59
static __inline void /*HplAtm128GeneralIOC.PortB.Bit5*/HplAtm128GeneralIOPinP__13__IO__makeInput(void );
#line 59
static __inline void /*HplAtm128GeneralIOC.PortB.Bit6*/HplAtm128GeneralIOPinP__14__IO__makeInput(void );
#line 59
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeInput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP__25__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP__25__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP__25__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__makeOutput(void );
#line 61
static __inline void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP__27__IO__makeOutput(void );
#line 59
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void );

static __inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__makeOutput(void );
#line 56
static __inline void /*HplAtm128GeneralIOC.PortF.Bit0*/HplAtm128GeneralIOPinP__40__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortF.Bit0*/HplAtm128GeneralIOPinP__40__IO__makeInput(void );
#line 56
static __inline void /*HplAtm128GeneralIOC.PortF.Bit1*/HplAtm128GeneralIOPinP__41__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortF.Bit1*/HplAtm128GeneralIOPinP__41__IO__makeInput(void );
#line 54
static __inline bool /*HplAtm128GeneralIOC.PortF.Bit2*/HplAtm128GeneralIOPinP__42__IO__get(void );




static __inline void /*HplAtm128GeneralIOC.PortF.Bit2*/HplAtm128GeneralIOPinP__42__IO__makeInput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortF.Bit3*/HplAtm128GeneralIOPinP__43__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortF.Bit3*/HplAtm128GeneralIOPinP__43__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortF.Bit3*/HplAtm128GeneralIOPinP__43__IO__makeOutput(void );
# 56 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOSlowPinP.nc"
static __inline void /*HplAtm128GeneralIOC.G1*/HplAtm128GeneralIOSlowPinP__9__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.G1*/HplAtm128GeneralIOSlowPinP__9__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.G1*/HplAtm128GeneralIOSlowPinP__9__IO__makeOutput(void );
#line 55
static __inline bool /*HplAtm128GeneralIOC.G2*/HplAtm128GeneralIOSlowPinP__10__IO__get(void );




static __inline void /*HplAtm128GeneralIOC.G2*/HplAtm128GeneralIOSlowPinP__10__IO__makeInput(void );
#line 56
static __inline void /*HplAtm128GeneralIOC.G3*/HplAtm128GeneralIOSlowPinP__11__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.G3*/HplAtm128GeneralIOSlowPinP__11__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.G3*/HplAtm128GeneralIOSlowPinP__11__IO__makeOutput(void );
#line 56
static __inline void /*HplAtm128GeneralIOC.G4*/HplAtm128GeneralIOSlowPinP__12__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.G4*/HplAtm128GeneralIOSlowPinP__12__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.G4*/HplAtm128GeneralIOSlowPinP__12__IO__makeOutput(void );
# 33 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/MeasureClockC.nc"
enum MeasureClockC____nesc_unnamed4311 {


  MeasureClockC__MAGIC = 488 / (16 / PLATFORM_MHZ)
};



uint16_t MeasureClockC__cycles;

static inline error_t MeasureClockC__Init__init(void );
#line 107
static inline uint8_t MeasureClockC__Atm128Calibrate__adcPrescaler(void );
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
uint8_t arg_0x2b7b4a4d4108);
# 76 "/homes/mhartmann/baq/tinyos/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/homes/mhartmann/baq/tinyos/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4312 {

  SchedulerBasicP__NUM_TASKS = 17U, 
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
#line 121
static inline void McuSleepC__McuPowerState__update(void );
# 136 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
static uint32_t MP3P__Timer0__getNow(void );
#line 73
static void MP3P__Timer0__startOneShot(uint32_t dt);




static void MP3P__Timer0__stop(void );
# 44 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
static void MP3P__DREQ__makeInput(void );
#line 43
static bool MP3P__DREQ__get(void );


static void MP3P__RST__makeOutput(void );
#line 40
static void MP3P__RST__set(void );
static void MP3P__RST__clr(void );
# 120 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static error_t MP3P__SPI0__release(void );
#line 97
static error_t MP3P__SPI0__immediateRequest(void );
# 46 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
static void MP3P__CS__makeOutput(void );
#line 40
static void MP3P__CS__set(void );
static void MP3P__CS__clr(void );
# 12 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/SoftSPI/SoftSPI.nc"
static error_t MP3P__SoftSPI0__receiveByte(uint8_t *data);
#line 9
static error_t MP3P__SoftSPI0__sendByte(uint8_t msg);
# 46 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
static void MP3P__BSYNC__makeOutput(void );
#line 40
static void MP3P__BSYNC__set(void );
static void MP3P__BSYNC__clr(void );
# 22 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/MP3/MP3P.nc"
enum MP3P__mp3Reg {
#line 22
  MP3P__MODE, MP3P__STATUS, MP3P__BASS, MP3P__CLOCKF, MP3P__DECODE_TIME, MP3P__AUDATA, MP3P__WRAM, MP3P__WRAMADDR, MP3P__HDAT0, MP3P__HDAT1, MP3P__AIADDR, MP3P__VOLUME, MP3P__AICTRL0, MP3P__AICTRL1, MP3P__AICTRL2, MP3P__AICTRL3
};



enum MP3P__mp3Mode {
#line 27
  MP3P__SM_DIFF, MP3P__SM_LAYER12, MP3P__SM_RESET, MP3P__SM_OUTOFWAV, MP3P__SM_SETTOZERO1, MP3P__SM_TESTS, MP3P__SM_STREAM, MP3P__SM_SETTOZERO2, MP3P__SM_DACT, MP3P__SM_SDIORD, MP3P__SM_SDISHARE, MP3P__SM_SDINEW, MP3P__SM, MP3P__SETTOZERO3, MP3P__SM_SETTOZERO4
};



enum MP3P____nesc_unnamed4313 {
#line 32
  MP3P__MP3_WRITE = 2, MP3P__MP3_READ
};
static inline error_t MP3P__MP3__init(void );
#line 77
static inline bool MP3P__MP3__isReady(void );



static error_t MP3P__MP3__setVolume(uint8_t volume);






static inline uint16_t MP3P__MP3__readRegister(uint8_t mp3Register);
#line 109
static error_t MP3P__MP3__writeRegister(uint8_t mp3Register, uint16_t mp3Cmd);
#line 124
static inline error_t MP3P__MP3__writeData(uint8_t *data, uint8_t len);
#line 201
static inline void MP3P__Timer0__fired(void );


static inline void MP3P__SPI0__granted(void );
# 12 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/SoftSPI/SoftSPI.nc"
static error_t SoftSPIImplP__SoftSPI__receiveByte(uint8_t *data);
#line 9
static error_t SoftSPIImplP__SoftSPI__sendByte(uint8_t msg);
# 98 "/homes/mhartmann/baq/tinyos/tos/interfaces/ArbiterInfo.nc"
static uint8_t SoftSPIImplP__ArbiterInfo__userId(void );
# 12 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/SoftSPI/SoftSPIImplP.nc"
uint8_t SoftSPIImplP__current_id;

static __inline error_t SoftSPIImplP__SoftSPIMaster__sendByte(uint8_t id, uint8_t msg);








static __inline error_t SoftSPIImplP__SoftSPIMaster__receiveByte(uint8_t id, uint8_t *data);
# 49 "/homes/mhartmann/baq/tinyos/tos/system/FcfsResourceQueueC.nc"
enum /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0____nesc_unnamed4314 {
#line 49
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[1U];
uint8_t /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__qHead = /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__qTail = /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init(void );




static inline bool /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );







static inline resource_client_id_t /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 61 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(
# 55 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2b7b4a75e7e8);
# 65 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(
# 60 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2b7b4a75c9b8);
# 59 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(
# 60 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2b7b4a75c9b8);
# 53 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceQueue.nc"
static bool /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void );
# 46 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
static void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void );
#line 81
static void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested(void );
# 102 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__Resource__granted(
# 54 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2b7b4a75f658);
# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void );
# 75 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
enum /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4315 {
#line 75
  ArbiterP__0__grantedTask = 0U
};
#line 75
typedef int /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0____nesc_sillytask_grantedTask[/*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__grantedTask];
#line 67
enum /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4316 {
#line 67
  ArbiterP__0__RES_CONTROLLED, ArbiterP__0__RES_GRANTING, ArbiterP__0__RES_IMM_GRANTING, ArbiterP__0__RES_BUSY
};
#line 68
enum /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4317 {
#line 68
  ArbiterP__0__default_owner_id = 1U
};
#line 69
enum /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0____nesc_unnamed4318 {
#line 69
  ArbiterP__0__NO_RES = 0xFF
};
uint8_t /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__state = /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
uint8_t /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__resId = /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__default_owner_id;
uint8_t /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__reqResId;
#line 93
static error_t /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__Resource__immediateRequest(uint8_t id);
#line 111
static error_t /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id);
#line 133
static inline error_t /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 166
static uint8_t /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void );
#line 190
static inline void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
#line 202
static inline void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id);



static inline void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id);

static inline void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void );




static inline void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested(void );


static inline void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 44 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
static void SoftSPIP__spiMISO__makeInput(void );

static void SoftSPIP__spiMOSI__makeOutput(void );
#line 46
static void SoftSPIP__spiSCK__makeOutput(void );
# 15 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/SoftSPI/SoftSPIP.nc"
static __inline error_t SoftSPIP__SoftSPI__sendByte(uint8_t msg);
#line 105
static __inline error_t SoftSPIP__SoftSPI__receiveByte(uint8_t *data);
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



enum /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0____nesc_unnamed4319 {
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
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4320 {
#line 74
  AlarmToTimerC__0__fired = 1U
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
uint8_t arg_0x2b7b4a946778);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4321 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 2U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4322 {

  VirtualizeTimerC__0__NUM_TIMERS = 3, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4323 {

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
#line 161
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);
#line 191
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num);
#line 206
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 58 "/homes/mhartmann/baq/tinyos/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 44 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
static void MP3TestC__Button2__makeInput(void );
# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static error_t MP3TestC__readMMCData__postTask(void );
# 44 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
static void MP3TestC__Button0__makeInput(void );
# 73 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
static void MP3TestC__Timer1__startOneShot(uint32_t dt);
# 2 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/MP3/MP3.nc"
static error_t MP3TestC__MP3__init(void );


static error_t MP3TestC__MP3__writeData(uint8_t *data, uint8_t len);


static error_t MP3TestC__MP3__setVolume(uint8_t volume);
static bool MP3TestC__MP3__isReady(void );
#line 4
static uint16_t MP3TestC__MP3__readRegister(uint8_t mp3Register);
# 5 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/mmc/MMC.nc"
static uint8_t MP3TestC__MMC__readBlock(uint32_t addr);
#line 3
static uint8_t MP3TestC__MMC__init(void );
# 14 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
static void MP3TestC__GLCD__isPressed(bool on);
#line 12
static void MP3TestC__GLCD__getXY(void );
#line 60
static error_t MP3TestC__GLCD__startWriteRectangle(uint8_t x, uint8_t y, uint8_t a, uint8_t b);



static error_t MP3TestC__GLCD__startWriteString(char *data, uint8_t x, uint8_t y);
#line 36
static void MP3TestC__GLCD__initLCD(uint8_t pattern);
# 44 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
static void MP3TestC__Button1__makeInput(void );
# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static error_t MP3TestC__writeMP3Data__postTask(void );
# 119 "MP3TestC.nc"
enum MP3TestC____nesc_unnamed4324 {
#line 119
  MP3TestC__readMMCData = 3U
};
#line 119
typedef int MP3TestC____nesc_sillytask_readMMCData[MP3TestC__readMMCData];





enum MP3TestC____nesc_unnamed4325 {
#line 125
  MP3TestC__writeMP3Data = 4U
};
#line 125
typedef int MP3TestC____nesc_sillytask_writeMP3Data[MP3TestC__writeMP3Data];
#line 16
enum MP3TestC____nesc_unnamed4326 {
#line 16
  MP3TestC__BLOCK_SIZE = 32
};
enum MP3TestC____nesc_unnamed4327 {
#line 18
  MP3TestC__RVS_X = 0, MP3TestC__RVS_Y = 31, MP3TestC__RVS_A = 32, MP3TestC__RVS_B = 24
};
#line 19
enum MP3TestC____nesc_unnamed4328 {
#line 19
  MP3TestC__PLAY_X = 48, MP3TestC__PLAY_Y = 31, MP3TestC__PLAY_A = 32, MP3TestC__PLAY_B = 24
};
#line 20
enum MP3TestC____nesc_unnamed4329 {
#line 20
  MP3TestC__FWD_X = 95, MP3TestC__FWD_Y = 31, MP3TestC__FWD_A = 32, MP3TestC__FWD_B = 24
};
#line 21
enum MP3TestC____nesc_unnamed4330 {
#line 21
  MP3TestC__PRESS_PAUSE_TIME = 950
};
enum MP3TestC____nesc_unnamed4331 {
#line 23
  MP3TestC__START_1 = 0x6, MP3TestC__START_2 = 0x23F67, MP3TestC__START_3 = 0x30B71, MP3TestC__END_ADDRESS = 0x3F97A
};








uint32_t MP3TestC__blockAddr = 0;
uint32_t MP3TestC__nextAddress;
char MP3TestC__playTime[6] = { '0', '0', ':', '0', '0', '\0' };
uint8_t *MP3TestC__dataBuffer;
bool MP3TestC__play = FALSE;
bool MP3TestC__dataReady = FALSE;
bool MP3TestC__refresh = FALSE;
bool MP3TestC__keypressed = FALSE;

char MP3TestC__title[21] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '\0' };
char MP3TestC__artist[21] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '\0' };
char MP3TestC__trackStr[21] = { 'T', 'r', 'a', 'c', 'k', ':', '0', '1', '/', '0', '3', ' ', '-', ' ', '0', '0', ':', '0', '0', ' ', '\0' };

uint8_t MP3TestC__track = 1;
enum MP3TestC____nesc_unnamed4332 {
#line 47
  MP3TestC__CALIBRATION, MP3TestC__LINE0, MP3TestC__LINE1, MP3TestC__LINE2, MP3TestC__LINE3, MP3TestC__LINE4, MP3TestC__LINE5, MP3TestC__LINE6, MP3TestC__LINE7, MP3TestC__LINE8, MP3TestC__LINE9, MP3TestC__LINE10, MP3TestC__LINE11, MP3TestC__NONE
};
enum MP3TestC____nesc_unnamed4333 {
#line 49
  MP3TestC__VOLUME = 250
};
uint8_t MP3TestC__paintState = MP3TestC__CALIBRATION;




static void MP3TestC__paintLCD(void );
static void MP3TestC__forward(void );
static inline void MP3TestC__reverse(void );





static inline void MP3TestC__Boot__booted(void );
#line 119
static inline void MP3TestC__readMMCData__runTask(void );





static inline void MP3TestC__writeMP3Data__runTask(void );








static inline void MP3TestC__Timer0__fired(void );
#line 172
static inline void MP3TestC__Timer1__fired(void );



static inline void MP3TestC__MMC__initDone(void );


static inline void MP3TestC__MMC__blockReady(uint8_t *data);









static inline void MP3TestC__MMC__error(uint8_t *errStr);




static inline void MP3TestC__GLCD__initDone(void );




static inline void MP3TestC__GLCD__barWritten(void );


static inline void MP3TestC__GLCD__screenCleared(void );



static inline void MP3TestC__GLCD__lineWritten(void );


static inline void MP3TestC__GLCD__circleWritten(void );


static inline void MP3TestC__GLCD__rectangleWritten(void );


static inline void MP3TestC__GLCD__stringWritten(void );




static inline void MP3TestC__GLCD__tsPressed(void );


static inline void MP3TestC__GLCD__calibrated(void );




static void MP3TestC__GLCD__xyReady(uint16_t x, uint16_t y);
#line 273
static void MP3TestC__forward(void );
#line 323
static inline void MP3TestC__reverse(void );
#line 373
static void MP3TestC__paintLCD(void );
# 45 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
static void GLCDP__LCD128x64__startClearScreen(uint8_t pattern);
#line 37
static void GLCDP__LCD128x64__startWriteRectangle(uint8_t x, uint8_t y, uint8_t a, uint8_t b);



static void GLCDP__LCD128x64__startWriteString(char *data, uint8_t x, uint8_t y);
#line 13
static void GLCDP__LCD128x64__initLCD(uint8_t pattern);
# 26 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
static void GLCDP__GLCD__tsPressed(void );
#line 70
static void GLCDP__GLCD__initDone(void );
#line 24
static void GLCDP__GLCD__calibrated(void );
#line 80
static void GLCDP__GLCD__barWritten(void );

static void GLCDP__GLCD__screenCleared(void );
#line 78
static void GLCDP__GLCD__lineWritten(void );
#line 21
static void GLCDP__GLCD__xyReady(uint16_t x, uint16_t y);
#line 72
static void GLCDP__GLCD__circleWritten(void );



static void GLCDP__GLCD__rectangleWritten(void );
#line 74
static void GLCDP__GLCD__stringWritten(void );
# 6 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreen.nc"
static void GLCDP__TouchScreen__isPressed(bool on);
#line 4
static void GLCDP__TouchScreen__getXY(void );
# 13 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCDP.nc"
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
#line 28
static inline void GLCDP__calcXY(uint16_t x_raw, uint16_t y_raw);
#line 66
static inline void GLCDP__GLCD__isPressed(bool on);
#line 92
static inline void GLCDP__GLCD__getXY(void );









static inline void GLCDP__TouchScreen__xyReady(uint16_t x, uint16_t y);
#line 151
static inline void GLCDP__TouchScreen__tsPressed(void );
#line 164
static inline void GLCDP__GLCD__initLCD(uint8_t pattern);
#line 202
static error_t GLCDP__GLCD__startWriteRectangle(uint8_t x, uint8_t y, uint8_t a, uint8_t b);
#line 240
static error_t GLCDP__GLCD__startWriteString(char *data, uint8_t x, uint8_t y);
#line 297
static inline void GLCDP__LCD128x64__initDone(void );




static inline void GLCDP__LCD128x64__circleWritten(void );





static inline void GLCDP__LCD128x64__rectangleWritten(void );





static inline void GLCDP__LCD128x64__lineWritten(void );





static inline void GLCDP__LCD128x64__barWritten(void );










static inline void GLCDP__LCD128x64__stringWritten(void );
#line 347
static inline void GLCDP__LCD128x64__screenCleared(void );
# 55 "/homes/mhartmann/baq/tinyos/tos/interfaces/Read.nc"
static error_t TouchScreenP__Read__read(void );
# 46 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
static void TouchScreenP__driveA__makeOutput(void );
#line 40
static void TouchScreenP__driveA__set(void );
static void TouchScreenP__driveA__clr(void );
# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static error_t TouchScreenP__checkTS__postTask(void );
# 44 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
static void TouchScreenP__adcX__makeInput(void );
#line 41
static void TouchScreenP__adcX__clr(void );




static void TouchScreenP__driveB__makeOutput(void );
#line 40
static void TouchScreenP__driveB__set(void );
static void TouchScreenP__driveB__clr(void );
# 13 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreen.nc"
static void TouchScreenP__TouchScreen__tsPressed(void );
#line 11
static void TouchScreenP__TouchScreen__xyReady(uint16_t x, uint16_t y);
# 44 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
static void TouchScreenP__adcY__makeInput(void );
#line 41
static void TouchScreenP__adcY__clr(void );
# 40 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreenP.nc"
enum TouchScreenP____nesc_unnamed4334 {
#line 40
  TouchScreenP__checkTS = 5U
};
#line 40
typedef int TouchScreenP____nesc_sillytask_checkTS[TouchScreenP__checkTS];
#line 31
volatile uint8_t TouchScreenP__channel;
static volatile uint8_t TouchScreenP__state;
#line 32
static volatile uint8_t TouchScreenP__pressDetect = FALSE;
static volatile uint16_t TouchScreenP__x;
#line 33
static volatile uint16_t TouchScreenP__y;

enum TouchScreenP____nesc_unnamed4335 {
#line 35
  TouchScreenP__READ_DUMMY, TouchScreenP__READ_X0, TouchScreenP__READ_X1, TouchScreenP__READ_X2, TouchScreenP__READ_X3, TouchScreenP__READ_Y0, TouchScreenP__READ_Y1, TouchScreenP__READ_Y2, TouchScreenP__READ_Y3
};
uint16_t TouchScreenP__results[4];
static uint16_t TouchScreenP__meanOfFour(void );

static inline void TouchScreenP__checkTS__runTask(void );




static void TouchScreenP__TouchScreen__getXY(void );
#line 65
static inline void TouchScreenP__Read__readDone(error_t err, uint16_t val);
#line 150
static uint16_t TouchScreenP__meanOfFour(void );
#line 180
static inline void TouchScreenP__TouchScreen__isPressed(bool on);








static inline uint8_t TouchScreenP__Atm128AdcConfig__getRefVoltage(void );




static inline uint8_t TouchScreenP__Atm128AdcConfig__getChannel(void );







static inline uint8_t TouchScreenP__Atm128AdcConfig__getPrescaler(void );
# 119 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
static bool Atm128AdcP__Atm128AdcMultiple__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 81 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static void Atm128AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise);
# 53 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/HplAtm128Adc.nc"
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
# 53 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/Atm128Calibrate.nc"
static uint8_t Atm128AdcP__Atm128Calibrate__adcPrescaler(void );
# 102 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/Atm128AdcP.nc"
#line 98
struct Atm128AdcP____nesc_unnamed4336 {
  bool multiple : 1;
  bool precise : 1;
  uint8_t channel : 5;
} Atm128AdcP__f;
#line 102
#line 98
struct Atm128AdcP____nesc_unnamed4336 



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
# 156 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/HplAtm128Adc.nc"
static void HplAtm128AdcP__HplAtm128Adc__dataReady(uint16_t data);
# 52 "/homes/mhartmann/baq/tinyos/tos/interfaces/McuPowerState.nc"
static void HplAtm128AdcP__McuPowerState__update(void );
# 49 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/HplAtm128AdcP.nc"
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
# 49 "/homes/mhartmann/baq/tinyos/tos/system/RoundRobinResourceQueueC.nc"
enum /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0____nesc_unnamed4337 {
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
# 53 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceRequested__requested(
# 55 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2b7b4a75e7e8);
# 65 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(
# 60 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2b7b4a75c9b8);
# 59 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__configure(
# 60 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2b7b4a75c9b8);
# 79 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Queue__dequeue(void );
# 73 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__requested(void );
#line 46
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted(void );
# 102 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__granted(
# 54 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x2b7b4a75f658);
# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask__postTask(void );
# 75 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1____nesc_unnamed4338 {
#line 75
  ArbiterP__1__grantedTask = 6U
};
#line 75
typedef int /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1____nesc_sillytask_grantedTask[/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask];
#line 67
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1____nesc_unnamed4339 {
#line 67
  ArbiterP__1__RES_CONTROLLED, ArbiterP__1__RES_GRANTING, ArbiterP__1__RES_IMM_GRANTING, ArbiterP__1__RES_BUSY
};
#line 68
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1____nesc_unnamed4340 {
#line 68
  ArbiterP__1__default_owner_id = 1U
};
#line 69
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1____nesc_unnamed4341 {
#line 69
  ArbiterP__1__NO_RES = 0xFF
};
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__RES_CONTROLLED;
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__default_owner_id;
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__reqResId;



static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__request(uint8_t id);
#line 111
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__release(uint8_t id);
#line 133
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void );
#line 190
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask__runTask(void );
#line 202
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__default__granted(uint8_t id);

static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(uint8_t id);
#line 216
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(uint8_t id);
# 62 "/homes/mhartmann/baq/tinyos/tos/lib/power/PowerDownCleanup.nc"
static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup(void );
# 56 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release(void );
# 95 "/homes/mhartmann/baq/tinyos/tos/interfaces/AsyncStdControl.nc"
static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start(void );









static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop(void );
# 69 "/homes/mhartmann/baq/tinyos/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void );









static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void );




static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void );
# 63 "/homes/mhartmann/baq/tinyos/tos/interfaces/Read.nc"
static void AdcP__Read__readDone(
# 48 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2b7b4ac0fac0, 
# 63 "/homes/mhartmann/baq/tinyos/tos/interfaces/Read.nc"
error_t result, AdcP__Read__val_t val);
# 66 "/homes/mhartmann/baq/tinyos/tos/interfaces/ReadNow.nc"
static void AdcP__ReadNow__readDone(
# 49 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2b7b4ac0d6d8, 
# 66 "/homes/mhartmann/baq/tinyos/tos/interfaces/ReadNow.nc"
error_t result, AdcP__ReadNow__val_t val);
# 32 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__getRefVoltage(
# 53 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2b7b4ac34cd0);
# 25 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__getChannel(
# 53 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2b7b4ac34cd0);
# 39 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static uint8_t AdcP__Atm128AdcConfig__getPrescaler(
# 53 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x2b7b4ac34cd0);
# 70 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static bool AdcP__Atm128AdcSingle__getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static error_t AdcP__acquiredData__postTask(void );
# 103 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/AdcP.nc"
enum AdcP____nesc_unnamed4342 {
#line 103
  AdcP__acquiredData = 7U
};
#line 103
typedef int AdcP____nesc_sillytask_acquiredData[AdcP__acquiredData];
#line 57
enum AdcP____nesc_unnamed4343 {
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
# 63 "/homes/mhartmann/baq/tinyos/tos/interfaces/Read.nc"
static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__readDone(
# 24 "/homes/mhartmann/baq/tinyos/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2b7b4ac396b8, 
# 63 "/homes/mhartmann/baq/tinyos/tos/interfaces/Read.nc"
error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t val);
#line 55
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__read(
# 26 "/homes/mhartmann/baq/tinyos/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2b7b4ac36390);
# 120 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__release(
# 27 "/homes/mhartmann/baq/tinyos/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2b7b4ac35e30);
# 88 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__request(
# 27 "/homes/mhartmann/baq/tinyos/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x2b7b4ac35e30);



static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(uint8_t client);



static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(uint8_t client);



static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data);




static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__request(uint8_t client);


static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(uint8_t client);
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data);
# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static error_t LCD128x64P__writeRectangle__postTask(void );
# 47 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
static void LCD128x64P__LCD128x64__initDone(void );









static void LCD128x64P__LCD128x64__barWritten(void );

static void LCD128x64P__LCD128x64__screenCleared(void );
#line 55
static void LCD128x64P__LCD128x64__lineWritten(void );
#line 49
static void LCD128x64P__LCD128x64__circleWritten(void );



static void LCD128x64P__LCD128x64__rectangleWritten(void );
#line 51
static void LCD128x64P__LCD128x64__stringWritten(void );
# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static error_t LCD128x64P__writeString__postTask(void );
#line 67
static error_t LCD128x64P__clearScreenNB__postTask(void );
# 65 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
enum LCD128x64P____nesc_unnamed4344 {
#line 65
  LCD128x64P__wait4Controller = 8U
};
#line 65
typedef int LCD128x64P____nesc_sillytask_wait4Controller[LCD128x64P__wait4Controller];
#line 208
enum LCD128x64P____nesc_unnamed4345 {
#line 208
  LCD128x64P__writeRectangle = 9U
};
#line 208
typedef int LCD128x64P____nesc_sillytask_writeRectangle[LCD128x64P__writeRectangle];
#line 224
enum LCD128x64P____nesc_unnamed4346 {
#line 224
  LCD128x64P__writeCircle = 10U
};
#line 224
typedef int LCD128x64P____nesc_sillytask_writeCircle[LCD128x64P__writeCircle];
#line 257
enum LCD128x64P____nesc_unnamed4347 {
#line 257
  LCD128x64P__writeString = 11U
};
#line 257
typedef int LCD128x64P____nesc_sillytask_writeString[LCD128x64P__writeString];
#line 285
enum LCD128x64P____nesc_unnamed4348 {
#line 285
  LCD128x64P__clearScreenNB = 12U
};
#line 285
typedef int LCD128x64P____nesc_sillytask_clearScreenNB[LCD128x64P__clearScreenNB];
#line 316
enum LCD128x64P____nesc_unnamed4349 {
#line 316
  LCD128x64P__writeLine = 13U
};
#line 316
typedef int LCD128x64P____nesc_sillytask_writeLine[LCD128x64P__writeLine];
#line 394
enum LCD128x64P____nesc_unnamed4350 {
#line 394
  LCD128x64P__writeBar = 14U
};
#line 394
typedef int LCD128x64P____nesc_sillytask_writeBar[LCD128x64P__writeBar];
#line 33
uint8_t LCD128x64P__modPattern = 0x00;
uint8_t LCD128x64P__pageAddr;
#line 34
uint8_t LCD128x64P__xAddr = 0;
uint8_t LCD128x64P__rad;
#line 35
uint8_t LCD128x64P__aRect;
#line 35
uint8_t LCD128x64P__bRect;
#line 35
uint8_t LCD128x64P__xLineEnd;
#line 35
uint8_t LCD128x64P__yLineEnd;
#line 35
uint8_t LCD128x64P__aBar;
#line 35
uint8_t LCD128x64P__bBar;
uint8_t LCD128x64P__xPos[5];
#line 36
uint8_t LCD128x64P__yPos[5];
char *LCD128x64P__dataPtr;

static void LCD128x64P__writeGLCD(uint8_t mode, uint8_t data);
static inline uint8_t LCD128x64P__readByte(uint8_t mode);

static void LCD128x64P__busyWait4Controller(void );
#line 65
static inline void LCD128x64P__wait4Controller__runTask(void );
#line 83
static void LCD128x64P__writeGLCD(uint8_t mode, uint8_t data);
#line 111
static void LCD128x64P__setAddress(uint8_t xAdd, uint8_t yAdd);
#line 137
static inline uint8_t LCD128x64P__readByte(uint8_t mode);
#line 178
static void LCD128x64P__LCD128x64__setPixel(uint8_t x, uint8_t y);
#line 208
static inline void LCD128x64P__writeRectangle__runTask(void );
#line 224
static inline void LCD128x64P__writeCircle__runTask(void );
#line 257
static inline void LCD128x64P__writeString__runTask(void );
#line 285
static inline void LCD128x64P__clearScreenNB__runTask(void );
#line 303
static inline void LCD128x64P__clearScreen(void );
#line 316
static inline void LCD128x64P__writeLine__runTask(void );
#line 394
static inline void LCD128x64P__writeBar__runTask(void );
#line 454
static inline void LCD128x64P__LCD128x64__initLCD(uint8_t pattern);
#line 482
static void LCD128x64P__LCD128x64__startWriteString(char *data, uint8_t x, uint8_t y);
#line 497
static inline void LCD128x64P__LCD128x64__startWriteRectangle(uint8_t x, uint8_t y, uint8_t a, uint8_t b);
#line 519
static inline void LCD128x64P__LCD128x64__startClearScreen(uint8_t pattern);
# 46 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
static void MMCP__ssB0__makeOutput(void );
# 45 "/homes/mhartmann/baq/tinyos/tos/interfaces/SpiByte.nc"
static uint8_t MMCP__SpiByte__write(uint8_t tx);
# 46 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
static void MMCP__ssMMC__makeOutput(void );
#line 40
static void MMCP__ssMMC__set(void );
static void MMCP__ssMMC__clr(void );
# 7 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/mmc/MMC.nc"
static void MMCP__MMC__initDone(void );



static void MMCP__MMC__error(uint8_t *errStr);
#line 9
static void MMCP__MMC__blockReady(uint8_t *data);
# 44 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
static void MMCP__cdMMC__makeInput(void );
#line 43
static bool MMCP__cdMMC__get(void );
# 120 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static error_t MMCP__Resource__release(void );
#line 88
static error_t MMCP__Resource__request(void );
# 17 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/mmc/MMCP.nc"
uint8_t MMCP__state = UNINIT;
#line 17
uint8_t MMCP__data[32];
uint32_t MMCP__mmcAddr;

static inline uint8_t MMCP__MMC__init(void );
#line 45
static inline uint8_t MMCP__MMC__readBlock(uint32_t addr);
#line 75
static inline void MMCP__Resource__granted(void );
# 82 "/homes/mhartmann/baq/tinyos/tos/interfaces/SpiPacket.nc"
static void Atm128SpiP__SpiPacket__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 120 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__ResourceArbiter__release(
# 99 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2b7b4adb1060);
# 88 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__ResourceArbiter__request(
# 99 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2b7b4adb1060);
# 89 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP__Spi__sleep(void );
#line 83
static void Atm128SpiP__Spi__initMaster(void );
#line 113
static void Atm128SpiP__Spi__enableInterrupt(bool enabled);
#line 97
static uint8_t Atm128SpiP__Spi__read(void );
#line 142
static void Atm128SpiP__Spi__setMasterDoubleSpeed(bool on);
#line 131
static void Atm128SpiP__Spi__setClock(uint8_t speed);
#line 125
static void Atm128SpiP__Spi__setClockPolarity(bool highWhenIdle);
#line 103
static void Atm128SpiP__Spi__write(uint8_t data);
#line 116
static void Atm128SpiP__Spi__enableSpi(bool busOn);
#line 128
static void Atm128SpiP__Spi__setClockPhase(bool sampleOnTrailing);
# 102 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static void Atm128SpiP__Resource__granted(
# 95 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2b7b4ad9fae0);
# 90 "/homes/mhartmann/baq/tinyos/tos/interfaces/ArbiterInfo.nc"
static bool Atm128SpiP__ArbiterInfo__inUse(void );
# 52 "/homes/mhartmann/baq/tinyos/tos/interfaces/McuPowerState.nc"
static void Atm128SpiP__McuPowerState__update(void );
# 255 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
enum Atm128SpiP____nesc_unnamed4351 {
#line 255
  Atm128SpiP__zeroTask = 15U
};
#line 255
typedef int Atm128SpiP____nesc_sillytask_zeroTask[Atm128SpiP__zeroTask];
#line 105
uint16_t Atm128SpiP__len;
uint8_t * Atm128SpiP__txBuffer;
uint8_t * Atm128SpiP__rxBuffer;
uint16_t Atm128SpiP__pos;

enum Atm128SpiP____nesc_unnamed4352 {
  Atm128SpiP__SPI_IDLE, 
  Atm128SpiP__SPI_BUSY, 
  Atm128SpiP__SPI_ATOMIC_SIZE = 10
};





static inline void Atm128SpiP__startSpi(void );
#line 134
static inline void Atm128SpiP__stopSpi(void );







static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx);
#line 210
static inline error_t Atm128SpiP__sendNextPart(void );
#line 255
static inline void Atm128SpiP__zeroTask__runTask(void );
#line 310
static inline 
#line 309
void Atm128SpiP__SpiPacket__default__sendDone(
uint8_t *_txbuffer, uint8_t *_rxbuffer, 
uint16_t _length, error_t _success);

static inline void Atm128SpiP__Spi__dataReady(uint8_t data);
#line 361
static error_t Atm128SpiP__Resource__request(uint8_t id);








static error_t Atm128SpiP__Resource__release(uint8_t id);
#line 384
static inline void Atm128SpiP__ResourceArbiter__granted(uint8_t id);



static inline void Atm128SpiP__Resource__default__granted(uint8_t id);
# 44 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
static void HplAtm128SpiP__MISO__makeInput(void );

static void HplAtm128SpiP__SCK__makeOutput(void );
# 52 "/homes/mhartmann/baq/tinyos/tos/interfaces/McuPowerState.nc"
static void HplAtm128SpiP__Mcu__update(void );
# 109 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128Spi.nc"
static void HplAtm128SpiP__SPI__dataReady(uint8_t data);
# 46 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
static void HplAtm128SpiP__MOSI__makeOutput(void );
# 96 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__initMaster(void );
#line 111
static inline void HplAtm128SpiP__SPI__sleep(void );



static inline uint8_t HplAtm128SpiP__SPI__read(void );
static inline void HplAtm128SpiP__SPI__write(uint8_t d);


void __vector_17(void ) __attribute((signal))   ;
#line 132
static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled);
#line 147
static void HplAtm128SpiP__SPI__enableSpi(bool enabled);
#line 173
static inline void HplAtm128SpiP__SPI__setMasterBit(bool isMaster);
#line 186
static inline void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle);
#line 200
static inline void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing);
#line 217
static inline void HplAtm128SpiP__SPI__setClock(uint8_t v);
#line 230
static inline void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on);
# 49 "/homes/mhartmann/baq/tinyos/tos/system/FcfsResourceQueueC.nc"
enum /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1____nesc_unnamed4353 {
#line 49
  FcfsResourceQueueC__1__NO_ENTRY = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[0U];
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init(void );




static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void );



static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(
# 52 "/homes/mhartmann/baq/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b7b4ae8a2f0);
# 65 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(
# 56 "/homes/mhartmann/baq/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b7b4ae89868);
# 59 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(
# 56 "/homes/mhartmann/baq/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b7b4ae89868);
# 79 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void );
# 102 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(
# 51 "/homes/mhartmann/baq/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2b7b4ae8b158);
# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void );
# 69 "/homes/mhartmann/baq/tinyos/tos/system/SimpleArbiterP.nc"
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4354 {
#line 69
  SimpleArbiterP__0__grantedTask = 16U
};
#line 69
typedef int /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_sillytask_grantedTask[/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask];
#line 62
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4355 {
#line 62
  SimpleArbiterP__0__RES_IDLE = 0, SimpleArbiterP__0__RES_GRANTING = 1, SimpleArbiterP__0__RES_BUSY = 2
};
#line 63
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4356 {
#line 63
  SimpleArbiterP__0__NO_RES = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE;
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId;



static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id);
#line 97
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id);
#line 124
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse(void );
#line 155
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );
#line 167
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id);



static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
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

# 60 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP__Adcsra2int(Atm128Adcsra_t x)
#line 60
{
#line 60
  union __nesc_unnamed4357 {
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

# 69 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__setAdcsra(Atm128Adcsra_t adcsra){
#line 69
  HplAtm128AdcP__HplAtm128Adc__setAdcsra(adcsra);
#line 69
}
#line 69
# 104 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/Atm128AdcP.nc"
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

# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/Init.nc"
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
# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t MP3TestC__writeMP3Data__postTask(void ){
#line 67
  unsigned char result;
#line 67

#line 67
  result = SchedulerBasicP__TaskBasic__postTask(MP3TestC__writeMP3Data);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 179 "MP3TestC.nc"
static inline void MP3TestC__MMC__blockReady(uint8_t *data)
#line 179
{
  MP3TestC__dataBuffer = data;
  MP3TestC__dataReady = TRUE;
  if (MP3TestC__blockAddr > MP3TestC__nextAddress) {
      MP3TestC__forward();
    }
  MP3TestC__blockAddr++;
  MP3TestC__writeMP3Data__postTask();
}

# 9 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/mmc/MMC.nc"
inline static void MMCP__MMC__blockReady(uint8_t *data){
#line 9
  MP3TestC__MMC__blockReady(data);
#line 9
}
#line 9
# 56 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOSlowPinP.nc"
static __inline void /*HplAtm128GeneralIOC.G1*/HplAtm128GeneralIOSlowPinP__9__IO__set(void )
#line 56
{
#line 56
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 56
    * (volatile uint8_t * )101U |= 1 << 1;
#line 56
    __nesc_atomic_end(__nesc_atomic); }
}

# 40 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void MMCP__ssMMC__set(void ){
#line 40
  /*HplAtm128GeneralIOC.G1*/HplAtm128GeneralIOSlowPinP__9__IO__set();
#line 40
}
#line 40
# 120 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
inline static error_t MMCP__Resource__release(void ){
#line 120
  unsigned char result;
#line 120

#line 120
  result = Atm128SpiP__Resource__release(0);
#line 120

#line 120
  return result;
#line 120
}
#line 120
# 45 "/homes/mhartmann/baq/tinyos/tos/interfaces/SpiByte.nc"
inline static uint8_t MMCP__SpiByte__write(uint8_t tx){
#line 45
  unsigned char result;
#line 45

#line 45
  result = Atm128SpiP__SpiByte__write(tx);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 57 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOSlowPinP.nc"
static __inline void /*HplAtm128GeneralIOC.G1*/HplAtm128GeneralIOSlowPinP__9__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )101U &= ~(1 << 1);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 41 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void MMCP__ssMMC__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.G1*/HplAtm128GeneralIOSlowPinP__9__IO__clr();
#line 41
}
#line 41
# 176 "MP3TestC.nc"
static inline void MP3TestC__MMC__initDone(void )
#line 176
{
}

# 7 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/mmc/MMC.nc"
inline static void MMCP__MMC__initDone(void ){
#line 7
  MP3TestC__MMC__initDone();
#line 7
}
#line 7
# 62 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOSlowPinP.nc"
static __inline void /*HplAtm128GeneralIOC.G1*/HplAtm128GeneralIOSlowPinP__9__IO__makeOutput(void )
#line 62
{
#line 62
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 62
    * (volatile uint8_t * )100U |= 1 << 1;
#line 62
    __nesc_atomic_end(__nesc_atomic); }
}

# 46 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void MMCP__ssMMC__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.G1*/HplAtm128GeneralIOSlowPinP__9__IO__makeOutput();
#line 46
}
#line 46
# 61 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )55U |= 1 << 0;
}

# 46 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void MMCP__ssB0__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput();
#line 46
}
#line 46
# 75 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/mmc/MMCP.nc"
static inline void MMCP__Resource__granted(void )
{
  uint8_t div_var_8t = 0;
#line 77
  uint8_t rc[5];

  MMCP__ssB0__makeOutput();
  MMCP__ssMMC__makeOutput();
  MMCP__ssMMC__clr();

  switch (MMCP__state) 
    {
      case INITIALIZE: 


        for (div_var_8t = 0; div_var_8t < 200; div_var_8t++) 
          {
            MMCP__SpiByte__write(0xFF);
          }


      MMCP__SpiByte__write(0x40);
      MMCP__SpiByte__write(0x00);
      MMCP__SpiByte__write(0x00);
      MMCP__SpiByte__write(0x00);
      MMCP__SpiByte__write(0x00);
      MMCP__SpiByte__write(0x95);

      do {
          rc[0] = MMCP__SpiByte__write(0xFF);
        }
      while (
#line 103
      rc[0] == 255);


      do 
        {

          MMCP__SpiByte__write(0x77);
          MMCP__SpiByte__write(0x00);
          MMCP__SpiByte__write(0x00);
          MMCP__SpiByte__write(0x00);
          MMCP__SpiByte__write(0x00);
          MMCP__SpiByte__write(0xFF);

          do {
              rc[0] = MMCP__SpiByte__write(0xFF);
            }
          while (
#line 118
          rc[0] == 255);



          MMCP__SpiByte__write(0x69);
          MMCP__SpiByte__write(0x00);
          MMCP__SpiByte__write(0x00);
          MMCP__SpiByte__write(0x00);
          MMCP__SpiByte__write(0x00);
          MMCP__SpiByte__write(0xFF);

          do {
              rc[0] = MMCP__SpiByte__write(0xFF);
            }
          while (
#line 131
          rc[0] == 255);
        }
      while (rc[0] != 0);


      MMCP__SpiByte__write(0x50);
      MMCP__SpiByte__write(0x00);
      MMCP__SpiByte__write(0x00);
      MMCP__SpiByte__write(0x00);
      MMCP__SpiByte__write(0x20);
      MMCP__SpiByte__write(0xFF);

      do {
          rc[0] = MMCP__SpiByte__write(0xFF);
        }
      while (
#line 145
      rc[0] == 255);

      MMCP__state = READY;

      MMCP__ssMMC__set();
      MMCP__Resource__release();
      MMCP__MMC__initDone();
      break;
      case READ: 
        MMCP__ssMMC__clr();


      MMCP__SpiByte__write(0x51);
      div_var_8t = (MMCP__mmcAddr >> 24) & 0xFF;
#line 158
      ;
      MMCP__SpiByte__write(div_var_8t);
      div_var_8t = (MMCP__mmcAddr >> 16) & 0xFF;
#line 160
      ;
      MMCP__SpiByte__write(div_var_8t);
      div_var_8t = (MMCP__mmcAddr >> 8) & 0xFF;
#line 162
      ;
      MMCP__SpiByte__write(div_var_8t);
      div_var_8t = MMCP__mmcAddr & 0xFF;
#line 164
      ;
      MMCP__SpiByte__write(div_var_8t);
      MMCP__SpiByte__write(0xFF);

      do {
          rc[0] = MMCP__SpiByte__write(0xFF);
        }
      while (
#line 170
      rc[0] == 255);

      do {
          rc[0] = MMCP__SpiByte__write(0xFF);
        }
      while (
#line 174
      rc[0] != 254);

      for (div_var_8t = 0; div_var_8t < 32; div_var_8t++) 
        {
          MMCP__data[div_var_8t] = MMCP__SpiByte__write(0xFF);
        }
      MMCP__Resource__release();
      MMCP__ssMMC__set();
      MMCP__state = READY;
      MMCP__MMC__blockReady(MMCP__data);
      break;
    }
}

# 388 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__Resource__default__granted(uint8_t id)
#line 388
{
}

# 102 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
inline static void Atm128SpiP__Resource__granted(uint8_t arg_0x2b7b4ad9fae0){
#line 102
  switch (arg_0x2b7b4ad9fae0) {
#line 102
    case 0:
#line 102
      MMCP__Resource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      Atm128SpiP__Resource__default__granted(arg_0x2b7b4ad9fae0);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 384 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__ResourceArbiter__granted(uint8_t id)
#line 384
{
  Atm128SpiP__Resource__granted(id);
}

# 102 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(uint8_t arg_0x2b7b4ae8b158){
#line 102
  Atm128SpiP__ResourceArbiter__granted(arg_0x2b7b4ae8b158);
#line 102
}
#line 102
# 171 "/homes/mhartmann/baq/tinyos/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 171
{
}

# 59 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x2b7b4ae89868){
#line 59
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(arg_0x2b7b4ae89868);
#line 59
}
#line 59
# 155 "/homes/mhartmann/baq/tinyos/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void )
#line 155
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 156
    {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId;
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY;
    }
#line 159
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
}

# 121 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC__McuPowerState__update(void )
#line 121
{
}

# 52 "/homes/mhartmann/baq/tinyos/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128SpiP__Mcu__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 173 "/homes/mhartmann/baq/tinyos/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 173
{
}

# 65 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x2b7b4ae89868){
#line 65
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x2b7b4ae89868);
#line 65
}
#line 65
# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char result;
#line 67

#line 67
  result = SchedulerBasicP__TaskBasic__postTask(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 68 "/homes/mhartmann/baq/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
        uint8_t id = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead;

#line 72
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead];
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
          }
#line 75
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[id] = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;
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
      /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char result;
#line 70

#line 70
  result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__dequeue();
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 60 "/homes/mhartmann/baq/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char result;
#line 53

#line 53
  result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEmpty();
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 97 "/homes/mhartmann/baq/tinyos/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id)
#line 97
{
  bool released = FALSE;

#line 99
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId == id) {
          if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty() == FALSE) {
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue();
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
            }
          else {
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;
              /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE;
            }
          released = TRUE;
        }
    }
#line 113
    __nesc_atomic_end(__nesc_atomic); }
  if (released == TRUE) {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(id);
      return SUCCESS;
    }
  return FAIL;
}

# 120 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
inline static error_t Atm128SpiP__ResourceArbiter__release(uint8_t arg_0x2b7b4adb1060){
#line 120
  unsigned char result;
#line 120

#line 120
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(arg_0x2b7b4adb1060);
#line 120

#line 120
  return result;
#line 120
}
#line 120
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

# 90 "/homes/mhartmann/baq/tinyos/tos/interfaces/ArbiterInfo.nc"
inline static bool Atm128SpiP__ArbiterInfo__inUse(void ){
#line 90
  unsigned char result;
#line 90

#line 90
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse();
#line 90

#line 90
  return result;
#line 90
}
#line 90
# 52 "/homes/mhartmann/baq/tinyos/tos/interfaces/McuPowerState.nc"
inline static void Atm128SpiP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 111 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__sleep(void )
#line 111
{
}

# 89 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__sleep(void ){
#line 89
  HplAtm128SpiP__SPI__sleep();
#line 89
}
#line 89
#line 116
inline static void Atm128SpiP__Spi__enableSpi(bool busOn){
#line 116
  HplAtm128SpiP__SPI__enableSpi(busOn);
#line 116
}
#line 116
# 134 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__stopSpi(void )
#line 134
{
  Atm128SpiP__Spi__enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 136
  {
    Atm128SpiP__Spi__sleep();
  }
  Atm128SpiP__McuPowerState__update();
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
# 60 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
inline static error_t MP3TestC__GLCD__startWriteRectangle(uint8_t x, uint8_t y, uint8_t a, uint8_t b){
#line 60
  unsigned char result;
#line 60

#line 60
  result = GLCDP__GLCD__startWriteRectangle(x, y, a, b);
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
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
# 497 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
static inline void LCD128x64P__LCD128x64__startWriteRectangle(uint8_t x, uint8_t y, uint8_t a, uint8_t b)
{
  LCD128x64P__xPos[0] = x;
  LCD128x64P__yPos[0] = y;
  LCD128x64P__aRect = a;
  LCD128x64P__bRect = b;
  LCD128x64P__writeRectangle__postTask();
}

# 37 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void GLCDP__LCD128x64__startWriteRectangle(uint8_t x, uint8_t y, uint8_t a, uint8_t b){
#line 37
  LCD128x64P__LCD128x64__startWriteRectangle(x, y, a, b);
#line 37
}
#line 37
# 310 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline 
#line 309
void Atm128SpiP__SpiPacket__default__sendDone(
uint8_t *_txbuffer, uint8_t *_rxbuffer, 
uint16_t _length, error_t _success)
#line 311
{
}

# 82 "/homes/mhartmann/baq/tinyos/tos/interfaces/SpiPacket.nc"
inline static void Atm128SpiP__SpiPacket__sendDone(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
#line 82
  Atm128SpiP__SpiPacket__default__sendDone(txBuf, rxBuf, len, error);
#line 82
}
#line 82
# 255 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__zeroTask__runTask(void )
#line 255
{
  uint16_t myLen;
  uint8_t * rx;
  uint8_t * tx;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 260
    {
      myLen = Atm128SpiP__len;
      rx = Atm128SpiP__rxBuffer;
      tx = Atm128SpiP__txBuffer;
      Atm128SpiP__rxBuffer = (void *)0;
      Atm128SpiP__txBuffer = (void *)0;
      Atm128SpiP__len = 0;
      Atm128SpiP__pos = 0;
      Atm128SpiP__SpiPacket__sendDone(tx, rx, myLen, SUCCESS);
    }
#line 269
    __nesc_atomic_end(__nesc_atomic); }
}

# 199 "MP3TestC.nc"
static inline void MP3TestC__GLCD__barWritten(void )
#line 199
{
  MP3TestC__paintLCD();
}

# 80 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
inline static void GLCDP__GLCD__barWritten(void ){
#line 80
  MP3TestC__GLCD__barWritten();
#line 80
}
#line 80
# 320 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCDP.nc"
static inline void GLCDP__LCD128x64__barWritten(void )
{
  GLCDP__stateGLCD = GLCDP__stateGLCD & ~BUSY_BAR;
  GLCDP__GLCD__barWritten();
}

# 57 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void LCD128x64P__LCD128x64__barWritten(void ){
#line 57
  GLCDP__LCD128x64__barWritten();
#line 57
}
#line 57
# 394 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
static inline void LCD128x64P__writeBar__runTask(void )
{
  static volatile uint8_t x_count;
#line 396
  static volatile uint8_t y_count;
#line 396
  static volatile uint8_t y_mod = 0;
#line 396
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
#line 444
        {
          for (y_count = 0; y_count < LCD128x64P__bBar; y_count++) 
            {
              LCD128x64P__LCD128x64__setPixel(LCD128x64P__xPos[4] + x_count, LCD128x64P__yPos[4] + y_count);
            }
        }
    }
  LCD128x64P__LCD128x64__barWritten();
}

#line 137
static inline uint8_t LCD128x64P__readByte(uint8_t mode)
{
  uint8_t tmp = 0;
#line 139
  uint8_t c = 0;

#line 140
  for (c = 0; c < 2; c++) 
    {
      LCD128x64P__busyWait4Controller();
      * (volatile uint8_t *)(0x03 + 0x20) |= 1 << 6;
      * (volatile uint8_t *)(0x03 + 0x20) |= 1 << 5;
      if (mode == 0) 
        {
          * (volatile uint8_t *)(0x03 + 0x20) &= ~(1 << 4);
        }
      else 
        {
          * (volatile uint8_t *)(0x1A + 0x20) = 0x00;
          * (volatile uint8_t *)(0x03 + 0x20) |= 1 << 4;
        }
      * (volatile uint8_t *)(0x03 + 0x20) &= ~(1 << 6);


       __asm volatile ("nop"); __asm volatile ("nop"); __asm volatile ("nop");
      * (volatile uint8_t *)(0x03 + 0x20) |= 1 << 6;


       __asm volatile ("nop"); __asm volatile ("nop"); __asm volatile ("nop"); __asm volatile ("nop");
       __asm volatile ("nop"); __asm volatile ("nop"); __asm volatile ("nop"); __asm volatile ("nop");

      tmp = * (volatile uint8_t *)(0x19 + 0x20);
      * (volatile uint8_t *)(0x1A + 0x20) = 0xFF;
    }
  return tmp;
}

# 206 "MP3TestC.nc"
static inline void MP3TestC__GLCD__lineWritten(void )
#line 206
{
  MP3TestC__paintLCD();
}

# 78 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
inline static void GLCDP__GLCD__lineWritten(void ){
#line 78
  MP3TestC__GLCD__lineWritten();
#line 78
}
#line 78
# 314 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCDP.nc"
static inline void GLCDP__LCD128x64__lineWritten(void )
{
  GLCDP__stateGLCD = GLCDP__stateGLCD & ~BUSY_LINE;
  GLCDP__GLCD__lineWritten();
}

# 55 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void LCD128x64P__LCD128x64__lineWritten(void ){
#line 55
  GLCDP__LCD128x64__lineWritten();
#line 55
}
#line 55
# 316 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
static inline void LCD128x64P__writeLine__runTask(void )
{
  static volatile uint8_t count;
#line 318
  static volatile uint8_t orientation;
#line 318
  static volatile uint8_t dx;
#line 318
  static volatile uint8_t dy;
#line 318
  static volatile uint8_t steep = 0;
#line 318
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
#line 343
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
#line 371
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
#line 385
  LCD128x64P__LCD128x64__lineWritten();
}

# 202 "MP3TestC.nc"
static inline void MP3TestC__GLCD__screenCleared(void )
#line 202
{
  MP3TestC__paintState = MP3TestC__LINE0;
  MP3TestC__paintLCD();
}

# 82 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
inline static void GLCDP__GLCD__screenCleared(void ){
#line 82
  MP3TestC__GLCD__screenCleared();
#line 82
}
#line 82
# 347 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCDP.nc"
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

# 59 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void LCD128x64P__LCD128x64__screenCleared(void ){
#line 59
  GLCDP__LCD128x64__screenCleared();
#line 59
}
#line 59
# 285 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
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

# 215 "MP3TestC.nc"
static inline void MP3TestC__GLCD__stringWritten(void )
#line 215
{
  if (MP3TestC__refresh) {
      MP3TestC__paintLCD();
    }
}

# 74 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
inline static void GLCDP__GLCD__stringWritten(void ){
#line 74
  MP3TestC__GLCD__stringWritten();
#line 74
}
#line 74
# 331 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCDP.nc"
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

# 51 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void LCD128x64P__LCD128x64__stringWritten(void ){
#line 51
  GLCDP__LCD128x64__stringWritten();
#line 51
}
#line 51
# 257 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
static inline void LCD128x64P__writeString__runTask(void )
{
  uint8_t index = 0;
#line 259
  uint8_t offset = 0;

  while (*LCD128x64P__dataPtr != '\0') 
    {
      for (index = 0; index < 5; index++) 
        {

          LCD128x64P__setAddress(LCD128x64P__xPos[2] + offset, LCD128x64P__yPos[2]);
          LCD128x64P__writeGLCD(1, (uint8_t )__extension__ ({
#line 267
            uint16_t __addr16 = (uint16_t )(uint16_t )&Font5x7[(*LCD128x64P__dataPtr - 0x20) * 5 + index];
#line 267
            uint8_t __result;

#line 267
             __asm ("lpm""\n\t""mov %0, r0""\n\t" : "=r"(__result) : "z"(__addr16) : "r0");__result;
          }
          ));
#line 268
          offset++;
        }
      LCD128x64P__setAddress(LCD128x64P__xPos[2] + offset, LCD128x64P__yPos[2]);
      LCD128x64P__writeGLCD(1, 0x00);
      offset++;
      LCD128x64P__dataPtr++;
    }
  LCD128x64P__LCD128x64__stringWritten();
}

# 209 "MP3TestC.nc"
static inline void MP3TestC__GLCD__circleWritten(void )
#line 209
{
  MP3TestC__paintLCD();
}

# 72 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
inline static void GLCDP__GLCD__circleWritten(void ){
#line 72
  MP3TestC__GLCD__circleWritten();
#line 72
}
#line 72
# 302 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCDP.nc"
static inline void GLCDP__LCD128x64__circleWritten(void )
{
  GLCDP__stateGLCD = GLCDP__stateGLCD & ~BUSY_CIRCLE;
  GLCDP__GLCD__circleWritten();
}

# 49 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void LCD128x64P__LCD128x64__circleWritten(void ){
#line 49
  GLCDP__LCD128x64__circleWritten();
#line 49
}
#line 49
# 224 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
static inline void LCD128x64P__writeCircle__runTask(void )
{
  int tswitch;
#line 226
  int y;
#line 226
  int x = 0;
#line 226
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

# 212 "MP3TestC.nc"
static inline void MP3TestC__GLCD__rectangleWritten(void )
#line 212
{
  MP3TestC__paintLCD();
}

# 76 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
inline static void GLCDP__GLCD__rectangleWritten(void ){
#line 76
  MP3TestC__GLCD__rectangleWritten();
#line 76
}
#line 76
# 308 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCDP.nc"
static inline void GLCDP__LCD128x64__rectangleWritten(void )
{
  GLCDP__stateGLCD = GLCDP__stateGLCD & ~BUSY_RECT;
  GLCDP__GLCD__rectangleWritten();
}

# 53 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void LCD128x64P__LCD128x64__rectangleWritten(void ){
#line 53
  GLCDP__LCD128x64__rectangleWritten();
#line 53
}
#line 53
# 208 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
static inline void LCD128x64P__writeRectangle__runTask(void )
{
  unsigned char j;

#line 211
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

#line 65
static inline void LCD128x64P__wait4Controller__runTask(void )
{
  * (volatile uint8_t *)(0x1A + 0x20) = 0x00;
  * (volatile uint8_t *)(0x03 + 0x20) |= 1 << 5;
  * (volatile uint8_t *)(0x03 + 0x20) &= ~(1 << 4);

  while (* (volatile uint8_t *)(0x19 + 0x20) & 0x80) 
    {
      * (volatile uint8_t *)(0x03 + 0x20) |= 1 << 6;
       __asm volatile ("nop"); __asm volatile ("nop");
      * (volatile uint8_t *)(0x03 + 0x20) &= ~(1 << 6);
       __asm volatile ("nop"); __asm volatile ("nop");}

  * (volatile uint8_t *)(0x03 + 0x20) |= 1 << 5;
  * (volatile uint8_t *)(0x1A + 0x20) = 0xFF;
}

# 21 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
inline static void GLCDP__GLCD__xyReady(uint16_t x, uint16_t y){
#line 21
  MP3TestC__GLCD__xyReady(x, y);
#line 21
}
#line 21
# 28 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCDP.nc"
static inline void GLCDP__calcXY(uint16_t x_raw, uint16_t y_raw)
{

  uint32_t x_tmp = 0;
#line 31
  uint32_t y_tmp = 0;

#line 32
  if (x_raw < GLCDP__x_max && x_raw > GLCDP__x_min && y_raw < GLCDP__y_max && y_raw > GLCDP__y_min) 
    {

      x_raw = x_raw - GLCDP__x_min;
      y_raw = y_raw - GLCDP__y_min;



      x_tmp = (uint32_t )x_raw * 127 / (GLCDP__x_max - GLCDP__x_min);
      y_tmp = (uint32_t )y_raw * 63 / (GLCDP__y_max - GLCDP__y_min);
      GLCDP__GLCD__xyReady(x_tmp, y_tmp);
    }
  else 
    {
      GLCDP__GLCD__xyReady(200, 200);
    }
}

# 4 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreen.nc"
inline static void GLCDP__TouchScreen__getXY(void ){
#line 4
  TouchScreenP__TouchScreen__getXY();
#line 4
}
#line 4
# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
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
# 180 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreenP.nc"
static inline void TouchScreenP__TouchScreen__isPressed(bool on)
{
  TouchScreenP__pressDetect = on;
  if (on == TRUE) 
    {
      TouchScreenP__checkTS__postTask();
    }
}

# 6 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreen.nc"
inline static void GLCDP__TouchScreen__isPressed(bool on){
#line 6
  TouchScreenP__TouchScreen__isPressed(on);
#line 6
}
#line 6
# 66 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCDP.nc"
static inline void GLCDP__GLCD__isPressed(bool on)
{
  GLCDP__TouchScreen__isPressed(on);
}

# 14 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
inline static void MP3TestC__GLCD__isPressed(bool on){
#line 14
  GLCDP__GLCD__isPressed(on);
#line 14
}
#line 14
# 223 "MP3TestC.nc"
static inline void MP3TestC__GLCD__calibrated(void )
#line 223
{
  MP3TestC__GLCD__isPressed(1);
  MP3TestC__paintState = MP3TestC__LINE0;
}

# 24 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
inline static void GLCDP__GLCD__calibrated(void ){
#line 24
  MP3TestC__GLCD__calibrated();
#line 24
}
#line 24
# 41 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void GLCDP__LCD128x64__startWriteString(char *data, uint8_t x, uint8_t y){
#line 41
  LCD128x64P__LCD128x64__startWriteString(data, x, y);
#line 41
}
#line 41
# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
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
# 519 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
static inline void LCD128x64P__LCD128x64__startClearScreen(uint8_t pattern)
{
  LCD128x64P__modPattern = pattern;
  LCD128x64P__clearScreenNB__postTask();
}

# 45 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void GLCDP__LCD128x64__startClearScreen(uint8_t pattern){
#line 45
  LCD128x64P__LCD128x64__startClearScreen(pattern);
#line 45
}
#line 45
# 102 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCDP.nc"
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

# 11 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreen.nc"
inline static void TouchScreenP__TouchScreen__xyReady(uint16_t x, uint16_t y){
#line 11
  GLCDP__TouchScreen__xyReady(x, y);
#line 11
}
#line 11
# 44 "/homes/mhartmann/baq/tinyos/tos/system/ArbitratedReadC.nc"
static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__request(uint8_t client)
#line 44
{
  return FAIL;
}

# 88 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__request(uint8_t arg_0x2b7b4ac35e30){
#line 88
  unsigned char result;
#line 88

#line 88
  switch (arg_0x2b7b4ac35e30) {
#line 88
    case /*TouchScreenC.AdcReadClientC*/AdcReadClientC__0__ID:
#line 88
      result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__request(/*TouchScreenC.AdcReadClientC*/AdcReadClientC__0__HAL_ID);
#line 88
      break;
#line 88
    default:
#line 88
      result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__request(arg_0x2b7b4ac35e30);
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
# 31 "/homes/mhartmann/baq/tinyos/tos/system/ArbitratedReadC.nc"
static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__read(uint8_t client)
#line 31
{
  return /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__request(client);
}

# 55 "/homes/mhartmann/baq/tinyos/tos/interfaces/Read.nc"
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
# 56 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOSlowPinP.nc"
static __inline void /*HplAtm128GeneralIOC.G4*/HplAtm128GeneralIOSlowPinP__12__IO__set(void )
#line 56
{
#line 56
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 56
    * (volatile uint8_t * )101U |= 1 << 4;
#line 56
    __nesc_atomic_end(__nesc_atomic); }
}

# 40 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void TouchScreenP__driveB__set(void ){
#line 40
  /*HplAtm128GeneralIOC.G4*/HplAtm128GeneralIOSlowPinP__12__IO__set();
#line 40
}
#line 40
# 57 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOSlowPinP.nc"
static __inline void /*HplAtm128GeneralIOC.G3*/HplAtm128GeneralIOSlowPinP__11__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )101U &= ~(1 << 3);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 41 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void TouchScreenP__driveA__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.G3*/HplAtm128GeneralIOSlowPinP__11__IO__clr();
#line 41
}
#line 41
# 92 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCDP.nc"
static inline void GLCDP__GLCD__getXY(void )
{
  GLCDP__TouchScreen__getXY();
}

# 12 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
inline static void MP3TestC__GLCD__getXY(void ){
#line 12
  GLCDP__GLCD__getXY();
#line 12
}
#line 12
# 220 "MP3TestC.nc"
static inline void MP3TestC__GLCD__tsPressed(void )
#line 220
{
  MP3TestC__GLCD__getXY();
}

# 26 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
inline static void GLCDP__GLCD__tsPressed(void ){
#line 26
  MP3TestC__GLCD__tsPressed();
#line 26
}
#line 26
# 151 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCDP.nc"
static inline void GLCDP__TouchScreen__tsPressed(void )
{
  GLCDP__GLCD__tsPressed();
}

# 13 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreen.nc"
inline static void TouchScreenP__TouchScreen__tsPressed(void ){
#line 13
  GLCDP__TouchScreen__tsPressed();
#line 13
}
#line 13
# 65 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreenP.nc"
static inline void TouchScreenP__Read__readDone(error_t err, uint16_t val)
#line 65
{
  if (err == SUCCESS) {
      switch (TouchScreenP__state) {
          case TouchScreenP__READ_DUMMY: 

            TouchScreenP__x = val;
          TouchScreenP__state = TouchScreenP__READ_X0;
          TouchScreenP__Read__read();
          break;

          case TouchScreenP__READ_X0: 
            if (val > 30 || val > 60) {

                if (TouchScreenP__pressDetect) {
                    TouchScreenP__pressDetect = FALSE;
                    TouchScreenP__TouchScreen__tsPressed();
                  }
                else 
#line 81
                  {

                    TouchScreenP__results[0] = val;
                    TouchScreenP__state = TouchScreenP__READ_X1;
                    TouchScreenP__Read__read();
                  }
              }
            else 
#line 87
              {

                if (TouchScreenP__pressDetect) {

                    TouchScreenP__checkTS__postTask();
                  }
                else 
#line 92
                  {

                    TouchScreenP__Read__read();
                  }
              }

          break;

          case TouchScreenP__READ_X1: 
            TouchScreenP__results[1] = val;
          TouchScreenP__state = TouchScreenP__READ_X2;
          TouchScreenP__Read__read();
          break;
          case TouchScreenP__READ_X2: 
            TouchScreenP__results[2] = val;
          TouchScreenP__state = TouchScreenP__READ_X3;
          TouchScreenP__Read__read();
          break;
          case TouchScreenP__READ_X3: 
            TouchScreenP__results[3] = val;

          TouchScreenP__x = TouchScreenP__meanOfFour();
          TouchScreenP__state = TouchScreenP__READ_Y0;

          TouchScreenP__driveA__clr();
          TouchScreenP__driveB__set();
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 118
            {
#line 118
              TouchScreenP__channel = ATM128_ADC_SNGL_ADC1;
            }
#line 119
            __nesc_atomic_end(__nesc_atomic); }
#line 119
          TouchScreenP__Read__read();
          break;


          case TouchScreenP__READ_Y0: 
            TouchScreenP__results[0] = val;
          TouchScreenP__state = TouchScreenP__READ_Y1;
          TouchScreenP__Read__read();
          break;
          case TouchScreenP__READ_Y1: 
            TouchScreenP__results[1] = val;
          TouchScreenP__state = TouchScreenP__READ_Y2;
          TouchScreenP__Read__read();
          break;
          case TouchScreenP__READ_Y2: 
            TouchScreenP__results[2] = val;
          TouchScreenP__state = TouchScreenP__READ_Y3;
          TouchScreenP__Read__read();
          break;
          case TouchScreenP__READ_Y3: 
            TouchScreenP__results[3] = val;

          TouchScreenP__y = TouchScreenP__meanOfFour();
          TouchScreenP__TouchScreen__xyReady(TouchScreenP__x, TouchScreenP__y);
          break;
          default: 
            break;
        }
    }
}

# 48 "/homes/mhartmann/baq/tinyos/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data)
#line 48
{
}

# 63 "/homes/mhartmann/baq/tinyos/tos/interfaces/Read.nc"
inline static void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__readDone(uint8_t arg_0x2b7b4ac396b8, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__val_t val){
#line 63
  switch (arg_0x2b7b4ac396b8) {
#line 63
    case /*TouchScreenC.AdcReadClientC*/AdcReadClientC__0__ID:
#line 63
      TouchScreenP__Read__readDone(result, val);
#line 63
      break;
#line 63
    default:
#line 63
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__default__readDone(arg_0x2b7b4ac396b8, result, val);
#line 63
      break;
#line 63
    }
#line 63
}
#line 63
# 52 "/homes/mhartmann/baq/tinyos/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128AdcP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 82 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__disableAdc(void )
#line 82
{
  * (volatile uint8_t *)(0x06 + 0x20) &= ~(1 << 7);
  HplAtm128AdcP__McuPowerState__update();
}

# 86 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__disableAdc(void ){
#line 86
  HplAtm128AdcP__HplAtm128Adc__disableAdc();
#line 86
}
#line 86
# 129 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline error_t Atm128AdcP__AsyncStdControl__stop(void )
#line 129
{
  /* atomic removed: atomic calls only */
#line 130
  Atm128AdcP__HplAtm128Adc__disableAdc();

  return SUCCESS;
}

# 105 "/homes/mhartmann/baq/tinyos/tos/interfaces/AsyncStdControl.nc"
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
# 84 "/homes/mhartmann/baq/tinyos/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup(void )
#line 84
{
}

# 62 "/homes/mhartmann/baq/tinyos/tos/lib/power/PowerDownCleanup.nc"
inline static void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup(void ){
#line 62
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__default__cleanup();
#line 62
}
#line 62
# 79 "/homes/mhartmann/baq/tinyos/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted(void )
#line 79
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__PowerDownCleanup__cleanup();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__stop();
}

# 46 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted(void ){
#line 46
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__granted();
#line 46
}
#line 46
# 218 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(uint8_t arg_0x2b7b4a75c9b8){
#line 65
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__unconfigure(arg_0x2b7b4a75c9b8);
#line 65
}
#line 65
# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask__postTask(void ){
#line 67
  unsigned char result;
#line 67

#line 67
  result = SchedulerBasicP__TaskBasic__postTask(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 57 "/homes/mhartmann/baq/tinyos/tos/system/RoundRobinResourceQueueC.nc"
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

# 70 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Queue__dequeue(void ){
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
# 66 "/homes/mhartmann/baq/tinyos/tos/system/RoundRobinResourceQueueC.nc"
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

# 53 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Queue__isEmpty(void ){
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
# 111 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__release(uint8_t id)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__RES_BUSY && /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__resId == id) {
          if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Queue__isEmpty() == FALSE) {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__reqResId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Queue__dequeue();
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__NO_RES;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__RES_GRANTING;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask__postTask();
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(id);
            }
          else {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__default_owner_id;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__RES_CONTROLLED;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__unconfigure(id);
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__granted();
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

# 47 "/homes/mhartmann/baq/tinyos/tos/system/ArbitratedReadC.nc"
static inline error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(uint8_t client)
#line 47
{
#line 47
  return FAIL;
}

# 120 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__release(uint8_t arg_0x2b7b4ac35e30){
#line 120
  unsigned char result;
#line 120

#line 120
  switch (arg_0x2b7b4ac35e30) {
#line 120
    case /*TouchScreenC.AdcReadClientC*/AdcReadClientC__0__ID:
#line 120
      result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__release(/*TouchScreenC.AdcReadClientC*/AdcReadClientC__0__HAL_ID);
#line 120
      break;
#line 120
    default:
#line 120
      result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__default__release(arg_0x2b7b4ac35e30);
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
# 39 "/homes/mhartmann/baq/tinyos/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__width_t data)
#line 39
{
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__release(client);
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Read__readDone(client, result, data);
}

# 63 "/homes/mhartmann/baq/tinyos/tos/interfaces/Read.nc"
inline static void AdcP__Read__readDone(uint8_t arg_0x2b7b4ac0fac0, error_t result, AdcP__Read__val_t val){
#line 63
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__readDone(arg_0x2b7b4ac0fac0, result, val);
#line 63
}
#line 63
# 103 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/AdcP.nc"
static inline void AdcP__acquiredData__runTask(void )
#line 103
{
  AdcP__state = AdcP__IDLE;
  AdcP__Read__readDone(AdcP__client, SUCCESS, AdcP__val);
}

# 204 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(uint8_t id)
#line 204
{
}

# 53 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceRequested__requested(uint8_t arg_0x2b7b4a75e7e8){
#line 53
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceRequested__default__requested(arg_0x2b7b4a75e7e8);
#line 53
}
#line 53
# 97 "/homes/mhartmann/baq/tinyos/tos/system/RoundRobinResourceQueueC.nc"
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

# 79 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Queue__enqueue(resource_client_id_t id){
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
# 133 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release(void )
#line 133
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 134
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__resId == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__default_owner_id) {
          if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__RES_GRANTING) {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask__postTask();
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
            if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__RES_IMM_GRANTING) {
                /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__reqResId;
                /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__RES_BUSY;
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

# 56 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
inline static error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release(void ){
#line 56
  unsigned char result;
#line 56

#line 56
  result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__release();
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 78 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__enableAdc(void )
#line 78
{
  * (volatile uint8_t *)(0x06 + 0x20) |= 1 << 7;
  HplAtm128AdcP__McuPowerState__update();
}

# 82 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__enableAdc(void ){
#line 82
  HplAtm128AdcP__HplAtm128Adc__enableAdc();
#line 82
}
#line 82
# 124 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/Atm128AdcP.nc"
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

# 95 "/homes/mhartmann/baq/tinyos/tos/interfaces/AsyncStdControl.nc"
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
# 69 "/homes/mhartmann/baq/tinyos/tos/lib/power/AsyncPowerManagerP.nc"
static inline void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested(void )
#line 69
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__AsyncStdControl__start();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__release();
}

# 73 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__requested(void ){
#line 73
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP__0__ResourceDefaultOwner__requested();
#line 73
}
#line 73
# 62 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOSlowPinP.nc"
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

# 46 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void TouchScreenP__driveA__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.G3*/HplAtm128GeneralIOSlowPinP__11__IO__makeOutput();
#line 46
}
#line 46
# 62 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOSlowPinP.nc"
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

# 46 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void TouchScreenP__driveB__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.G4*/HplAtm128GeneralIOSlowPinP__12__IO__makeOutput();
#line 46
}
#line 46
# 59 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortF.Bit0*/HplAtm128GeneralIOPinP__40__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )97U &= ~(1 << 0);
}

# 44 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void TouchScreenP__adcX__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortF.Bit0*/HplAtm128GeneralIOPinP__40__IO__makeInput();
#line 44
}
#line 44
# 59 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortF.Bit1*/HplAtm128GeneralIOPinP__41__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )97U &= ~(1 << 1);
}

# 44 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void TouchScreenP__adcY__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortF.Bit1*/HplAtm128GeneralIOPinP__41__IO__makeInput();
#line 44
}
#line 44
# 56 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOSlowPinP.nc"
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

# 40 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void TouchScreenP__driveA__set(void ){
#line 40
  /*HplAtm128GeneralIOC.G3*/HplAtm128GeneralIOSlowPinP__11__IO__set();
#line 40
}
#line 40
# 57 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOSlowPinP.nc"
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

# 41 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void TouchScreenP__driveB__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.G4*/HplAtm128GeneralIOSlowPinP__12__IO__clr();
#line 41
}
#line 41
# 56 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortF.Bit0*/HplAtm128GeneralIOPinP__40__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )98U &= ~(1 << 0);
}

# 41 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void TouchScreenP__adcX__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortF.Bit0*/HplAtm128GeneralIOPinP__40__IO__clr();
#line 41
}
#line 41
# 56 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortF.Bit1*/HplAtm128GeneralIOPinP__41__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )98U &= ~(1 << 1);
}

# 41 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void TouchScreenP__adcY__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortF.Bit1*/HplAtm128GeneralIOPinP__41__IO__clr();
#line 41
}
#line 41
# 323 "MP3TestC.nc"
static inline void MP3TestC__reverse(void )
#line 323
{
  switch (MP3TestC__track) {
      case 1: 
        MP3TestC__track = 3;
      MP3TestC__blockAddr = MP3TestC__START_3;

      strncpy(MP3TestC__artist, "Van Halen           ", 20);
      strncpy(MP3TestC__title, "Jump                ", 20);

      MP3TestC__nextAddress = MP3TestC__END_ADDRESS;
      MP3TestC__playTime[0] = '0';
      MP3TestC__playTime[1] = '4';
      MP3TestC__playTime[3] = '0';
      MP3TestC__playTime[4] = '1';
      break;
      case 2: 
        MP3TestC__track = 1;
      MP3TestC__blockAddr = MP3TestC__START_1;

      strncpy(MP3TestC__artist, "Lady Gaga           ", 20);
      strncpy(MP3TestC__title, "Bad Romance         ", 20);

      MP3TestC__nextAddress = MP3TestC__START_2;
      MP3TestC__playTime[0] = '0';
      MP3TestC__playTime[1] = '4';
      MP3TestC__playTime[3] = '5';
      MP3TestC__playTime[4] = '4';
      break;
      case 3: 
        MP3TestC__track = 2;
      MP3TestC__blockAddr = MP3TestC__START_2;

      strncpy(MP3TestC__artist, "AC/DC               ", 20);
      strncpy(MP3TestC__title, "Highway To Hell     ", 20);

      MP3TestC__nextAddress = MP3TestC__START_3;
      MP3TestC__playTime[0] = '0';
      MP3TestC__playTime[1] = '3';
      MP3TestC__playTime[3] = '1';
      MP3TestC__playTime[4] = '7';
      break;
    }



  MP3TestC__paintState = MP3TestC__LINE0;
  MP3TestC__paintLCD();
}

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
# 161 "/homes/mhartmann/baq/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

# 73 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
inline static void MP3TestC__Timer1__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(2U, dt);
#line 73
}
#line 73
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
# 86 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/AdcP.nc"
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

# 55 "/homes/mhartmann/baq/tinyos/tos/interfaces/Read.nc"
inline static error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__read(uint8_t arg_0x2b7b4ac36390){
#line 55
  unsigned char result;
#line 55

#line 55
  result = AdcP__Read__read(arg_0x2b7b4ac36390);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 35 "/homes/mhartmann/baq/tinyos/tos/system/ArbitratedReadC.nc"
static inline void /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(uint8_t client)
#line 35
{
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Service__read(client);
}

# 202 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__granted(uint8_t arg_0x2b7b4a75f658){
#line 102
  switch (arg_0x2b7b4a75f658) {
#line 102
    case /*TouchScreenC.AdcReadClientC*/AdcReadClientC__0__HAL_ID:
#line 102
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC__0__Resource__granted(/*TouchScreenC.AdcReadClientC*/AdcReadClientC__0__ID);
#line 102
      break;
#line 102
    default:
#line 102
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__default__granted(arg_0x2b7b4a75f658);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 216 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__configure(uint8_t arg_0x2b7b4a75c9b8){
#line 59
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__default__configure(arg_0x2b7b4a75c9b8);
#line 59
}
#line 59
# 190 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
static inline void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__reqResId;
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceConfigure__configure(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__resId);
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__granted(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__resId);
}

# 107 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/MeasureClockC.nc"
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

# 53 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/timerSync/Atm128Calibrate.nc"
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
# 59 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP__Admux2int(Atm128Admux_t x)
#line 59
{
#line 59
  union __nesc_unnamed4358 {
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

# 58 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__setAdmux(Atm128Admux_t admux){
#line 58
  HplAtm128AdcP__HplAtm128Adc__setAdmux(admux);
#line 58
}
#line 58
# 139 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/Atm128AdcP.nc"
static __inline bool Atm128AdcP__isPrecise(Atm128Admux_t admux, uint8_t channel, uint8_t refVoltage)
#line 139
{
  return refVoltage == admux.refs && ((
  channel <= ATM128_ADC_SNGL_ADC7 || channel >= ATM128_ADC_SNGL_1_23) || channel == admux.mux);
}

# 49 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline Atm128Admux_t HplAtm128AdcP__HplAtm128Adc__getAdmux(void )
#line 49
{
  return * (Atm128Admux_t *)& * (volatile uint8_t *)(0x07 + 0x20);
}

# 53 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/HplAtm128Adc.nc"
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
# 204 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/Atm128AdcP.nc"
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

# 70 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/Atm128AdcSingle.nc"
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
# 194 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreenP.nc"
static inline uint8_t TouchScreenP__Atm128AdcConfig__getChannel(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      {
        unsigned char __nesc_temp = 
#line 198
        TouchScreenP__channel;

        {
#line 198
          __nesc_atomic_end(__nesc_atomic); 
#line 198
          return __nesc_temp;
        }
      }
    }
#line 201
    __nesc_atomic_end(__nesc_atomic); }
}

# 137 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__Atm128AdcConfig__default__getChannel(uint8_t c)
#line 137
{
  return ATM128_ADC_SNGL_GND;
}

# 25 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP__Atm128AdcConfig__getChannel(uint8_t arg_0x2b7b4ac34cd0){
#line 25
  unsigned char result;
#line 25

#line 25
  switch (arg_0x2b7b4ac34cd0) {
#line 25
    case /*TouchScreenC.AdcReadClientC*/AdcReadClientC__0__ID:
#line 25
      result = TouchScreenP__Atm128AdcConfig__getChannel();
#line 25
      break;
#line 25
    default:
#line 25
      result = AdcP__Atm128AdcConfig__default__getChannel(arg_0x2b7b4ac34cd0);
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
# 70 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__channel(void )
#line 70
{
  return AdcP__Atm128AdcConfig__getChannel(AdcP__client);
}

# 189 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreenP.nc"
static inline uint8_t TouchScreenP__Atm128AdcConfig__getRefVoltage(void )
{
  return 1;
}

# 141 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__Atm128AdcConfig__default__getRefVoltage(uint8_t c)
#line 141
{
  return ATM128_ADC_VREF_OFF;
}

# 32 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP__Atm128AdcConfig__getRefVoltage(uint8_t arg_0x2b7b4ac34cd0){
#line 32
  unsigned char result;
#line 32

#line 32
  switch (arg_0x2b7b4ac34cd0) {
#line 32
    case /*TouchScreenC.AdcReadClientC*/AdcReadClientC__0__ID:
#line 32
      result = TouchScreenP__Atm128AdcConfig__getRefVoltage();
#line 32
      break;
#line 32
    default:
#line 32
      result = AdcP__Atm128AdcConfig__default__getRefVoltage(arg_0x2b7b4ac34cd0);
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
# 74 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__refVoltage(void )
#line 74
{
  return AdcP__Atm128AdcConfig__getRefVoltage(AdcP__client);
}

# 202 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreenP.nc"
static inline uint8_t TouchScreenP__Atm128AdcConfig__getPrescaler(void )
{
  return ATM128_ADC_PRESCALE_128;
}

# 145 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__Atm128AdcConfig__default__getPrescaler(uint8_t c)
#line 145
{
  return ATM128_ADC_PRESCALE_2;
}

# 39 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static uint8_t AdcP__Atm128AdcConfig__getPrescaler(uint8_t arg_0x2b7b4ac34cd0){
#line 39
  unsigned char result;
#line 39

#line 39
  switch (arg_0x2b7b4ac34cd0) {
#line 39
    case /*TouchScreenC.AdcReadClientC*/AdcReadClientC__0__ID:
#line 39
      result = TouchScreenP__Atm128AdcConfig__getPrescaler();
#line 39
      break;
#line 39
    default:
#line 39
      result = AdcP__Atm128AdcConfig__default__getPrescaler(arg_0x2b7b4ac34cd0);
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
# 78 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP__prescaler(void )
#line 78
{
  return AdcP__Atm128AdcConfig__getPrescaler(AdcP__client);
}

# 40 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreenP.nc"
static inline void TouchScreenP__checkTS__runTask(void )
{
  TouchScreenP__TouchScreen__getXY();
}

# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t MP3TestC__readMMCData__postTask(void ){
#line 67
  unsigned char result;
#line 67

#line 67
  result = SchedulerBasicP__TaskBasic__postTask(MP3TestC__readMMCData);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 120 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
inline static error_t MP3P__SPI0__release(void ){
#line 120
  unsigned char result;
#line 120

#line 120
  result = /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__Resource__release(/*MP3C.SPI0*/SoftSPIMasterC__0__RESOURCE_ID);
#line 120

#line 120
  return result;
#line 120
}
#line 120
# 55 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortF.Bit3*/HplAtm128GeneralIOPinP__43__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )98U |= 1 << 3;
}

# 40 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void MP3P__BSYNC__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortF.Bit3*/HplAtm128GeneralIOPinP__43__IO__set();
#line 40
}
#line 40
# 61 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )49U |= 1 << 5;
}

# 46 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void SoftSPIP__spiMOSI__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortD.Bit5*/HplAtm128GeneralIOPinP__29__IO__makeOutput();
#line 46
}
#line 46
# 61 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP__27__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )49U |= 1 << 3;
}

# 46 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void SoftSPIP__spiSCK__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortD.Bit3*/HplAtm128GeneralIOPinP__27__IO__makeOutput();
#line 46
}
#line 46
# 15 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/SoftSPI/SoftSPIP.nc"
static __inline error_t SoftSPIP__SoftSPI__sendByte(uint8_t msg)
#line 15
{


  SoftSPIP__spiSCK__makeOutput();
  SoftSPIP__spiMOSI__makeOutput();

   __asm volatile (";*****************************\n"
  "bst %0,7; store bit in T flag\n"
  "sbi %1, %2; set MOSI to high\n"
  "cbi %1, %3; SCK to LOW\n"
  "brts tset7\n"
  "cbi %1, %2\n"
  "tset7:\n"
  ";already set - wos not deleted\n"
  "sbi %1, %3; SCK to high\n"
  ";*****************************\n"
  ";*****************************\n"
  "bst %0,6; store bit in T flag\n"
  "sbi %1, %2; set MOSI to high\n"
  "cbi %1, %3; SCK to LOW\n"
  "brts tset6\n"
  "cbi %1, %2\n"
  "tset6:\n"
  ";already set - wos not deleted\n"
  "sbi %1, %3; SCK to high\n"
  ";*****************************\n"
  ";*****************************\n"
  "bst %0,5; store bit in T flag\n"
  "sbi %1, %2; set MOSI to high\n"
  "cbi %1, %3; SCK to LOW\n"
  "brts tset5\n"
  "cbi %1, %2\n"
  "tset5:\n"
  ";already set - wos not deleted\n"
  "sbi %1, %3; SCK to high\n"
  ";*****************************\n"
  ";*****************************\n"
  "bst %0,4; store bit in T flag\n"
  "sbi %1, %2; set MOSI to high\n"
  "cbi %1, %3; SCK to LOW\n"
  "brts tset4\n"
  "cbi %1, %2\n"
  "tset4:\n"
  ";already set - wos not deleted\n"
  "sbi %1, %3; SCK to high\n"
  ";*****************************\n"
  ";*****************************\n"
  "bst %0,3; store bit in T flag\n"
  "sbi %1, %2; set MOSI to high\n"
  "cbi %1, %3; SCK to LOW\n"
  "brts tset3\n"
  "cbi %1, %2\n"
  "tset3:\n"
  ";already set - wos not deleted\n"
  "sbi %1, %3; SCK to high\n"
  ";*****************************\n"
  ";*****************************\n"
  "bst %0,2; store bit in T flag\n"
  "sbi %1, %2; set MOSI to high\n"
  "cbi %1, %3; SCK to LOW\n"
  "brts tset2\n"
  "cbi %1, %2\n"
  "tset2:\n"
  ";already set - wos not deleted\n"
  "sbi %1, %3; SCK to high\n"
  ";*****************************\n"
  ";*****************************\n"
  "bst %0,1; store bit in T flag\n"
  "sbi %1, %2; set MOSI to high\n"
  "cbi %1, %3; SCK to LOW\n"
  "brts tset1\n"
  "cbi %1, %2\n"
  "tset1:\n"
  ";already set - wos not deleted\n"
  "sbi %1, %3; SCK to high\n"
  ";*****************************\n"
  ";*****************************\n"
  "bst %0,0; store bit in T flag\n"
  "sbi %1, %2; set MOSI to high\n"
  "cbi %1, %3; SCK to LOW\n"
  "brts tset0\n"
  "cbi %1, %2\n"
  "tset0:\n"
  ";already set - wos not deleted\n"
  "sbi %1, %3; SCK to high\n"
  ";*****************************\n" :  : 
  "r"(msg), "I"((uint16_t )& * (volatile uint8_t *)(0x12 + 0x20) - 0x20), "I"(5), "I"(3));
  return SUCCESS;
}

# 9 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/SoftSPI/SoftSPI.nc"
static error_t SoftSPIImplP__SoftSPI__sendByte(uint8_t msg){
#line 9
  unsigned char result;
#line 9

#line 9
  result = SoftSPIP__SoftSPI__sendByte(msg);
#line 9

#line 9
  return result;
#line 9
}
#line 9
# 98 "/homes/mhartmann/baq/tinyos/tos/interfaces/ArbiterInfo.nc"
inline static uint8_t SoftSPIImplP__ArbiterInfo__userId(void ){
#line 98
  unsigned char result;
#line 98

#line 98
  result = /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ArbiterInfo__userId();
#line 98

#line 98
  return result;
#line 98
}
#line 98
# 14 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/SoftSPI/SoftSPIImplP.nc"
static __inline error_t SoftSPIImplP__SoftSPIMaster__sendByte(uint8_t id, uint8_t msg)
#line 14
{
  if (SoftSPIImplP__ArbiterInfo__userId() == id) {
      SoftSPIImplP__SoftSPI__sendByte(msg);
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 17
        SoftSPIImplP__current_id = id;
#line 17
        __nesc_atomic_end(__nesc_atomic); }
      return SUCCESS;
    }
  return FAIL;
}

# 9 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/SoftSPI/SoftSPI.nc"
static error_t MP3P__SoftSPI0__sendByte(uint8_t msg){
#line 9
  unsigned char result;
#line 9

#line 9
  result = SoftSPIImplP__SoftSPIMaster__sendByte(/*MP3C.SPI0*/SoftSPIMasterC__0__RESOURCE_ID, msg);
#line 9

#line 9
  return result;
#line 9
}
#line 9
# 56 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortF.Bit3*/HplAtm128GeneralIOPinP__43__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )98U &= ~(1 << 3);
}

# 41 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void MP3P__BSYNC__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortF.Bit3*/HplAtm128GeneralIOPinP__43__IO__clr();
#line 41
}
#line 41
# 97 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
inline static error_t MP3P__SPI0__immediateRequest(void ){
#line 97
  unsigned char result;
#line 97

#line 97
  result = /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__Resource__immediateRequest(/*MP3C.SPI0*/SoftSPIMasterC__0__RESOURCE_ID);
#line 97

#line 97
  return result;
#line 97
}
#line 97
# 124 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/MP3/MP3P.nc"
static inline error_t MP3P__MP3__writeData(uint8_t *data, uint8_t len)
#line 124
{
  uint8_t i;

  MP3P__SPI0__immediateRequest();





  MP3P__BSYNC__clr();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 134
    {
      for (i = 0; i < len; i++) {
          MP3P__SoftSPI0__sendByte(data[i]);
        }
    }
#line 138
    __nesc_atomic_end(__nesc_atomic); }
  MP3P__BSYNC__set();
  MP3P__SPI0__release();
  return SUCCESS;
}

# 5 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/MP3/MP3.nc"
inline static error_t MP3TestC__MP3__writeData(uint8_t *data, uint8_t len){
#line 5
  unsigned char result;
#line 5

#line 5
  result = MP3P__MP3__writeData(data, len);
#line 5

#line 5
  return result;
#line 5
}
#line 5
# 54 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortF.Bit2*/HplAtm128GeneralIOPinP__42__IO__get(void )
#line 54
{
#line 54
  return (* (volatile uint8_t * )32U & (1 << 2)) != 0;
}

# 43 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static bool MP3P__DREQ__get(void ){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*HplAtm128GeneralIOC.PortF.Bit2*/HplAtm128GeneralIOPinP__42__IO__get();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 77 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/MP3/MP3P.nc"
static inline bool MP3P__MP3__isReady(void )
#line 77
{
  return MP3P__DREQ__get();
}

# 9 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/MP3/MP3.nc"
inline static bool MP3TestC__MP3__isReady(void ){
#line 9
  unsigned char result;
#line 9

#line 9
  result = MP3P__MP3__isReady();
#line 9

#line 9
  return result;
#line 9
}
#line 9
# 125 "MP3TestC.nc"
static inline void MP3TestC__writeMP3Data__runTask(void )
#line 125
{
  if (MP3TestC__MP3__isReady()) {
      MP3TestC__MP3__writeData(MP3TestC__dataBuffer, MP3TestC__BLOCK_SIZE);
      MP3TestC__readMMCData__postTask();
    }
  else 
#line 129
    {
      MP3TestC__writeMP3Data__postTask();
    }
}

# 206 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
static inline void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id)
#line 206
{
}

# 61 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceRequested.nc"
inline static void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(uint8_t arg_0x2b7b4a75e7e8){
#line 61
    /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(arg_0x2b7b4a75e7e8);
#line 61
}
#line 61
# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char result;
#line 67

#line 67
  result = SchedulerBasicP__TaskBasic__postTask(/*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__grantedTask);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 133 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
static inline error_t /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void )
#line 133
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 134
    {
      if (/*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__resId == /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__default_owner_id) {
          if (/*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__state == /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__RES_GRANTING) {
              /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
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
            if (/*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__state == /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__RES_IMM_GRANTING) {
                /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__resId = /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__reqResId;
                /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__state = /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__RES_BUSY;
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

#line 213
static inline void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested(void )
#line 213
{
  /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
}

# 81 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested(void ){
#line 81
  /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested();
#line 81
}
#line 81
# 60 "/homes/mhartmann/baq/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline bool /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__qHead == /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceQueue.nc"
inline static bool /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char result;
#line 53

#line 53
  result = /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 68 "/homes/mhartmann/baq/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__qHead != /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
        uint8_t id = /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__qHead;

#line 72
        /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__qHead = /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[/*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__qHead];
        if (/*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__qHead == /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__qTail = /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
          }
#line 75
        /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[id] = /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
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
      /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char result;
#line 70

#line 70
  result = /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 218 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
static inline void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceConfigure.nc"
inline static void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x2b7b4a75c9b8){
#line 65
    /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x2b7b4a75c9b8);
#line 65
}
#line 65
# 208 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
static inline void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void )
#line 208
{
}

# 46 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void ){
#line 46
  /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted();
#line 46
}
#line 46
# 64 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
inline static error_t MP3TestC__GLCD__startWriteString(char *data, uint8_t x, uint8_t y){
#line 64
  unsigned char result;
#line 64

#line 64
  result = GLCDP__GLCD__startWriteString(data, x, y);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 189 "MP3TestC.nc"
static inline void MP3TestC__MMC__error(uint8_t *errStr)
#line 189
{
  MP3TestC__dataReady = FALSE;
  MP3TestC__GLCD__startWriteString((char *)errStr, 5, 1);
}

# 11 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/mmc/MMC.nc"
inline static void MMCP__MMC__error(uint8_t *errStr){
#line 11
  MP3TestC__MMC__error(errStr);
#line 11
}
#line 11
# 88 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
inline static error_t MMCP__Resource__request(void ){
#line 88
  unsigned char result;
#line 88

#line 88
  result = Atm128SpiP__Resource__request(0);
#line 88

#line 88
  return result;
#line 88
}
#line 88
# 55 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOSlowPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.G2*/HplAtm128GeneralIOSlowPinP__10__IO__get(void )
#line 55
{
#line 55
  return (* (volatile uint8_t * )99U & (1 << 2)) != 0;
}

# 43 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static bool MMCP__cdMMC__get(void ){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*HplAtm128GeneralIOC.G2*/HplAtm128GeneralIOSlowPinP__10__IO__get();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 45 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/mmc/MMCP.nc"
static inline uint8_t MMCP__MMC__readBlock(uint32_t addr)
{
  uint8_t rc = 0;

#line 48
  if (MMCP__state != READY) 
    {
      MMCP__MMC__error((uint8_t *)"FAIL: BUSY\0");
      return FAIL;
    }
  else {
#line 53
    if (MMCP__cdMMC__get() == TRUE) 
      {
        MMCP__MMC__error((uint8_t *)"FAIL: MMC EJECTED\0");
        return FAIL;
      }
    else 
      {
        rc = MMCP__Resource__request();
        if (rc == EBUSY) 
          {
            MMCP__MMC__error((uint8_t *)"READ ERROR\0");
            return FAIL;
          }
        else 
          {
            MMCP__state = READ;
            MMCP__mmcAddr = addr << 5;
            return SUCCESS;
          }
      }
    }
}

# 5 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/mmc/MMC.nc"
inline static uint8_t MP3TestC__MMC__readBlock(uint32_t addr){
#line 5
  unsigned char result;
#line 5

#line 5
  result = MMCP__MMC__readBlock(addr);
#line 5

#line 5
  return result;
#line 5
}
#line 5
# 119 "MP3TestC.nc"
static inline void MP3TestC__readMMCData__runTask(void )
#line 119
{
  if (MP3TestC__play) {
      MP3TestC__MMC__readBlock(MP3TestC__blockAddr);
    }
}

# 217 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClock(uint8_t v)
#line 217
{
  v &= 1 | 0;
  * (volatile uint8_t *)(0x0D + 0x20) = (* (volatile uint8_t *)(0x0D + 0x20) & ~(1 | 0)) | v;
}

# 131 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClock(uint8_t speed){
#line 131
  HplAtm128SpiP__SPI__setClock(speed);
#line 131
}
#line 131
# 200 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing)
#line 200
{
  if (sampleOnTrailing) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 2;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 2);
    }
}

# 128 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClockPhase(bool sampleOnTrailing){
#line 128
  HplAtm128SpiP__SPI__setClockPhase(sampleOnTrailing);
#line 128
}
#line 128
# 186 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle)
#line 186
{
  if (highWhenIdle) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 3;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 3);
    }
}

# 125 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClockPolarity(bool highWhenIdle){
#line 125
  HplAtm128SpiP__SPI__setClockPolarity(highWhenIdle);
#line 125
}
#line 125
# 230 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on)
#line 230
{
  if (on) {
      * (volatile uint8_t *)(0x0E + 0x20) |= 1 << 0;
    }
  else {
      * (volatile uint8_t *)(0x0E + 0x20) &= ~(1 << 0);
    }
}

# 142 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setMasterDoubleSpeed(bool on){
#line 142
  HplAtm128SpiP__SPI__setMasterDoubleSpeed(on);
#line 142
}
#line 142
#line 113
inline static void Atm128SpiP__Spi__enableInterrupt(bool enabled){
#line 113
  HplAtm128SpiP__SPI__enableInterrupt(enabled);
#line 113
}
#line 113
# 173 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setMasterBit(bool isMaster)
#line 173
{
  if (isMaster) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 4;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 4);
    }
}

# 61 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )55U |= 1 << 1;
}

# 46 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__SCK__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput();
#line 46
}
#line 46
# 59 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )55U &= ~(1 << 3);
}

# 44 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__MISO__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput();
#line 44
}
#line 44
# 61 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )55U |= 1 << 2;
}

# 46 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__MOSI__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput();
#line 46
}
#line 46
# 96 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__initMaster(void )
#line 96
{
  HplAtm128SpiP__MOSI__makeOutput();
  HplAtm128SpiP__MISO__makeInput();
  HplAtm128SpiP__SCK__makeOutput();
  HplAtm128SpiP__SPI__setMasterBit(TRUE);
}

# 83 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__initMaster(void ){
#line 83
  HplAtm128SpiP__SPI__initMaster();
#line 83
}
#line 83
# 120 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__startSpi(void )
#line 120
{
  Atm128SpiP__Spi__enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 122
  {
    Atm128SpiP__Spi__initMaster();
    Atm128SpiP__Spi__enableInterrupt(FALSE);
    Atm128SpiP__Spi__setMasterDoubleSpeed(TRUE);
    Atm128SpiP__Spi__setClockPolarity(FALSE);
    Atm128SpiP__Spi__setClockPhase(FALSE);
    Atm128SpiP__Spi__setClock(0);
    Atm128SpiP__Spi__enableSpi(TRUE);
  }
  Atm128SpiP__McuPowerState__update();
}

# 64 "/homes/mhartmann/baq/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[id] != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY || /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__isEnqueued(id)) {
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qHead = id;
          }
        else {
#line 88
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail] = id;
          }
#line 89
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__qTail = id;
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
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char result;
#line 79

#line 79
  result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__FcfsQueue__enqueue(id);
#line 79

#line 79
  return result;
#line 79
}
#line 79
# 167 "/homes/mhartmann/baq/tinyos/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 167
{
}

# 53 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(uint8_t arg_0x2b7b4ae8a2f0){
#line 53
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(arg_0x2b7b4ae8a2f0);
#line 53
}
#line 53
# 71 "/homes/mhartmann/baq/tinyos/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id)
#line 71
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 73
    {
      if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId = id;
          /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
          {
            unsigned char __nesc_temp = 
#line 78
            SUCCESS;

            {
#line 78
              __nesc_atomic_end(__nesc_atomic); 
#line 78
              return __nesc_temp;
            }
          }
        }
#line 80
      {
        unsigned char __nesc_temp = 
#line 80
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(id);

        {
#line 80
          __nesc_atomic_end(__nesc_atomic); 
#line 80
          return __nesc_temp;
        }
      }
    }
#line 83
    __nesc_atomic_end(__nesc_atomic); }
}

# 88 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
inline static error_t Atm128SpiP__ResourceArbiter__request(uint8_t arg_0x2b7b4adb1060){
#line 88
  unsigned char result;
#line 88

#line 88
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(arg_0x2b7b4adb1060);
#line 88

#line 88
  return result;
#line 88
}
#line 88
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

# 201 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/MP3/MP3P.nc"
static inline void MP3P__Timer0__fired(void )
#line 201
{
}

# 55 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP__25__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )50U |= 1 << 1;
}

# 40 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void MP3P__CS__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP__25__IO__set();
#line 40
}
#line 40
# 59 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )49U &= ~(1 << 4);
}

# 44 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void SoftSPIP__spiMISO__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput();
#line 44
}
#line 44
# 105 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/SoftSPI/SoftSPIP.nc"
static __inline error_t SoftSPIP__SoftSPI__receiveByte(uint8_t *data)
#line 105
{

  uint8_t ret;


  SoftSPIP__spiSCK__makeOutput();
  SoftSPIP__spiMISO__makeInput();

   __asm volatile (";init return value and clock\n"
  "cbi %1, %4; SCK to LOW; cbi port, sck\n"
  "ldi %0, 0x00; ldi ret, 0x00\n"
  "nop;\n"
  ";---------------\n"
  ";read byte\n"
  ";---------------\n"
  ";*****************************\n"
  "sbi %1, %4; sbi port, sck; SCK to high\n"
  "sbic %2, %3; sbic pin, miso; bit is already set to 0\n"
  "sbr %0, 0b10000000; sbr ret, 0b10000000; set bit to 1\n"
  "cbi %1, %4; SCK to LOW; cbi port, sck\n"
  "nop\n"
  "nop\n"
  ";*****************************\n"
  ";*****************************\n"
  "sbi %1, %4; sbi port, sck; SCK to high\n"
  "sbic %2, %3; sbic pin, miso; bit is already set to 0\n"
  "sbr %0, 0b01000000; sbr ret, 0b01000000; set bit to 1\n"
  "cbi %1, %4; SCK to LOW; cbi port, sck\n"
  "nop\n"
  "nop\n"
  ";*****************************\n"
  ";*****************************\n"
  "sbi %1, %4; sbi port, sck; SCK to high\n"
  "sbic %2, %3; sbic pin, miso; bit is already set to 0\n"
  "sbr %0, 0b00100000; sbr ret, 0b00100000; set bit to 1\n"
  "cbi %1, %4; SCK to LOW; cbi port, sck\n"
  "nop\n"
  "nop\n"
  ";*****************************\n"
  ";*****************************\n"
  "sbi %1, %4; sbi port, sck; SCK to high\n"
  "sbic %2, %3; sbic pin, miso; bit is already set to 0\n"
  "sbr %0, 0b00010000; sbr ret, 0b00010000; set bit to 1\n"
  "cbi %1, %4; SCK to LOW; cbi port, sck\n"
  "nop\n"
  "nop\n"
  ";*****************************\n"
  ";*****************************\n"
  "sbi %1, %4; sbi port, sck; SCK to high\n"
  "sbic %2, %3; sbic pin, miso; bit is already set to 0\n"
  "sbr %0, 0b00001000; sbr ret, 0b00001000; set bit to 1\n"
  "cbi %1, %4; SCK to LOW; cbi port, sck\n"
  "nop\n"
  "nop\n"
  ";*****************************\n"
  ";*****************************\n"
  "sbi %1, %4; sbi port, sck; SCK to high\n"
  "sbic %2, %3; sbic pin, miso; bit is already set to 0\n"
  "sbr %0, 0b00000100; sbr ret, 0b00000100; set bit to 1\n"
  "cbi %1, %4; SCK to LOW; cbi port, sck\n"
  "nop\n"
  "nop\n"
  ";*****************************\n"
  ";*****************************\n"
  "sbi %1, %4; sbi port, sck; SCK to high\n"
  "sbic %2, %3; sbic pin, miso; bit is already set to 0\n"
  "sbr %0, 0b00000010; sbr ret, 0b00000010; set bit to 1\n"
  "cbi %1, %4; SCK to LOW; cbi port, sck\n"
  "nop\n"
  "nop\n"
  ";*****************************\n"
  ";*****************************\n"
  "sbi %1, %4; sbi port, sck; SCK to high\n"
  "sbic %2, %3; sbic pin, miso; bit is already set to 0\n"
  "sbr %0, 0b00000001; sbr ret, 0b00000001; set bit to 1\n"
  "cbi %1, %4; SCK to LOW; cbi port, sck\n"
  "nop\n"
  "nop\n"
  ";*****************************\n" : 
  "=d"(ret) : "I"((uint16_t )& * (volatile uint8_t *)(0x12 + 0x20) - 0x20), "I"((uint16_t )& * (volatile uint8_t *)(0x10 + 0x20) - 0x20), "I"(4), "I"(3));

  memcpy(data, &ret, 1);
  return SUCCESS;
}

# 12 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/SoftSPI/SoftSPI.nc"
static error_t SoftSPIImplP__SoftSPI__receiveByte(uint8_t *data){
#line 12
  unsigned char result;
#line 12

#line 12
  result = SoftSPIP__SoftSPI__receiveByte(data);
#line 12

#line 12
  return result;
#line 12
}
#line 12
# 23 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/SoftSPI/SoftSPIImplP.nc"
static __inline error_t SoftSPIImplP__SoftSPIMaster__receiveByte(uint8_t id, uint8_t *data)
#line 23
{
  if (SoftSPIImplP__ArbiterInfo__userId() == id) {
      SoftSPIImplP__SoftSPI__receiveByte(data);
      /* atomic removed: atomic calls only */
#line 26
      SoftSPIImplP__current_id = id;
      return SUCCESS;
    }
  return FAIL;
}

# 12 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/SoftSPI/SoftSPI.nc"
static error_t MP3P__SoftSPI0__receiveByte(uint8_t *data){
#line 12
  unsigned char result;
#line 12

#line 12
  result = SoftSPIImplP__SoftSPIMaster__receiveByte(/*MP3C.SPI0*/SoftSPIMasterC__0__RESOURCE_ID, data);
#line 12

#line 12
  return result;
#line 12
}
#line 12
# 56 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP__25__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )50U &= ~(1 << 1);
}

# 41 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void MP3P__CS__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP__25__IO__clr();
#line 41
}
#line 41
# 88 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/MP3/MP3P.nc"
static inline uint16_t MP3P__MP3__readRegister(uint8_t mp3Register)
#line 88
{
  uint8_t tmp;
  uint16_t ret;

  MP3P__SPI0__immediateRequest();
  MP3P__CS__clr();

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 95
    {
      MP3P__SoftSPI0__sendByte(MP3P__MP3_READ);
      MP3P__SoftSPI0__sendByte(mp3Register);
      MP3P__SoftSPI0__receiveByte(&tmp);
      ret = tmp;
      ret <<= 8;
      MP3P__SoftSPI0__receiveByte(&tmp);
      ret |= tmp;
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  MP3P__CS__set();
  MP3P__SPI0__release();
  return ret;
}

# 4 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/MP3/MP3.nc"
inline static uint16_t MP3TestC__MP3__readRegister(uint8_t mp3Register){
#line 4
  unsigned short result;
#line 4

#line 4
  result = MP3P__MP3__readRegister(mp3Register);
#line 4

#line 4
  return result;
#line 4
}
#line 4
# 134 "MP3TestC.nc"
static inline void MP3TestC__Timer0__fired(void )
#line 134
{
  uint16_t temp = 0;

#line 136
  if (MP3TestC__MP3__isReady()) {
      MP3TestC__playTime[0] = '0';
      MP3TestC__playTime[1] = '0';
      MP3TestC__playTime[3] = '0';
      MP3TestC__playTime[4] = '0';
      temp = MP3TestC__MP3__readRegister(0x04);
      while (temp >= 600) {
          temp -= 600;
          MP3TestC__playTime[0]++;
        }
      while (temp >= 60) {
          temp -= 60;
          MP3TestC__playTime[1]++;
        }
      while (temp >= 10) {
          temp -= 10;
          MP3TestC__playTime[3]++;
        }
      MP3TestC__playTime[4] += temp;
      MP3TestC__GLCD__startWriteString(MP3TestC__playTime, 84, 0);
    }
}

#line 172
static inline void MP3TestC__Timer1__fired(void )
#line 172
{
  MP3TestC__keypressed = FALSE;
}

# 206 "/homes/mhartmann/baq/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x2b7b4a946778){
#line 83
  switch (arg_0x2b7b4a946778) {
#line 83
    case 0U:
#line 83
      MP3P__Timer0__fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      MP3TestC__Timer0__fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      MP3TestC__Timer1__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x2b7b4a946778);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
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

# 204 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/MP3/MP3P.nc"
static inline void MP3P__SPI0__granted(void )
#line 204
{
}

# 202 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
static inline void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "/homes/mhartmann/baq/tinyos/tos/interfaces/Resource.nc"
inline static void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__Resource__granted(uint8_t arg_0x2b7b4a75f658){
#line 102
  switch (arg_0x2b7b4a75f658) {
#line 102
    case /*MP3C.SPI0*/SoftSPIMasterC__0__RESOURCE_ID:
#line 102
      MP3P__SPI0__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__Resource__default__granted(arg_0x2b7b4a75f658);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 216 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
static inline void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "/homes/mhartmann/baq/tinyos/tos/interfaces/ResourceConfigure.nc"
inline static void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x2b7b4a75c9b8){
#line 59
    /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(arg_0x2b7b4a75c9b8);
#line 59
}
#line 59
# 190 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
static inline void /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__resId = /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__reqResId;
      /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__state = /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__resId);
  /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__Resource__granted(/*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__resId);
}

# 55 "/homes/mhartmann/baq/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init(void )
#line 55
{
  memset(/*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__resQ, /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
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
    x.bits.cs = 4;
    x.bits.wgm1 = 1;
    /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__TimerCtrl__setControl(x);
    /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__MAXT);
    /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Compare__start();
  }
  /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__setInterrupt();
  return SUCCESS;
}

# 61 "/homes/mhartmann/baq/tinyos/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__Init__init(void )
#line 61
{
  memset(/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ, 0, sizeof /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ);
  return SUCCESS;
}

# 55 "/homes/mhartmann/baq/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init(void )
#line 55
{
  memset(/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__NO_ENTRY, sizeof /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__resQ);
  return SUCCESS;
}

# 62 "/homes/mhartmann/baq/tinyos/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char result;
#line 62

#line 62
  result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__1__Init__init();
#line 62
  result = ecombine(result, /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__Init__init());
#line 62
  result = ecombine(result, /*AlarmCounterMilliP.Atm128AlarmSyncC.Atm128AlarmSyncP*/Atm128AlarmSyncP__0__Init__init());
#line 62
  result = ecombine(result, /*SoftSPIMasterP.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init());
#line 62

#line 62
  return result;
#line 62
}
#line 62
# 8 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/MP3/MP3.nc"
inline static error_t MP3TestC__MP3__setVolume(uint8_t volume){
#line 8
  unsigned char result;
#line 8

#line 8
  result = MP3P__MP3__setVolume(volume);
#line 8

#line 8
  return result;
#line 8
}
#line 8
# 166 "/homes/mhartmann/baq/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

# 78 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
inline static void MP3P__Timer0__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(0U);
#line 78
}
#line 78
# 191 "/homes/mhartmann/baq/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
}

# 136 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
inline static uint32_t MP3P__Timer0__getNow(void ){
#line 136
  unsigned long result;
#line 136

#line 136
  result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(0U);
#line 136

#line 136
  return result;
#line 136
}
#line 136
# 55 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )50U |= 1 << 2;
}

# 40 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void MP3P__RST__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__set();
#line 40
}
#line 40
# 56 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )50U &= ~(1 << 2);
}

# 41 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void MP3P__RST__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__clr();
#line 41
}
#line 41
# 59 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortF.Bit2*/HplAtm128GeneralIOPinP__42__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )97U &= ~(1 << 2);
}

# 44 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void MP3P__DREQ__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortF.Bit2*/HplAtm128GeneralIOPinP__42__IO__makeInput();
#line 44
}
#line 44
# 61 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortF.Bit3*/HplAtm128GeneralIOPinP__43__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )97U |= 1 << 3;
}

# 46 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void MP3P__BSYNC__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortF.Bit3*/HplAtm128GeneralIOPinP__43__IO__makeOutput();
#line 46
}
#line 46
# 61 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )49U |= 1 << 2;
}

# 46 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void MP3P__RST__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortD.Bit2*/HplAtm128GeneralIOPinP__26__IO__makeOutput();
#line 46
}
#line 46
# 61 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP__25__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )49U |= 1 << 1;
}

# 46 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void MP3P__CS__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP__25__IO__makeOutput();
#line 46
}
#line 46
# 73 "/homes/mhartmann/baq/tinyos/tos/lib/timer/Timer.nc"
inline static void MP3P__Timer0__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(0U, dt);
#line 73
}
#line 73
# 34 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/MP3/MP3P.nc"
static inline error_t MP3P__MP3__init(void )
#line 34
{

  MP3P__Timer0__startOneShot(1000);


  MP3P__CS__makeOutput();
  MP3P__RST__makeOutput();
  MP3P__BSYNC__makeOutput();
  MP3P__CS__set();
  MP3P__RST__set();
  MP3P__BSYNC__set();
  MP3P__DREQ__makeInput();


  MP3P__RST__clr();
  MP3P__RST__set();
  while (!MP3P__MP3__isReady()) {
      ;
    }


  MP3P__MP3__writeRegister(MP3P__CLOCKF, 12500);
  while (!MP3P__MP3__isReady()) {
      ;
    }


  MP3P__MP3__writeRegister(MP3P__MODE, 1 << MP3P__SM_SDINEW);
  while (!MP3P__MP3__isReady()) {
      ;
    }


  MP3P__MP3__setVolume(230);

  if (MP3P__Timer0__getNow() > 50) {
      return FAIL;
    }

  MP3P__Timer0__stop();
  return SUCCESS;
}

# 2 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/MP3/MP3.nc"
inline static error_t MP3TestC__MP3__init(void ){
#line 2
  unsigned char result;
#line 2

#line 2
  result = MP3P__MP3__init();
#line 2

#line 2
  return result;
#line 2
}
#line 2
# 194 "MP3TestC.nc"
static inline void MP3TestC__GLCD__initDone(void )
#line 194
{
  MP3TestC__paintState = MP3TestC__LINE0;
  MP3TestC__paintLCD();
}

# 70 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
inline static void GLCDP__GLCD__initDone(void ){
#line 70
  MP3TestC__GLCD__initDone();
#line 70
}
#line 70
# 297 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCDP.nc"
static inline void GLCDP__LCD128x64__initDone(void )
{
  GLCDP__GLCD__initDone();
}

# 47 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void LCD128x64P__LCD128x64__initDone(void ){
#line 47
  GLCDP__LCD128x64__initDone();
#line 47
}
#line 47
# 303 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
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

#line 454
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

# 13 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64.nc"
inline static void GLCDP__LCD128x64__initLCD(uint8_t pattern){
#line 13
  LCD128x64P__LCD128x64__initLCD(pattern);
#line 13
}
#line 13
# 164 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCDP.nc"
static inline void GLCDP__GLCD__initLCD(uint8_t pattern)
{
  GLCDP__LCD128x64__initLCD(pattern);
}

# 36 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCD.nc"
inline static void MP3TestC__GLCD__initLCD(uint8_t pattern){
#line 36
  GLCDP__GLCD__initLCD(pattern);
#line 36
}
#line 36
# 59 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )55U &= ~(1 << 7);
}

# 44 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void MP3TestC__Button2__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__makeInput();
#line 44
}
#line 44
# 59 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit6*/HplAtm128GeneralIOPinP__14__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )55U &= ~(1 << 6);
}

# 44 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void MP3TestC__Button1__makeInput(void ){
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
inline static void MP3TestC__Button0__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortB.Bit5*/HplAtm128GeneralIOPinP__13__IO__makeInput();
#line 44
}
#line 44
# 60 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOSlowPinP.nc"
static __inline void /*HplAtm128GeneralIOC.G2*/HplAtm128GeneralIOSlowPinP__10__IO__makeInput(void )
#line 60
{
#line 60
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 60
    * (volatile uint8_t * )100U &= ~(1 << 2);
#line 60
    __nesc_atomic_end(__nesc_atomic); }
}

# 44 "/homes/mhartmann/baq/tinyos/tos/interfaces/GeneralIO.nc"
inline static void MMCP__cdMMC__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.G2*/HplAtm128GeneralIOSlowPinP__10__IO__makeInput();
#line 44
}
#line 44
# 20 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/mmc/MMCP.nc"
static inline uint8_t MMCP__MMC__init(void )
{
  uint8_t rc = 0;

  MMCP__cdMMC__makeInput();

  if (MMCP__cdMMC__get() == TRUE) 
    {
      MMCP__state = EJECTED;
      MMCP__MMC__error((uint8_t *)"FAIL: MMC EJECTED\0");
    }

  MMCP__ssMMC__makeOutput();




  MMCP__ssB0__makeOutput();
  MMCP__ssMMC__set();

  MMCP__state = INITIALIZE;
  rc = MMCP__Resource__request();
  return rc;
}

# 3 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/mmc/MMC.nc"
inline static uint8_t MP3TestC__MMC__init(void ){
#line 3
  unsigned char result;
#line 3

#line 3
  result = MMCP__MMC__init();
#line 3

#line 3
  return result;
#line 3
}
#line 3
# 64 "MP3TestC.nc"
static inline void MP3TestC__Boot__booted(void )
#line 64
{


  MP3TestC__MMC__init();
  MP3TestC__Button0__makeInput();
  MP3TestC__Button1__makeInput();
  MP3TestC__Button2__makeInput();
  MP3TestC__GLCD__initLCD(0x00);


  strncpy(MP3TestC__artist, "AC/DC               ", 20);
  strncpy(MP3TestC__title, "Highway To Hell     ", 20);









  if (!MP3TestC__MP3__init()) {
      MP3TestC__GLCD__startWriteString("MP3 Init Error", 0, 1);
    }
  MP3TestC__MP3__setVolume(MP3TestC__VOLUME);
}

# 60 "/homes/mhartmann/baq/tinyos/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  MP3TestC__Boot__booted();
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
# 55 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/HplAtm128AdcP.nc"
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

# 150 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/HplAtm128Adc.nc"
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
# 262 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline bool Atm128AdcP__Atm128AdcMultiple__default__dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage)
#line 263
{
  return FALSE;
}

# 119 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
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
# 150 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/AdcP.nc"
static inline void AdcP__ReadNow__default__readDone(uint8_t c, error_t e, uint16_t d)
#line 150
{
}

# 66 "/homes/mhartmann/baq/tinyos/tos/interfaces/ReadNow.nc"
inline static void AdcP__ReadNow__readDone(uint8_t arg_0x2b7b4ac0d6d8, error_t result, AdcP__ReadNow__val_t val){
#line 66
    AdcP__ReadNow__default__readDone(arg_0x2b7b4ac0d6d8, result, val);
#line 66
}
#line 66
# 67 "/homes/mhartmann/baq/tinyos/tos/interfaces/TaskBasic.nc"
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
# 108 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/AdcP.nc"
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

# 81 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/Atm128AdcSingle.nc"
inline static void Atm128AdcP__Atm128AdcSingle__dataReady(uint16_t data, bool precise){
#line 81
  AdcP__Atm128AdcSingle__dataReady(data, precise);
#line 81
}
#line 81
# 87 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline void HplAtm128AdcP__HplAtm128Adc__disableInterruption(void )
#line 87
{
#line 87
  * (volatile uint8_t *)(0x06 + 0x20) &= ~(1 << 3);
}

# 95 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void Atm128AdcP__HplAtm128Adc__disableInterruption(void ){
#line 95
  HplAtm128AdcP__HplAtm128Adc__disableInterruption();
#line 95
}
#line 95
# 144 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/Atm128AdcP.nc"
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

# 156 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static void HplAtm128AdcP__HplAtm128Adc__dataReady(uint16_t data){
#line 156
  Atm128AdcP__HplAtm128Adc__dataReady(data);
#line 156
}
#line 156
# 115 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline uint8_t HplAtm128SpiP__SPI__read(void )
#line 115
{
#line 115
  return * (volatile uint8_t *)(0x0F + 0x20);
}

# 97 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128Spi.nc"
inline static uint8_t Atm128SpiP__Spi__read(void ){
#line 97
  unsigned char result;
#line 97

#line 97
  result = HplAtm128SpiP__SPI__read();
#line 97

#line 97
  return result;
#line 97
}
#line 97
# 116 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__write(uint8_t d)
#line 116
{
#line 116
  * (volatile uint8_t *)(0x0F + 0x20) = d;
}

# 103 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__write(uint8_t data){
#line 103
  HplAtm128SpiP__SPI__write(data);
#line 103
}
#line 103
# 210 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP__sendNextPart(void )
#line 210
{
  uint16_t end;
  uint16_t tmpPos;
  uint16_t myLen;
  uint8_t * tx;
  uint8_t * rx;

  /* atomic removed: atomic calls only */
#line 217
  {
    myLen = Atm128SpiP__len;
    tx = Atm128SpiP__txBuffer;
    rx = Atm128SpiP__rxBuffer;
    tmpPos = Atm128SpiP__pos;
    end = Atm128SpiP__pos + Atm128SpiP__SPI_ATOMIC_SIZE;
    end = end > Atm128SpiP__len ? Atm128SpiP__len : end;
  }

  for (; tmpPos < end - 1; tmpPos++) {
      uint8_t val;

#line 228
      if (tx != (void *)0) {
        val = Atm128SpiP__SpiByte__write(tx[tmpPos]);
        }
      else {
#line 231
        val = Atm128SpiP__SpiByte__write(0);
        }
      if (rx != (void *)0) {
          rx[tmpPos] = val;
        }
    }



  Atm128SpiP__Spi__enableInterrupt(TRUE);
  /* atomic removed: atomic calls only */
#line 241
  {
    if (tx != (void *)0) {
      Atm128SpiP__Spi__write(tx[tmpPos]);
      }
    else {
#line 245
      Atm128SpiP__Spi__write(0);
      }
    Atm128SpiP__pos = tmpPos;
  }


  return SUCCESS;
}

#line 313
static inline void Atm128SpiP__Spi__dataReady(uint8_t data)
#line 313
{
  bool again;

  /* atomic removed: atomic calls only */
#line 316
  {
    if (Atm128SpiP__rxBuffer != (void *)0) {
        Atm128SpiP__rxBuffer[Atm128SpiP__pos] = data;
      }

    Atm128SpiP__pos++;
  }
  Atm128SpiP__Spi__enableInterrupt(FALSE);
  /* atomic removed: atomic calls only */
  {
    again = Atm128SpiP__pos < Atm128SpiP__len;
  }

  if (again) {
      Atm128SpiP__sendNextPart();
    }
  else {
      uint8_t discard;
      uint16_t myLen;
      uint8_t * rx;
      uint8_t * tx;

      /* atomic removed: atomic calls only */
#line 338
      {
        myLen = Atm128SpiP__len;
        rx = Atm128SpiP__rxBuffer;
        tx = Atm128SpiP__txBuffer;
        Atm128SpiP__rxBuffer = (void *)0;
        Atm128SpiP__txBuffer = (void *)0;
        Atm128SpiP__len = 0;
        Atm128SpiP__pos = 0;
      }
      discard = Atm128SpiP__Spi__read();

      Atm128SpiP__SpiPacket__sendDone(tx, rx, myLen, SUCCESS);
    }
}

# 109 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void HplAtm128SpiP__SPI__dataReady(uint8_t data){
#line 109
  Atm128SpiP__Spi__dataReady(data);
#line 109
}
#line 109
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
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x2b7b4a4d4108){
#line 75
  switch (arg_0x2b7b4a4d4108) {
#line 75
    case /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__grantedTask:
#line 75
      /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__runTask();
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
    case MP3TestC__readMMCData:
#line 75
      MP3TestC__readMMCData__runTask();
#line 75
      break;
#line 75
    case MP3TestC__writeMP3Data:
#line 75
      MP3TestC__writeMP3Data__runTask();
#line 75
      break;
#line 75
    case TouchScreenP__checkTS:
#line 75
      TouchScreenP__checkTS__runTask();
#line 75
      break;
#line 75
    case /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask:
#line 75
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__grantedTask__runTask();
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
    case Atm128SpiP__zeroTask:
#line 75
      Atm128SpiP__zeroTask__runTask();
#line 75
      break;
#line 75
    case /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask:
#line 75
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x2b7b4a4d4108);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 142 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx)
#line 142
{





  Atm128SpiP__Spi__enableSpi(TRUE);
  Atm128SpiP__McuPowerState__update();

  Atm128SpiP__Spi__write(tx);
  while (!(* (volatile uint8_t *)(0x0E + 0x20) & 0x80)) ;
  return Atm128SpiP__Spi__read();
}

# 147 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static void HplAtm128SpiP__SPI__enableSpi(bool enabled)
#line 147
{
  if (enabled) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 6;
      HplAtm128SpiP__Mcu__update();
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 6);
      HplAtm128SpiP__Mcu__update();
    }
}

# 370 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
static error_t Atm128SpiP__Resource__release(uint8_t id)
#line 370
{
  error_t error = Atm128SpiP__ResourceArbiter__release(id);

#line 372
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 372
    {
      if (!Atm128SpiP__ArbiterInfo__inUse()) {
          Atm128SpiP__stopSpi();
        }
    }
#line 376
    __nesc_atomic_end(__nesc_atomic); }
  return error;
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

# 124 "/homes/mhartmann/baq/tinyos/tos/system/SimpleArbiterP.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse(void )
#line 124
{
  /* atomic removed: atomic calls only */
#line 125
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE) 
      {
        unsigned char __nesc_temp = 
#line 127
        FALSE;

#line 127
        return __nesc_temp;
      }
  }
#line 129
  return TRUE;
}

# 273 "MP3TestC.nc"
static void MP3TestC__forward(void )
#line 273
{

  switch (MP3TestC__track) {
      case 1: 
        MP3TestC__track = 2;
      MP3TestC__blockAddr = MP3TestC__START_2;

      strncpy(MP3TestC__artist, "AC/DC               ", 20);
      strncpy(MP3TestC__title, "Highway To Hell     ", 20);

      MP3TestC__nextAddress = MP3TestC__START_3;
      MP3TestC__playTime[0] = '0';
      MP3TestC__playTime[1] = '3';
      MP3TestC__playTime[3] = '1';
      MP3TestC__playTime[4] = '7';
      break;
      case 2: 
        MP3TestC__track = 3;
      MP3TestC__blockAddr = MP3TestC__START_3;

      strncpy(MP3TestC__artist, "Van Halen           ", 20);
      strncpy(MP3TestC__title, "Jump                ", 20);

      MP3TestC__nextAddress = MP3TestC__END_ADDRESS;
      MP3TestC__playTime[0] = '0';
      MP3TestC__playTime[1] = '4';
      MP3TestC__playTime[3] = '0';
      MP3TestC__playTime[4] = '1';
      break;
      case 3: 
        MP3TestC__track = 1;
      MP3TestC__blockAddr = MP3TestC__START_1;

      strncpy(MP3TestC__artist, "Lady Gaga           ", 20);
      strncpy(MP3TestC__title, "Bad Romance         ", 20);

      MP3TestC__nextAddress = MP3TestC__START_2;
      MP3TestC__playTime[0] = '0';
      MP3TestC__playTime[1] = '4';
      MP3TestC__playTime[3] = '5';
      MP3TestC__playTime[4] = '4';
      break;
    }



  MP3TestC__paintState = MP3TestC__LINE0;
  MP3TestC__paintLCD();
}

#line 373
static void MP3TestC__paintLCD(void )
#line 373
{
  MP3TestC__refresh = TRUE;
  switch (MP3TestC__paintState) {
      case MP3TestC__LINE0: 

        MP3TestC__trackStr[7] = '0' + MP3TestC__track;
      MP3TestC__trackStr[14] = MP3TestC__playTime[0];
      MP3TestC__trackStr[15] = MP3TestC__playTime[1];
      MP3TestC__trackStr[17] = MP3TestC__playTime[3];
      MP3TestC__trackStr[18] = MP3TestC__playTime[4];
      MP3TestC__GLCD__startWriteString(MP3TestC__trackStr, 0, 0);

      MP3TestC__paintState = MP3TestC__LINE1;
      break;
      case MP3TestC__LINE1: 
        MP3TestC__GLCD__startWriteString(MP3TestC__artist, 0, 1);
      MP3TestC__paintState = MP3TestC__LINE2;
      break;
      case MP3TestC__LINE2: 
        MP3TestC__GLCD__startWriteString(MP3TestC__title, 0, 2);
      MP3TestC__paintState = MP3TestC__LINE3;
      break;
      case MP3TestC__LINE3: 
        if (MP3TestC__play) {
            MP3TestC__GLCD__startWriteString("<<     STOP     >>", 10, 5);
          }
        else 
#line 398
          {
            MP3TestC__GLCD__startWriteString("<<     PLAY     >>", 10, 5);
          }
      MP3TestC__paintState = MP3TestC__LINE4;
      break;
      case MP3TestC__LINE4: 
        MP3TestC__GLCD__startWriteRectangle(MP3TestC__RVS_X, MP3TestC__RVS_Y, MP3TestC__RVS_A, MP3TestC__RVS_B);
      MP3TestC__paintState = MP3TestC__LINE5;
      break;
      case MP3TestC__LINE5: 
        MP3TestC__GLCD__startWriteRectangle(MP3TestC__PLAY_X, MP3TestC__PLAY_Y, MP3TestC__PLAY_A, MP3TestC__PLAY_B);
      MP3TestC__paintState = MP3TestC__LINE6;
      break;
      case MP3TestC__LINE6: 
        MP3TestC__GLCD__startWriteRectangle(MP3TestC__FWD_X, MP3TestC__FWD_Y, MP3TestC__FWD_A, MP3TestC__FWD_B);

      MP3TestC__paintState = MP3TestC__NONE;
      MP3TestC__refresh = FALSE;
      MP3TestC__GLCD__isPressed(1);
      break;
      case MP3TestC__LINE7: 
        switch (MP3TestC__track) {
            case 1: 
              MP3TestC__GLCD__startWriteString("1", 42, 0);
            break;
            case 2: 
              MP3TestC__GLCD__startWriteString("2", 42, 0);
            break;
            case 3: 
              MP3TestC__GLCD__startWriteString("3", 42, 0);
            break;
          }
      MP3TestC__paintState = MP3TestC__NONE;
      MP3TestC__refresh = FALSE;
      MP3TestC__GLCD__isPressed(1);
      break;
      case MP3TestC__CALIBRATION: 

        break;
      default: 
        MP3TestC__paintState = MP3TestC__NONE;

      break;
    }
}

# 240 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCDP.nc"
static error_t GLCDP__GLCD__startWriteString(char *data, uint8_t x, uint8_t y)
{
  if ((GLCDP__stateGLCD & BUSY_STRING) == 1) 
    {
      return FAIL;
    }
  else {
#line 246
    if (x >= 128 || y >= 7) 
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

# 482 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
static void LCD128x64P__LCD128x64__startWriteString(char *data, uint8_t x, uint8_t y)
{
  LCD128x64P__xPos[2] = x;
  LCD128x64P__yPos[2] = y;
  LCD128x64P__dataPtr = data;

  LCD128x64P__writeString__postTask();
}

# 202 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/GLCD/GLCDP.nc"
static error_t GLCDP__GLCD__startWriteRectangle(uint8_t x, uint8_t y, uint8_t a, uint8_t b)
{
  if ((GLCDP__stateGLCD & BUSY_RECT) == 1) 
    {
      return FAIL;
    }
  else {
#line 208
    if (x + a >= 128 || y + b >= 64) 
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

# 111 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/lcd128x64/LCD128x64P.nc"
static void LCD128x64P__setAddress(uint8_t xAdd, uint8_t yAdd)
{
  uint8_t tmp;

#line 114
  * (volatile uint8_t *)(0x03 + 0x20) |= 1 << 6;
  * (volatile uint8_t *)(0x03 + 0x20) &= ~(1 << 6);

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

  * (volatile uint8_t *)(0x03 + 0x20) &= ~(1 << 6);

  tmp = yAdd & 0x3f;
  LCD128x64P__writeGLCD(0, tmp | 0xB8);
}

#line 83
static void LCD128x64P__writeGLCD(uint8_t mode, uint8_t data)
{
  LCD128x64P__busyWait4Controller();

  if (mode == 0) 
    {

      * (volatile uint8_t *)(0x03 + 0x20) &= ~((1 << 5) | (1 << 4));
    }
  else 
    {

      * (volatile uint8_t *)(0x03 + 0x20) &= ~(1 << 5);
      * (volatile uint8_t *)(0x03 + 0x20) |= 1 << 4;
    }
   __asm volatile ("nop"); __asm volatile ("nop"); __asm volatile ("nop");
  * (volatile uint8_t *)(0x03 + 0x20) |= 1 << 6;
  * (volatile uint8_t *)(0x1B + 0x20) = data;
   __asm volatile ("nop"); __asm volatile ("nop"); __asm volatile ("nop"); __asm volatile ("nop");
   __asm volatile ("nop"); __asm volatile ("nop");
  * (volatile uint8_t *)(0x03 + 0x20) &= ~(1 << 6);
  * (volatile uint8_t *)(0x03 + 0x20) |= 1 << 5;
   __asm volatile ("nop");
  * (volatile uint8_t *)(0x03 + 0x20) |= 1 << 6;
  * (volatile uint8_t *)(0x1B + 0x20) = 0x00;
}

#line 42
static void LCD128x64P__busyWait4Controller(void )
#line 42
{

  * (volatile uint8_t *)(0x03 + 0x20) |= 1 << 6;
  * (volatile uint8_t *)(0x1A + 0x20) = 0x00;
  * (volatile uint8_t *)(0x03 + 0x20) |= 1 << 5;
  * (volatile uint8_t *)(0x03 + 0x20) &= ~(1 << 4);

  * (volatile uint8_t *)(0x03 + 0x20) &= ~(1 << 6);
   __asm volatile ("nop"); __asm volatile ("nop");
  * (volatile uint8_t *)(0x03 + 0x20) |= 1 << 6;
   __asm volatile ("nop"); __asm volatile ("nop");

  while (* (volatile uint8_t *)(0x19 + 0x20) & 0x80) 
    {
      * (volatile uint8_t *)(0x03 + 0x20) &= ~(1 << 6);
       __asm volatile ("nop"); __asm volatile ("nop");
      * (volatile uint8_t *)(0x03 + 0x20) |= 1 << 6;
       __asm volatile ("nop"); __asm volatile ("nop");}

  * (volatile uint8_t *)(0x1A + 0x20) = 0xFF;
}

#line 178
static void LCD128x64P__LCD128x64__setPixel(uint8_t x, uint8_t y)
{
  unsigned char temp;

  LCD128x64P__setAddress(x, y / 8);
  temp = LCD128x64P__readByte(1);
  LCD128x64P__setAddress(x, y / 8);
  LCD128x64P__writeGLCD(1, temp | (1 << y % 8));
}

# 75 "/homes/mhartmann/baq/tinyos/tos/system/RoundRobinResourceQueueC.nc"
static bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id)
#line 75
{
  return /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] & (1 << id % 8);
}

# 77 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
static error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Resource__request(uint8_t id)
#line 77
{
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceRequested__requested(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 79
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__RES_CONTROLLED) {
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__RES_GRANTING;
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__reqResId = id;
        }
      else {
#line 84
        if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__reqResId == id) {
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
            /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__Queue__enqueue(id);

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
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP__1__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 45 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/TouchScreen/TouchScreenP.nc"
static void TouchScreenP__TouchScreen__getXY(void )
{
  TouchScreenP__state = TouchScreenP__READ_DUMMY;
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
#line 61
    __nesc_atomic_end(__nesc_atomic); }
  TouchScreenP__Read__read();
}

#line 150
static uint16_t TouchScreenP__meanOfFour(void )
#line 150
{
  uint16_t tmp;

  if (TouchScreenP__results[0] > TouchScreenP__results[1]) {
      tmp = TouchScreenP__results[1];
      TouchScreenP__results[1] = TouchScreenP__results[0];
      TouchScreenP__results[0] = tmp;
    }
  if (TouchScreenP__results[2] > TouchScreenP__results[3]) {
      tmp = TouchScreenP__results[3];
      TouchScreenP__results[3] = TouchScreenP__results[2];
      TouchScreenP__results[2] = tmp;
    }

  if (TouchScreenP__results[0] < TouchScreenP__results[2]) {
      tmp = TouchScreenP__results[2];
    }
  else 
#line 166
    {
      tmp = TouchScreenP__results[0];
    }
  if (TouchScreenP__results[1] > TouchScreenP__results[3]) {
      tmp += TouchScreenP__results[3];
    }
  else 
#line 171
    {
      tmp += TouchScreenP__results[1];
    }

  tmp >>= 1;
  return tmp;
}

# 228 "MP3TestC.nc"
static void MP3TestC__GLCD__xyReady(uint16_t x, uint16_t y)
#line 228
{
  uint16_t x_c = x;
  uint16_t y_c = 64 - y;

#line 231
  MP3TestC__GLCD__isPressed(1);
  if (!MP3TestC__keypressed) {
      if (y_c > MP3TestC__RVS_Y) {

          if (x_c < MP3TestC__RVS_X + MP3TestC__RVS_A - 8) {

              MP3TestC__keypressed = TRUE;
              MP3TestC__reverse();
              MP3TestC__Timer1__startOneShot(MP3TestC__PRESS_PAUSE_TIME);
            }
          else 
#line 240
            {
              if (x_c > MP3TestC__PLAY_X + 1 && x_c < MP3TestC__PLAY_X + MP3TestC__PLAY_A - 12) {

                  MP3TestC__keypressed = TRUE;
                  MP3TestC__Timer1__startOneShot(MP3TestC__PRESS_PAUSE_TIME);
                  if (MP3TestC__play) {
                      MP3TestC__play = FALSE;
                      MP3TestC__GLCD__startWriteString("PLAY", 52, 5);
                    }
                  else 
#line 248
                    {
                      MP3TestC__play = TRUE;

                      MP3TestC__readMMCData__postTask();
                      MP3TestC__GLCD__startWriteString("STOP", 52, 5);
                    }
                }
              else 
#line 254
                {
                  if (x_c > MP3TestC__FWD_X + 8 && x_c < 128) {

                      MP3TestC__keypressed = TRUE;
                      MP3TestC__forward();
                      MP3TestC__Timer1__startOneShot(MP3TestC__PRESS_PAUSE_TIME);
                    }
                  else {
                    }
                }
            }
        }
    }
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

# 82 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/AdcP.nc"
static void AdcP__sample(void )
#line 82
{
  AdcP__Atm128AdcSingle__getData(AdcP__channel(), AdcP__refVoltage(), FALSE, AdcP__prescaler());
}

# 93 "/homes/mhartmann/baq/tinyos/tos/system/ArbiterP.nc"
static error_t /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__Resource__immediateRequest(uint8_t id)
#line 93
{
  /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(/*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 95
    {
      if (/*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__state == /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
          /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__state = /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__RES_IMM_GRANTING;
          /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__reqResId = id;
        }
      else {
          unsigned char __nesc_temp = 
#line 100
          FAIL;

          {
#line 100
            __nesc_atomic_end(__nesc_atomic); 
#line 100
            return __nesc_temp;
          }
        }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
#line 102
  /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested();
  if (/*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__resId == id) {
      /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__resId);
      return SUCCESS;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 107
    /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__state = /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
#line 107
    __nesc_atomic_end(__nesc_atomic); }
  return FAIL;
}

#line 166
static uint8_t /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void )
#line 166
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 167
    {
      if (/*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__state != /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__RES_BUSY) 
        {
          unsigned char __nesc_temp = 
#line 169
          /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__NO_RES;

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
        /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__resId;

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

#line 111
static error_t /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__Resource__release(uint8_t id)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    {
      if (/*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__state == /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__RES_BUSY && /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__resId == id) {
          if (/*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__Queue__isEmpty() == FALSE) {
              /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__reqResId = /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__Queue__dequeue();
              /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__resId = /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__NO_RES;
              /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__state = /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__RES_GRANTING;
              /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__grantedTask__postTask();
              /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
            }
          else {
              /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__resId = /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__default_owner_id;
              /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__state = /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__RES_CONTROLLED;
              /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
              /*SoftSPIMasterP.Arbiter.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted();
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

# 361 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
static error_t Atm128SpiP__Resource__request(uint8_t id)
#line 361
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 362
    {
      if (!Atm128SpiP__ArbiterInfo__inUse()) {
          Atm128SpiP__startSpi();
        }
    }
#line 366
    __nesc_atomic_end(__nesc_atomic); }
  return Atm128SpiP__ResourceArbiter__request(id);
}

# 132 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled)
#line 132
{
  if (enabled) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 7;
      HplAtm128SpiP__Mcu__update();
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 7);
      HplAtm128SpiP__Mcu__update();
    }
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

# 109 "/homes/mhartmann/baq/tinyos/tos/platforms/bigAVR6/MP3/MP3P.nc"
static error_t MP3P__MP3__writeRegister(uint8_t mp3Register, uint16_t mp3Cmd)
#line 109
{
  if (!MP3P__SPI0__immediateRequest()) {
      return EBUSY;
    }

  MP3P__CS__clr();
  MP3P__SoftSPI0__sendByte(MP3P__MP3_WRITE);
  MP3P__SoftSPI0__sendByte(mp3Register);
  MP3P__SoftSPI0__sendByte(mp3Cmd >> 8);
  MP3P__SoftSPI0__sendByte(mp3Cmd);
  MP3P__CS__set();
  MP3P__SPI0__release();
  return SUCCESS;
}

#line 81
static error_t MP3P__MP3__setVolume(uint8_t volume)
#line 81
{
  if (volume == 0) {
      return MP3P__MP3__writeRegister(MP3P__VOLUME, 0xFEFE);
    }
  return MP3P__MP3__writeRegister(MP3P__VOLUME, (255 - volume) * 256 + (255 - volume));
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

# 108 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/adc/HplAtm128AdcP.nc"
__attribute((signal))   void __vector_21(void )
#line 108
{
  uint16_t data = HplAtm128AdcP__HplAtm128Adc__getValue();

  __nesc_enable_interrupt();
  HplAtm128AdcP__HplAtm128Adc__dataReady(data);
}

# 119 "/homes/mhartmann/baq/tinyos/tos/chips/atm128/spi/HplAtm128SpiP.nc"
__attribute((signal))   void __vector_17(void )
#line 119
{
  HplAtm128SpiP__SPI__dataReady(HplAtm128SpiP__SPI__read());
}

