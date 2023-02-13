/*
* DIO_private.h
*
* Created: 9/16/2022 9:08:08 PM
*  Author: En.EslamEid
*/


#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_



#define PIND            (*((volatile u8 *)  (0x30)))
#define DDRD			(*((volatile u8 *)  (0x31)))
#define PORTD			(*((volatile u8 *)  (0x32)))

#define PINC			(*((volatile u8 *)  (0x33)))
#define DDRC			(*((volatile u8 *)  (0x34)))
#define PORTC			(*((volatile u8 *)  (0x35)))

#define PINB			(*((volatile u8 *)  (0X36)))
#define DDRB			(*((volatile u8 *)  (0X37)))
#define PORTB			(*((volatile u8 *)  (0X38)))

#define PINA			(*((volatile u8 *) (0X39)))
#define DDRA			(*((volatile u8 *) (0X3A)))
#define PORTA			(*((volatile u8 *) (0X3B)))





#endif /* DIO_PRIVATE_H_ */