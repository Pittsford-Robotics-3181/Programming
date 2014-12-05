/*
 * Sensor.cpp
 *
 *  Created on: Nov 25, 2014
 *      Author: Owner
 */
#include "Sensor.h"
#include <math.h>
#include "Simulation.h"

float Sensor::getValue()
{
	return 0.0f;//1 - ((sqrt((robotX - targetX))));// strength=1 - ((distance formula^2)/10,000)
}


