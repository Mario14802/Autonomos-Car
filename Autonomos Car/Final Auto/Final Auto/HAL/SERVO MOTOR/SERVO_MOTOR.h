
/*
 * SERVO_MOTOR.h
 *
 * Created: 12/28/2022 2:55:30 PM
 *  Author: Mina
 */ 
#ifndef SERVO_MOTOR_H_
#define SERVO_MOTOR_H_

#include "../../STD_TYPES.h"
#include <avr/io.h>
#include <avr/interrupt.h>
#include "../../MCAL/TIMERS/timer.h"
#include "../../MCAL/DIO/DIO_interface.h"
void Servo_Motor_init(void);
void Timer1_PWM_Servo_init(void);

void serv_angle(u8 angle);

#endif
