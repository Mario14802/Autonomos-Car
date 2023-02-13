/*
 * registars.h
 *
 * Created: 12/11/2022 8:49:33 PM
 *  Author: MARIO
 */ 

#ifndef REGISTARS_H_
#define REGISTARS_H_

#include "STD_TYPES.h"
#include "BIT_MATH.h"
 
                         //*******************************//
                                 //DIO Registers 
                         //*******************************//	 
//PORTD Register//	
#define PIND            (*((volatile u8 *)  (0x30)))
#define DDRD			(*((volatile u8 *)  (0x31)))
#define PORTD			(*((volatile u8 *)  (0x32)))

//PORTC Register
#define PINC			(*((volatile u8 *)  (0x33)))
#define DDRC			(*((volatile u8 *)  (0x34)))
#define PORTC			(*((volatile u8 *)  (0x35)))

//PORTD Register
#define PINB			(*((volatile u8 *)  (0X36)))
#define DDRB			(*((volatile u8 *)  (0X37)))
#define PORTB			(*((volatile u8 *)  (0X38)))

//PORTA Register
#define PINA			(*((volatile u8 *) (0X39)))
#define DDRA			(*((volatile u8 *) (0X3A)))
#define PORTA			(*((volatile u8 *) (0X3B)))


//*******************************//
//TIMER0 Register
//*******************************//

#define  SREG  (*((volatile u8 *)(0x5F)))	  //i-bit
#define  TCCR0 (*((volatile u8 *)(0x53)))	  // WGM00/01  CS00/01/02
#define  TCNT0 (*((volatile u8 *)(0x52)))	  // counting register
#define  OCR0  (*((volatile u8 *)(0x5C)))	  // Comparing register
#define  TIMSK (*((volatile u8 *)(0x59)))	  // interrupt enable  for OVF,CTC
#define  TIFR  (*((volatile u8 *) (0x58)))	  //int flag
			 
			 
			 
 //*******************************//
 //TIMER1 Register
 //*******************************//

 #define TCCR1A    (*(volatile u8*)(0x4F))
 #define TCCR1B    (*(volatile u8*)(0x4E))
 #define TCNT1H    (*(volatile u8*)(0x4D))
 #define TCNT1L    (*(volatile u8*)(0x4C))
 #define TCNT1     (*(volatile u16*)(0x4C))

 #define OCR1AH    (*(volatile u8*)(0x4B))
 #define OCR1AL    (*(volatile u8*)(0x4A))

 #define OCR1A     (*(volatile u16*)(0x4A))

 #define OCR1BH    (*(volatile u8*)(0x49))
 #define OCR1BL    (*(volatile u8*)(0x48))
 #define OCR1B    (*(volatile u16 *)(0x48))

 #define ICR1H     (*(volatile u8*)(0x47))
 #define ICR1L     (*(volatile u8 *)(0x46))
 #define ICR1      (*(volatile u16 *)(0x46))


//*******************************//
//INTERRUPT Register
//*******************************//
#define SREG   (*((volatile u8 *) (0x5F)))
#define GICR   (*((volatile u8 *) (0x5B)))
#define GIFR   (*((volatile u8 *) (0x5A)))
#define MCUCR  (*((volatile u8 *) (0x55)))
#define MCUCSR (*((volatile u8 *) (0x54)))


#endif /* REGISTARS_H_ */