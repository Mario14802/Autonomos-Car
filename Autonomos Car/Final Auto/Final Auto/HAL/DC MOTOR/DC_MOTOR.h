
/*
 * DC_MOTOR.h
 *
 * Created: 12/28/2022 2:41:27 PM
 *  Author: Mina
 */ 

#ifndef DC_Motor_H_
#define DC_Motor_H_

#include "../../MCAL/TIMERS/timer.h"
#include "../../BIT_MATH.h"
#include "../../MCAL/DIO/DIO_interface.h"



void DC_MOTOR_init();
void DC_MOTOR_forward();
void DC_MOTOR_right();
void DC_MOTOR_left();
void DC_MOTOR_backward();
void DC_MOTOR_stop();

#endif
