#pragma once

// Define Sensor interface class
class ISensor {
    public:
        virtual float read() = 0; //pure virtual function
        virtual ~ISensor() = default; 
};


