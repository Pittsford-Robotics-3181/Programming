/*
 * Simulation.cpp
 *
 *  Created on: Nov 25, 2014
 *      Author: Owner
 */
#include "Simulation.h"
#include <stddef>

Sensor * Simulation::getSensor() {
	distanceSensor = new Sensor;
	return distanceSensor;
}

Motor * Simulation::getLMotor() {
	lMotor = new Motor;
	return lMotor;
}
Motor * Simulation::getRMotor() {
	rMotor = new Motor;
	return rMotor;
}
void Simulation::setTarget(int x, int y) {
	targetX = x;
	targetY = y;
}
void Simulation::setRobot(int x, int y, unsigned int orientation) {
	robotX = x;
	robotY = y;
	rOrientation = orientation;
}
void Simulation::execute() {
	int averageDistance = (rMotor->calculateDistance() + lMotor->calculateDistance()) / 2;
}

