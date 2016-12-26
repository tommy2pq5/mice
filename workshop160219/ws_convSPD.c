#define M_PI 3.1415926

int convertSpeedPeriodL(float LSpeed){
	/*
	mmpp=pi/200*ld/2[mm/pulse]
	spd=mmpp*(6250000/TGRA)[mm/s]
	TGRA=mmpp*6250000/spd
	TGRA=M_PI/200*L_DIAMETER/2*6250000/LSpeed
	*/

	return M_PI/200*L_DIAMETER/2*6250000/LSpeed;
}