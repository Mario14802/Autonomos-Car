#include "ultrasonic.h"

u8 sensor_working=0;
u8 rising_edge=0;
u32 timer_counter=0;
 u32 distance;
u8 distance_str[10];


void ultrasonic_init(void){

	TRIGGER_DDR|=(1<<TRIGGER);
	ECHO_DDR&=~(1<<ECHO);
	ECHO_PULLUP|=(1<<ECHO);
	enable_ex_interrupt();
	timer0_init();
	return;
}

void enable_ex_interrupt(void){

	MCUCR |= (1<<ISC10);		// Trigger INT1 on any logic change.
	GICR  |= (1<<INT1);			// Enable INT1 interrupts.

	return;
}

void ultra_trigger(void){
	if(!sensor_working){
		TRIGGER_PORT|=(1<<TRIGGER);
		_delay_us(15);
		TRIGGER_PORT&=~(1<<TRIGGER);
		sensor_working=1;
	}
}

ISR(INT1_vect){
	if(sensor_working==1){
		if(rising_edge==0){
			TCNT0=0x00;
			rising_edge=1;
			timer_counter=0;
		}
		else{
			distance=((timer_counter*256+TCNT0)/(466)/2);
			lcd_goto_xy(1,0);
			itoa(distance,distance_str,10);// coverts the integer distance  into a character string.
			strcat(distance_str, " cm "); //appends the characters of the source string, up to and including the null character, to the end of the destination string
			lcd_write_word(distance_str);
			_delay_ms(40);
			timer_counter=0;
			rising_edge=0;
		}
	}}


	ISR(TIMER0_OVF_vect){   
		timer_counter++;
		if(timer_counter >NO_of_Counts){ 
			TCNT0=initial_start;
			sensor_working=0;
			rising_edge=0;
			timer_counter=0;
		}
	}

