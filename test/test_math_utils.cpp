#include <gtest/gtest.h>
#include "math_utils.h"

TEST(MathUtilsTest, AddWorks)
{
	//Arrange
	int a = 5, b = -7;

	//Act
	int res = Add(a, b);

	//Assert
	ASSERT_EQ(res, -2);

	a = 8, b = 9;
	ASSERT_EQ(Add(8,9), 17);
}

TEST(MathUtilsTest, SubtractWorks)
{
	//Arrange
	int a = 6, b = 9;

	//Act
	int res = Subtract(a, b);

	//Assert
	ASSERT_EQ(res, -3);
}


