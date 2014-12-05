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
	void setDrive(float speed, float dur);
	float getmSpeed();
	unsigned int getmDur();
	int calculateDistance();
private:
	float mSpeed;
	float mDur;
	int distance;

};





#endif /* MOTOR_H_ */
