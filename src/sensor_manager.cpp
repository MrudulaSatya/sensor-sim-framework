#include "sensor_manager.h"

//Constructor implementation
// assign the passed sensor pointer to the private sensor pointer member
SensorManager::SensorManager(ISensor *sensor) : m_sensor(sensor){}

//Implement the getAverage function of Sensor Manager class
float SensorManager::getAverage(int count){
	float total = 0.0f;
	for(int i=0; i< count; i++)
	{
		total += m_sensor->read();
	}

	return total/count; 
}