/*
 * Motor.h
 *
 *  Created on: Nov 25, 2014
 *      Author: Owner
 */

#ifndef MOTOR_H_
#define MOTOR_H_

class Motor {
public:
	void setDrive(float speed, unsigned int dur);
	float getmSpeed();
	unsigned int getmDur();
	int calculateDistance();
private:
	float mSpeed;
	unsigned int mDur;
	int distance;

};





#endif /* MOTOR_H_ */
