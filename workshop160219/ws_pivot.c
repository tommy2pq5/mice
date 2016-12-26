/**
*dir
*:0 -> CW
*:1 -> CCW
*/
void pivot(float deg, char dir){
	float dist=0;

	g_L_speed=150;
	g_R_speed=150;

	if(dir==0){
		PE.DRL.BIT.B0=0;
		PE.DRL.BIT.B4=1;
	}else{
		PE.DRL.BIT.B0=1;
		PE.DRL.BIT.B4=0;		
	}

	dist=TREAD/2*(deg*2*M_PI/360);
	accTrapeWorkShop(500, 1000, 150, dist);

	PE.DRL.BIT.B0=0;
	PE.DRL.BIT.B4=0;		
}