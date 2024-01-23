#include "pch.h"
#include "Line.h"
#include <gtest/gtest.h>

// Test for the Line class constructor
TEST(LineTest, Constructor) {
    // Arrange
    Point3D p1(1.0, 2.0);
    Point3D p2(3.0, 4.0);

    // Act
    Line line(p1, p2);

    // Assert
    // Check that the Line is constructed correctly
    ASSERT_EQ(line.p1().x(), 1.0);
    ASSERT_EQ(line.p1().y(), 2.0);
    ASSERT_EQ(line.p2().x(), 3.0);
    ASSERT_EQ(line.p2().y(), 4.0);
}

// Test for the Line class copy constructor
TEST(LineTest, CopyConstructor) {
    // Arrange
    Point3D p1(1.0, 2.0);
    Point3D p2(3.0, 4.0);

    // Act
    Line originalLine(p1, p2);
    Line copiedLine(originalLine);

    // Assert
    // Check that the copied Line has the same values
    ASSERT_EQ(originalLine.p1().x(), copiedLine.p1().x());
    ASSERT_EQ(originalLine.p1().y(), copiedLine.p1().y());
    ASSERT_EQ(originalLine.p2().x(), copiedLine.p2().x());
    ASSERT_EQ(originalLine.p2().y(), copiedLine.p2().y());
}

// Test for the Line class assignment operator
TEST(LineTest, AssignmentOperator) {
    // Arrange
    Point3D p1(1.0, 2.0);
    Point3D p2(3.0, 4.0);

    // Act
    Line originalLine(p1, p2);
    Line assignedLine = originalLine;

    // Assert
    // Check that the assigned Line has the same values
    ASSERT_EQ(originalLine.p1().x(), assignedLine.p1().x());
    ASSERT_EQ(originalLine.p1().y(), assignedLine.p1().y());
    ASSERT_EQ(originalLine.p2().x(), assignedLine.p2().x());
    ASSERT_EQ(originalLine.p2().y(), assignedLine.p2().y());
}
