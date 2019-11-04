#include "robot.h"

int sensorValue = 0;     

void setup() {
    Serial.begin(9600);
    irServo.attach(9);
    pinMode(BTN_PIN_1,INPUT_PULLUP);
    pinMode(BTN_PIN_2,INPUT_PULLUP);

    pinMode(MOTOR_1A, OUTPUT);
    pinMode(MOTOR_1B, OUTPUT);
    pinMode(MOTOR_2A, OUTPUT);
    pinMode(MOTOR_2B, OUTPUT);
}

void loop() {
    int res1 = digitalRead(BTN_PIN_1);
    int res2 = digitalRead(BTN_PIN_2);
    
    if(res1 && res2)
    {
        driveForward(1);
    } else {
        driveBackward(1);
        delay(500);
        driveBrake();
        if(!res1){
            turnLeftTime(250);
        } else {
            turnRightTime(250);
        }

        driveForward(1);
        delay(500);
        driveBrake();
        if(!res2){
            turnLeftTime(250);
        } else {
            turnRightTime(250);
        }
    }
    delay(100);
}
/**
 * while true
 *  stop
 *  look for highest ir return
 *  turn in that direction
 *  drive for n secs
 *    if button hit
 *      backup
 *      turn away from button
 *      drive straight
 *      turn back
 *  
 *
 */
