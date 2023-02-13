
#ifndef TIMER_CONFIG_H_
#define TIMER_CONFIG_H_
#include <avr/io.h>

/* TCCR0. (0111 1011) 0x
 * Bit 7    FOC0: writing a logical one to the FOC0 bit, an immediate compare match is forced on the Waveform Generation unit.
 * Bit 6,3  WGM01:0:  1 1 Fast PWM
 * Bit 5:4  COM01:0:  1 1 Set OC0 on compare match, clear OC0 at TOP
 * Bit 2:0  CS02:0: Clock Select  0 1 1 clkI/O/64 (From prescaler )
 * */

#define TIMER0_MODE            PWM_FAST_MODE
#define TIMER0_FREQ	           PRE_1
#define TIMER0_OC0_PIN_MODE    OC_pin_NON_INVERTING_PWM


#define TIMER1_MODE            PWM_FAST_MODE
#define TIMER1_FREQ	           PRE_1
#define TIMER1_OC0_PIN_MODE    OC_pin_NON_INVERTING_PWM



#define  OC_pin_DISCONNECTED		 0
#define  OC_pin_NON_INVERTING_PWM	 2
#define  OC_pin_INVERTING_PWM		 3

#define NORMAL_MODE       0
#define PWM_PHASE_CORRECT 1
#define CTC_MODE          2
#define PWM_FAST_MODE     3


#define PRE_1     1
#define PRE_8     2
#define PRE_64    3
#define PRE_256   4
#define PRE_1024  5

#define Ext_CLK_At_Falling  6
#define Ext_CLK_At_Rising   7




#endif /* PWM_CFG_H_ */
