#include "robot.h"

void driveForward(int rate)
{
    driveBrake();
    digitalWrite(MOTOR_1A,HIGH);
    digitalWrite(MOTOR_2A,HIGH);

    digitalWrite(MOTOR_1B,LOW);
    digitalWrite(MOTOR_2B,LOW);
}

void driveBackward(int rate)
{
    driveBrake();
    digitalWrite(MOTOR_1B,HIGH);
    digitalWrite(MOTOR_2B,HIGH);

    digitalWrite(MOTOR_1A,LOW);
    digitalWrite(MOTOR_2A,LOW);
}

void driveLeft(int rate)
{
    driveBrake();
    digitalWrite(MOTOR_1B,HIGH);
    digitalWrite(MOTOR_2A,HIGH);

    digitalWrite(MOTOR_1A,LOW);
    digitalWrite(MOTOR_2B,LOW);
}

void driveRight(int rate)
{
    driveBrake();
    digitalWrite(MOTOR_1A,HIGH);
    digitalWrite(MOTOR_2B,HIGH);

    digitalWrite(MOTOR_1B,LOW);
    digitalWrite(MOTOR_2A,LOW);
}

void driveBrake()
{
    driveBrake();
    digitalWrite(MOTOR_1A,LOW);
    digitalWrite(MOTOR_2B,LOW);

    digitalWrite(MOTOR_1B,LOW);
    digitalWrite(MOTOR_2A,LOW);
}

void turnLeftTime(int t)
{
    driveBrake();
    driveLeft(1);
    delay(t);
    driveBrake();
}

void turnRightTime(int t)
{
    driveBrake();
    driveRight(1);
    delay(t);
    driveBrake();
}