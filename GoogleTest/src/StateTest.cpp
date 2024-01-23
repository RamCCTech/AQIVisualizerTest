#include "pch.h"
#include <gtest/gtest.h>
#include "State.h"

// Test for the GetName function of the State class
TEST(StateTest, GetName) {
    // Arrange
    State state;
    state.setName("California");

    // Act
    std::string result = state.name();

    // Assert
    EXPECT_EQ(result, "California");
}

// Test for the SetPoints and Coordinate functions of the State class
TEST(StateTest, SetAndGetCoordinates) {
    // Arrange
    State state;
    std::vector<Point3D> coordinates = { Point3D(1.0, 2.0), Point3D(3.0, 4.0) };
    state.setPoints(coordinates);

    // Act
    std::vector<Point3D> result = state.coordinate();

    // Assert
    ASSERT_EQ(result.size(), coordinates.size()); // Ensure both vectors have the same size

    for (size_t i = 0; i < coordinates.size(); ++i) {
        EXPECT_EQ(result[i].x(), coordinates[i].x());
        EXPECT_EQ(result[i].y(), coordinates[i].y());
    }
}

// Test for the SetAQIData and GetAQIData functions of the State class
TEST(StateTest, SetAndGetAQIData) {
    // Arrange
    State state;
    std::map<std::string, int> aqiData = { {"2022-01-01", 20}, {"2022-01-02", 25} };
    state.setAQIData(aqiData);

    // Act
    std::map<std::string, int> result = state.getAQIData();

    // Assert
    EXPECT_EQ(result, aqiData);
}
