/*
 * Sensor.h
 *
 *  Created on: Nov 25, 2014
 *      Author: Owner
 */

#ifndef SENSOR_H_
#define SENSOR_H_

class Simulation;

class Sensor {
public:
	float getValue();
	Sensor(Simulation * sim);
private:
	Simulation * simulation;
};


#endif /* SENSOR_H_ */
