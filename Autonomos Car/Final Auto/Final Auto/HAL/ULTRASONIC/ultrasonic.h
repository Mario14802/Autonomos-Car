#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_

#include <avr/io.h>
#include <avr/interrupt.h>
#include <string.h>
#include <stdlib.h>
#define F_CPU 16000000UL
#include <util/delay.h>
#include "../../MCAL/TIMERS/timer.h"
#include "../../STD_TYPES.h"
#include "../../HAL/LCD/LCD.h"


#define   TRIGGER_DDR    DDRD
#define   ECHO_DDR      DDRD
#define   TRIGGER_PORT   PORTD
#define   ECHO_PULLUP   PORTD
#define   TRIGGER        0
#define   ECHO          3
#define  NO_of_Counts  730
#define initial_start   0x00

/*************************************************
 *  API functions
 *************************************************/

void ultrasonic_init(void);
void enable_ex_interrupt(void);
void ultrasonic_trigger(void);

#endif
