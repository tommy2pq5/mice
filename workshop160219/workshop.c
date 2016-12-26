void accTrapeWorkShop(float acc, float maxv, float minv, float dist){
	float sec1=0,sec2=0,sec3=0;

	sec1=(minv+maxv)*(maxv-minv)/acc/2;
	sec3=sec1;
	sec2=dist-sec1*2;//distが短いと負の値になる場合がある

	if(sec2<0){
		sec1=dist/2;
		sec3=sec1;
	}

	driveMotor(ON);


	g_L_speed=minv;
	g_R_speed=minv;

	g_L_accele=acc;
	g_R_accele=acc;

	g_dis_count=0;

	g_ACC_WS=1;
	while(1){
		if(g_dis_count>sec1){
			break;
		}
	}
	g_dis_count=0;

	g_ACC_WS=0;
	while(1){
		if(g_dis_count>sec2){
			break;
		}
	}
	g_dis_count=0;

	g_ACC_WS=-1;
	while(1){
		if(g_dis_count>=sec3 || g_L_speed<=minv){
			break;
		}
	}
	g_dis_count=0;

	g_ACC_WS=0;
	driveMotor(OFF);
}