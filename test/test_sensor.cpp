#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "sensor_manager.h"

using ::testing::Return;

//Mock Sensor Manager
class MockSensor : public ISensor{
	public:
		MOCK_METHOD(float, read, (), (override));
};

TEST(SensorManagerTest, AveragesCorrectly)
{
	//Arrange
	MockSensor sensor; 
	SensorManager sm(&sensor);

	//Act
	EXPECT_CALL(sensor, read())
	.Times(3)
	.WillOnce(Return(10.0f))
	.WillOnce(Return(20.0f))
	.WillOnce(Return(30.0f));

	
	float avg = sm.getAverage(3);


	//Assert or Expect
	EXPECT_FLOAT_EQ(avg, 20.0f);
}