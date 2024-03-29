# AQI Visualizer Test Suite

This project involves writing tests for the AQI Visualizer using the Google Test framework. The primary goal is to ensure the correctness and reliability of key components such as the Point3D, Line, and State classes.

## Overview

The AQI Visualizer project focuses on testing essential classes responsible for representing and managing data related to Air Quality Index (AQI) visualization. The Google Test framework is employed to conduct thorough testing of the Point3D, Line, and State classes.

## Test Cases

### Line Class (LineTest.cpp)
- **What You Are Testing:**
  - Constructor: Ensures the Line class constructor initializes objects with the correct points.
  - Copy Constructor: Validates that the copy constructor creates a Line object with identical values as the original Line.
  - Assignment Operator: Verifies that the assignment operator assigns values correctly when creating a new Line.
- **Test Location:**
  - File: LineTest.cpp
  - Test Name: `LineTest`

### Point3D Class (Point3DTest.cpp)
- **What You Are Testing:**
  - Default Constructor: Tests the default constructor of the Point3D class, ensuring it initializes the object with default values (0.0f, 0.0f).
  - Parameterized Constructor: Validates that the parameterized constructor correctly initializes the Point3D object with provided values.
  - Setters and Getters: Verifies the functionality of setters and getters for x and y properties of the Point3D class.
- **Test Location:**
  - File: Point3DTest.cpp
  - Test Name: `Point3DTest`

### State Class (StateTest.cpp)
- **What You Are Testing:**
  - GetName: Ensures the `getName` method of the State class returns the correct state name.
  - SetAndGetCoordinates: Verifies the functionality of setting and getting coordinates in the State class.
  - SetAndGetAQIData: Tests setting and getting AQI data in the State class.
- **Test Location:**
  - File: StateTest.cpp
  - Test Name: `StateTest`

## Integration of Testing Tool

1. **Google Test Setup in Visual Studio:**
   - Download Google Test via the Visual Studio NuGet Package Manager.
   - This step automatically configures the necessary settings for Google Test in your Visual Studio project.

2. **Include Google Test in Your Project:**
   - Verify that the necessary Google Test headers are included in your test files (e.g., `#include <gtest/gtest.h>`).

3. **Configure Your Test Runner:**
   - Set up a test runner that includes and runs your test files.
   - Ensure the test runner is configured to link against the Google Test library, which is handled automatically in Visual Studio after the installation.

4. **Run Your Tests:**
   - Execute the test runner to run your tests and verify that everything is set up correctly.
