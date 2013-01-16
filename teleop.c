#pragma config(Hubs,  S1, HTMotor,  HTServo,  HTMotor,  none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Motor,  motorA,           ,             tmotorNXT, openLoop)
#pragma config(Motor,  motorB,           ,             tmotorNXT, openLoop)
#pragma config(Motor,  motorC,           ,             tmotorNXT, openLoop)
#pragma config(Motor,  mtr_S1_C1_1,     leftMotor,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     rightMotor,    tmotorTetrix, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C3_1,     liftMotor,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_2,     motorG,        tmotorTetrix, openLoop)
#pragma config(Servo,  srvo_S1_C2_1,    servoA,               tServoStandard)
#pragma config(Servo,  srvo_S1_C2_2,    servo2,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "JoystickDriver.c"

task main()
{
	//Drive Variable
	int rightSpeed = 0;
	int leftSpeed = 0;
	int maxSpeed = 0;

	//Lift variables
	int liftSpeed = 0;
	int maxLiftSpeed = 0;

	while(true){
		getJoystickSettings(joystick);
		//Start of driving controls
		if ((joy1Btn(4)) && (!joy1Btn(2))) {
			maxSpeed = 1;
		}
		else if ((joy1Btn(2)) && (!joy1Btn(4))) {
			maxSpeed = 0;
		}

		if ((joy1Btn(6)) && (!joy1Btn(5))) {
			rightSpeed = 75;
			leftSpeed = 75;
		}
		else if ((joy1Btn(5)) && (!joy1Btn(6))) {
			rightSpeed = -75;
			leftSpeed = -75;
		}
		else {
			if (maxSpeed == 1) {
				leftSpeed = joystick.joy1_y1/4;
				rightSpeed = joystick.joy1_y2/4;
			}
			else {
				leftSpeed = joystick.joy1_y1;
				rightSpeed = joystick.joy1_y2;
			}
		}

		motor[leftMotor] = leftSpeed;
		motor[rightMotor] = rightSpeed;
		//End of driving controls code

		//Begin lift controls

	}
}
