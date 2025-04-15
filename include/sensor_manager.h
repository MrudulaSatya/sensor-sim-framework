#pragma once

#include "isensor.h"

// Define Sensor Manager class 
class SensorManager{
    public:
        SensorManager(ISensor *sensor); // Inject sensor dependency
        float getAverage(int count); //Average count number of sensor readings and return it
    private:
        ISensor *m_sensor;

};


