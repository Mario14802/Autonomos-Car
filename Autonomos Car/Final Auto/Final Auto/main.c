/*
 * Final Auto.c
 *
 * Created: 2/3/2023 9:08:44 PM
 * Author : MARIO
 */ 
#include <util/delay.h>
#include <avr/io.h>
#include "HAL/ULTRASONIC/ultrasonic.h"
#include "HAL/LCD/LCD.h"
#include "MCAL/TIMERS/timer.h"
#include "MCAL/DIO/DIO_interface.h"
#include "HAL/DC MOTOR/DC_MOTOR.h"
#include "HAL/SERVO MOTOR/SERVO_MOTOR.h"
#include "MCAL/DIO/DIO_interface.h"


#define F_CPU 16000000UL
 extern u32 distance;
int main(){

	lcd_init();
	ultrasonic_init();
	Servo_Motor_init();
	DC_MOTOR_init(); 
	
	sei();

	lcd_write_word("Distance is");
	_delay_ms(30); 


	
		
serv_angle(90); // straight position for the servo motor
//DC_MOTOR_forward();

while(1)
{	
	serv_angle(90);//reset the position of the ultrasonic
	_delay_ms(7000);
	ultra_trigger(); //trigger the ultrasonic
	_delay_ms(500);
	lcd_goto_xy(0,1);

		_delay_ms(500);
	if(distance<=30){ //NO forward path
		DC_MOTOR_stop();
		serv_angle(15); //look right
		_delay_ms(7000);
		ultra_trigger(); //check right
		_delay_ms(500);
		if(distance<=30){ // NO RIGHT path
			DC_MOTOR_stop();
			serv_angle(180);//look left
			_delay_ms(7000);
			ultra_trigger(); //check left
			_delay_ms(500);
			if(distance<=30){ //if all(forward,right,left)fails move backwards
				DC_MOTOR_backward(); // move BACKWARD
				lcd_clear();
				lcd_goto_xy(0,1);
				lcd_write_word("Move back");
				_delay_ms(30);
				
			}
			else{
				DC_MOTOR_left();  //Move LEFT
				lcd_goto_xy(0,1);
				lcd_write_word("Move left");
				_delay_ms(30);
			}
		}
		else{
			DC_MOTOR_right();  //move Right
			lcd_goto_xy(0,0);
			lcd_write_word("Move right");
			_delay_ms(30);
		}
		
	}
	else { 
		//if succeed all checks
		
		DC_MOTOR_forward(); //Move Forward
		lcd_goto_xy(0,0);
		_delay_ms(30);
		lcd_write_word(" Move forward ");
  
	                  }
	
                  }

	         

	return 0;
}

