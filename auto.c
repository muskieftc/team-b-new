#pragma config(Hubs,  S1, HTMotor,  HTServo,  HTMotor,  none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,     motorLeft,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     motorRight,    tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C3_1,     motorLift,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_2,     motorG,        tmotorTetrix, openLoop)
#pragma config(Servo,  srvo_S1_C2_1,    servoA,               tServoStandard)
#pragma config(Servo,  srvo_S1_C2_2,    servo2,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "JoystickDriver.c"

void encoderReset()
{
	nMotorEncoder[motorLeft] = 0;
	nMotorEncoder[motorRight] = 0;
}

void moveForward()
{
	motor[motorLeft] = 100;
	motor[motorRight] = 100;
}

void moveBackward()
{
	motor[motorLeft] = -100;
	motor[motorRight] = -100;
}

void stop()
{
	motor[motorLeft] = 0;
	motor[motorRight] = 0;
}

void goRotations(int rotations)
{
	encoderReset();

	while((nMotorEncoder[motorLeft] < 1440 * rotations) && (nMotorEncoder[motorRight] < 1440 * rotations)) {
		moveForward();
	}
	
	stop();

	encoderReset();
}

void turnRight(int rotations)
{
	encoderReset();

	//Finish this code!
}

task main()
{

	int path = 0

	//waitForStart(); //DONT FORGET TO ENABLE THIS AGAIN!!!!!!!!!!!!
	
	encoderReset();

	//Go to middle of ring

	goRotations(3);

	//Add code to figure out what path to take here
	

	//Start the choice

	if(path == 1) {
		
	}
	else if(path == 2) {

	}
	else if(path == 3) {

	}
	else {

	}


}
