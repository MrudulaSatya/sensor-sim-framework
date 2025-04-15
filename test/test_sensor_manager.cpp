#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "isensor.h"

using ::testing::Return;

//Stub sensor to remove any dependency and isolatedly unit test the function using GoogleMock and have predictable behavior from the dependency
class StubSensor : public ISensor
{
	public:
		float read() override{
			return 42.5f; // returns a fixed value to control the behavior of the dependency (sensor) and provide a predictable output so that read function can be tested isolatedly. 
		}
};

TEST(SensorTest, StubReturnTest)
{
	//Arrange
	StubSensor stb;

	//Act
	float sensorReading = stb.read();

	//Assert
	ASSERT_EQ(sensorReading, 42.5f);
}

//Mock Sensor using GoogleMock
// Confirms if the function under testing was called or not. 
// When and how it was called. How many times it was called. 
// What did it return? 
// tests the interaction between components (functions) and not the functionality of the function itself
class MockSensor : public ISensor
{
	public:
		MOCK_METHOD(float, read, (), (override));
};

//was the read function called?
TEST(SensorTest, MockSensorTest)
{
	//Arrange
	MockSensor mck;

	//Act
	EXPECT_CALL(mck, read())
	.Times(1)
	.WillOnce(Return(55.0f));

	float sensorReading = mck.read();

	//Assert
	EXPECT_EQ(sensorReading, 55.0f);
}


