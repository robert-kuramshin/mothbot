#ifndef MOTHBOT_H_
#define MOTHBOT_H_

#include <Servo.h>
#include <Arduino.h>

#define SEARCH_RANGE  90
#define SEARCH_STEP 5
#define SEARCH_CENTER 120
#define SEARCH_N_MEASUREMENTS  10

#define MOTOR_1B 5
#define MOTOR_1A 6
#define MOTOR_2B 3
#define MOTOR_2A 10

#define BTN_PIN_1 11
#define BTN_PIN_2 2

const int analogInPin = A0;

/**-----------------------------------------**/

void setupMotors();

void driveForward(int rate);

void driveBackward(int rate);

void driveLeft(int rate);

void driveRight(int rate);

void driveBrake();

void turnLeftTime(int t);

void turnRightTime(int t);

/**-----------------------------------------**/

int search();

/**-----------------------------------------**/

#endif