/*
 * Sensor.cpp
 *
 *  Created on: Nov 25, 2014
 *      Author: Owner
 */
#include <math.h>
#include "Simulation.h"

Sensor::Sensor(Simulation * sim){
    simulation = sim;
}
float Sensor::getValue()
{
	return 1.0 - ((((simulation->getrX() - simulation->gettX())*(simulation->getrX() - simulation->gettX()) + (simulation->getrY() - simulation->gettY())*(simulation->getrY() - simulation->gettY()))*((simulation->getrX() - simulation->gettX())*(simulation->getrX() - simulation->gettX()) + (simulation->getrY() - simulation->gettY())*(simulation->getrY() - simulation->gettY())))/10000); // strength=1 - ((distance^2)/10,000)
}

