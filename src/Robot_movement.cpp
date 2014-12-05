//============================================================================
// Name        : robot.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


#include "Simulation.h";

enum{forward, backword, right};

void forwardM(Motor *lmotor, Motor *rmotor)
{
	lmotor->setDrive(.2, .5);
	rmotor->setDrive(.2, .5);
}

void backwardM(Motor *lmotor, Motor *rmotor)
{
	lmotor->setDrive(-.2, 0.5);
	rmotor->setDrive(-.2, 0.5);
}

int calculateDirection(float current,float last, float last2){
	if(current < last){
		return 2;
	}
	if( current > last && (last2 - last) > (last - current)){
		return 3;
	}
	/*if( current > last && (2last - last) < (last - current)){
		return backword;

	}
	*/
};

int main() {





	 Motor * lMotor;
	 Motor * rMotor;




	Simulation* simulation = new Simulation();

	Sensor* sensor = simulation->getSensor();
	lMotor = simulation->getLMotor();
	rMotor = simulation->getRMotor();

	forwardM(lMotor,rMotor);
	lMotor->setDrive(-.2,.5);
	rMotor->setDrive(-.2,.5);
	float last2 = sensor->getValue();

	lMotor->setDrive(-.2,.5);
	rMotor->setDrive(-.2,.5);
	float last = sensor->getValue();

	lMotor->setDrive(-.2,.5);
	rMotor->setDrive(-.2,.5);
	float current = sensor->getValue();

	while(sensor->getValue() >.1){

		int direction = calculateDirection(current, last, last2); // Forward, Backward 90 degree
			if (direction == forward){
				forwardM(lMotor,rMotor);
		}
			else if (backword){
				backwardM(lMotor,rMotor);
	}



	}


	return 0;
}
