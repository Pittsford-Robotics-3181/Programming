//============================================================================
// Name        : robot.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
//============================================================================

#include <iostream>
using namespace std;

#include "Simulation.h"
#include <math.h>


//TODO: Please note how enumerations should be wrapped in namespaces
namespace Direction {
enum Direction {
	forward, backward, right
};
}
//void setRandTarget(int x, int y, Simulation* simulation){
	//simulation->setTarget()
//}

void forwardM(Motor *lmotor, Motor *rmotor) {
	lmotor->setDrive(.2, .5);
	rmotor->setDrive(.2, .5);
}

void backwardM(Motor *lmotor, Motor *rmotor) {
	lmotor->setDrive(-.2, 0.5);
	rmotor->setDrive(-.2, 0.5);
}

Direction::Direction calculateDirection(float current, float last,
		float last2) {
	if (current < last) {
		return Direction::backward;
	}
	if (current > last && (last2 - last) > (last - current)) {
		return Direction::right;
	}
	/*if( current > last && (2last - last) < (last - current)){
	 return Direction::backward;

	 }
	 */
	return Direction::forward; // TODO: This is bad code.  Need to make sure all paths are handled.
}
;

int main() {
	Motor * lMotor;
	Motor * rMotor;

	Simulation* simulation = new Simulation();

	simulation->setTarget(50,50);
	simulation->setRobot(4,4,0);

	Sensor* sensor = simulation->getSensor();
	lMotor = simulation->getLMotor();
	rMotor = simulation->getRMotor();

	forwardM(lMotor, rMotor);
	lMotor->setDrive(-.2, .5);
	rMotor->setDrive(-.2, .5);
	float last2 = sensor->getValue();

	lMotor->setDrive(-.2, .5);
	rMotor->setDrive(-.2, .5);
	float last = sensor->getValue();

	lMotor->setDrive(-.2, .5);
	rMotor->setDrive(-.2, .5);
	float current = sensor->getValue();

	while (sensor->getValue() > .1) {

		Direction::Direction direction = calculateDirection(current, last,
				last2); // Forward, Backward 90 degree
		if (direction == Direction::forward) {
			forwardM(lMotor, rMotor);
		} else if (direction == Direction::backward) {
			backwardM(lMotor, rMotor);
		}
		simulation->execute();

	}
}
