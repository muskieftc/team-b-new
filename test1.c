
task main()
{
	nMotorEncoder[motorLeft] = 0;
	nMotorEncoder[motorRight] = 0;

	while(true) {
		motor[motorLeft] = 100;
		motor[motorRight] = 100;

		int leftEncoder = nMotorEncoder[motorLeft];
		int rightEncoder = nMotorEncoder[motorRight];

		eraseDisplay();
		
		nxtDisplayCenteredTextLine(2, "Left = %d", leftEncoder);
		nxtDisplayCenteredTestLine(4, "Right = %d", rightEncoder);
	}
}
