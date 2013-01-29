task main()
{
	while(true){
		int irsensor = SensorValue[irseeker];
		if (irsensor != 0) {
			PlaySound(soundBeepBeep);
		}
	}
}
