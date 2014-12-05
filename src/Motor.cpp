/*
 * Motor.cpp
 *
 *  Created on: Nov 25, 2014
 *      Author: Owner
 */
#include "Motor.h"

#define MOTOR_MAX_SPEED 2 // revolutions per second
#define WHEEL_DIAMETER 10 // cm
#define PI 3.1415         // Archimedes



void Motor::setDrive(float speed, unsigned int dur)
{
	mSpeed = speed;
	mDur = dur;
}
float Motor::getmSpeed()
{
	return mSpeed;
}
unsigned int  Motor::getmDur()
{
	return mDur;
}
int Motor::calculateDistance()
{
	return (int)(PI * WHEEL_DIAMETER * (MOTOR_MAX_SPEED * mSpeed * mDur)); // pi * d * revolutions(maxspeed*speed*duration)
}

