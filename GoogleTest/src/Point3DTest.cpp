#include "pch.h"
#include "gtest/gtest.h"
#include "Point3D.h"

// Test for the default constructor of the Point3D class
TEST(Point3DTest, DefaultConstructor) {
    // Arrange
    Point3D point;

    // Act & Assert
    EXPECT_DOUBLE_EQ(point.x(), 0.0f);
    EXPECT_DOUBLE_EQ(point.y(), 0.0f);
}

// Test for the parameterized constructor of the Point3D class
TEST(Point3DTest, ParameterizedConstructor) {
    // Arrange
    Point3D point(1.0f, 2.0f);

    // Act & Assert
    EXPECT_DOUBLE_EQ(point.x(), 1.0f);
    EXPECT_DOUBLE_EQ(point.y(), 2.0f);
}

// Test for the setters and getters of the Point3D class
TEST(Point3DTest, SettersAndGetters) {
    // Arrange
    Point3D point;

    // Act
    point.setX(3.0f);
    point.setY(4.0f);

    // Assert
    EXPECT_DOUBLE_EQ(point.x(), 3.0f);
    EXPECT_DOUBLE_EQ(point.y(), 4.0f);
}
