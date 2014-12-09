/*
 * Simulation.h

 *
 *  Created on: Nov 25, 2014
 *      Author: Owner
 */

#ifndef SIMULATION_H_
#define SIMULATION_H_

#include "Sensor.h"
#include "Motor.h"

class Simulation{
public:
	Sensor * getSensor();
	Motor * getLMotor();
	Motor * getRMotor();
	void setTarget(int x, int y);
	void setRobot(int x, int y, unsigned int orientation);
	void execute();
	int getrX();
	int getrY();
	int gettX();
	int gettY();

private:
	Sensor * distanceSensor;
	Motor * lMotor;
	Motor * rMotor;
	int targetX, targetY;
	int robotX, robotY, rOrientation;

};

#endif /* SIMULATION_H_ */
