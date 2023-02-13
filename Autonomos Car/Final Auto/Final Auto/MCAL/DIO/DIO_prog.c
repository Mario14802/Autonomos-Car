/*
* DIO_prog.c
*
* Created: 9/16/2022 9:08:26 PM
*  Author: En.EslamEid
*/

#include "DIO_interface.h"

void DIO_SetPinDir(PORT_TYPE port ,PIN_TYPE pin, MODE_TYPE dir ){
	
	switch (port)
	{
		
		case DIO_PORTA:
		(dir==OUTPUT)? (SET_BIT(DDRA,pin)):(CLEAR_BIT(DDRA,pin)) ;
		break;
		
		case DIO_PORTB:
		(dir==OUTPUT)? (SET_BIT(DDRB,pin)):(CLEAR_BIT(DDRB,pin)) ;
		break;
		
		case DIO_PORTC:
		(dir==OUTPUT)? (SET_BIT(DDRC,pin)):(CLEAR_BIT(DDRC,pin)) ;
		break;
		
		case DIO_PORTD:
		(dir==OUTPUT)? (SET_BIT(DDRD,pin)):(CLEAR_BIT(DDRD,pin)) ;
		break;
	}
	
	
	
	
}
void DIO_SetPinValue(PORT_TYPE port ,PIN_TYPE pin , MODE_TYPE val )
{
	switch (port)
	{
		case DIO_PORTA:
		(val==HIGH)? (SET_BIT(PORTA,pin)):(CLEAR_BIT(PORTA,pin)) ;
		break;
		
		case DIO_PORTB:
		(val==HIGH)? (SET_BIT(PORTB,pin)):(CLEAR_BIT(PORTB,pin)) ;
		break;
		
		case DIO_PORTC:
		(val==HIGH)? (SET_BIT(PORTC,pin)):(CLEAR_BIT(PORTC,pin)) ;
		break;
		
		case DIO_PORTD:
		(val==HIGH)? (SET_BIT(PORTD,pin)):(CLEAR_BIT(PORTD,pin)) ;
		break;
	}
}

u8  DIO_GetPinValue(PORT_TYPE port ,PIN_TYPE pin  )	{
	
	switch(port){
		
		case  DIO_PORTA :	return GET_BIT(PINA,pin);
		case  DIO_PORTB :   return GET_BIT(PINB,pin);
		case  DIO_PORTC :   return GET_BIT(PINC,pin);
		case  DIO_PORTD :   return GET_BIT(PIND,pin);
		
		
	}
	
	
}



void DIO_SetInputPullUp(PORT_TYPE port ,PIN_TYPE pin){
	
	DIO_SetPinDir(port,pin,INPUT);
	DIO_SetPinValue(port,pin,HIGH);
	
}



void DIO_TogglePinValue(PORT_TYPE port ,PIN_TYPE pin){
	
	
	switch (port)
	{
		case DIO_PORTA:
		TOG_BIT(PORTA,pin) ;
		break;
		
		case DIO_PORTB:
		TOG_BIT(PORTB,pin) ;
		break;
		
		case DIO_PORTC:
		TOG_BIT(PORTC,pin) ;
		break;
		
		case DIO_PORTD:
		TOG_BIT(PORTD,pin) ;
		break;
	}
	
	
	
}
