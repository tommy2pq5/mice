void intrpt_cmt0(){
	CMT0_INT_F=0;
	g_wait_counter++;

	
	g_dis_count+=g_L_speed*0.001;

	if(g_ACC_WS==1){
		g_L_speed+=g_L_accel*0.001;
		g_R_speed+=g_R_accel*0.001;
	}else if(g_ACC_WS==0){

	}else if(g_ACC_WS==-1){
		g_L_speed-=g_L_accel*0.001;
		g_R_speed-=g_R_accel*0.001;
	}
}