#include "isensor.h"
#include <cstdlib>

class DummySensor : public ISensor
{
	public:
		float read() override {
			return static_cast<float>(rand() % 100); //Generate random tempertures between 0 and 99 degree fahrenheit
		}
};