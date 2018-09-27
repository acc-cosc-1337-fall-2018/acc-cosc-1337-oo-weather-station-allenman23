#ifndef TEMPERATURE_SENSOR_H
#define TEMPERATURE_SENSOR_H

#include "temperature_observation.h"
#include <vector>

class TemperatureSensor
{
public:
	void get_temperature_keyboard();
	void get_temperature_file();
	void get_temperature_web();

private:
	std::vector<TemperatureObservation> observations;
	//Reading interval in seconds
	int interval;
};

#endif //TEMPERATUR_SENSOR_H
