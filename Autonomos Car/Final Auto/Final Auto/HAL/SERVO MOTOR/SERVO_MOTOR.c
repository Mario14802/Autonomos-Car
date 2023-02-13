
/*
 * SERVO_MOTOR.c
 *
 * Created: 12/28/2022 2:58:32 PM
 *  Author: Mina
 */ 
#include "SERVO_MOTOR.h"

void Servo_Motor_init(void){
	Timer1_PWM_Servo_init();
}

void Timer1_PWM_Servo_init(void)				//initialize servo
{
	TCCR1A |= (1 << COM1A1) | (1 << COM1B1) | (1 << WGM11);
	TCCR1B |= (1 << WGM13) | (1 << WGM12) | (1 << CS11) | (1 << CS10);
	ICR1 = 4999;
	DIO_SetPinDir(DIO_PORTD,Pin4,OUTPUT);
	DIO_SetPinDir(DIO_PORTD,Pin5,OUTPUT);
	//PWM Pins as Out
}

void serv_angle(u8 angle){
	OCR1A = (int) ((angle * 2.78f) + 125);
}
