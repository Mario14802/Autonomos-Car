
/*
 * DC_MOTOR.c
 *
 * Created: 12/28/2022 2:42:24 PM
 *  Author: Mina
 */ 

#include "DC_MOTOR.h"

#include "../../BIT_MATH.h"

//H-enable 1 =>D0    --B5
//H-enable 2 =>D1    --B6

//H-A1 =>C3
//H-A2 =>C4
//H-A3 =>C5
//H-A4 =>C6

void DC_MOTOR_init(){
	SET_BIT(DDRC,3); //H-A1
	SET_BIT(DDRC,4); //H-A2

	SET_BIT(DDRC,5); //H-A3
	SET_BIT(DDRC,6); //H-A4

	SET_BIT(DDRB,5); //H-enable 1
	SET_BIT(DDRB,6); //H-enable 2
	
}
void DC_MOTOR_forward(){
	//motor A
	SET_BIT(PORTC,3); //H-A1
	CLEAR_BIT(PORTC,4); //H-A2
	//motor B
	SET_BIT(PORTC,5); //H-A3
	CLEAR_BIT(PORTC,6); //H-A4
	//enable Ports
	SET_BIT(PORTB,5);
	SET_BIT(PORTB,6);

	
}
void DC_MOTOR_right(){
	//motor A
	SET_BIT(PORTC,3); //H-A1
	CLEAR_BIT(PORTC,4); //H-A2
	//motor B
	CLEAR_BIT(PORTC,5); //H-A3
	CLEAR_BIT(PORTC,6); //H-A4
	//enable Ports
	SET_BIT(PORTB,5);
	CLEAR_BIT(PORTB,6);
	
}
void DC_MOTOR_left(){
	//motor A
	CLEAR_BIT(PORTC,3); //H-A1
	CLEAR_BIT(PORTC,4);//H-A2
	//motor B
	SET_BIT(PORTC,5); //H-A3
	CLEAR_BIT(PORTC,6); //H-A4
	//enable Ports
	CLEAR_BIT(PORTB,5);
	SET_BIT(PORTB,6);
	
}
void DC_MOTOR_backward(){
	//motor A
	CLEAR_BIT(PORTC,3); //H-A1
	SET_BIT(PORTC,4); //H-A2
	//motor B
	CLEAR_BIT(PORTC,5); //H-A3
	SET_BIT(PORTC,6); //H-A4
	//enable Ports
	SET_BIT(PORTB,5);
	SET_BIT(PORTB,6);
	
}
void DC_MOTOR_stop(){
	//motor A
	CLEAR_BIT(PORTC,3); //H-A1
	CLEAR_BIT(PORTC,4); //H-A2
	//motor B
	CLEAR_BIT(PORTC,5); //H-A3
	CLEAR_BIT(PORTC,6); //H-A4
	//enable Ports
	CLEAR_BIT(PORTB,5);
	CLEAR_BIT(PORTB,6);

}