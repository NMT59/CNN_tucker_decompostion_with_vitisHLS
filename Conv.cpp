void Conv2D_0(float Input_Conv[1024],float Output_Conv[4704], float bias[6], float kernel[150]){
	loop_for_channel2D_0:
	for (int n = 0; n < 6; n++){
		loop_for_bp2D_0:
		for (int x = 0; x < 28; x++){
			loop_for_ap2D_0:
			for (int y = 0; y < 28; y++){
				float s = 0;
				loop_for_fc_0:
				for (int k = 0; k < 1; k++){
					loop_for_fb_0:
					for (int i = 0; i < 5; i++){
						loop_for_fa_0:
						for (int j = 0; j < 5; j++){
							s=s+(kernel[1*5*5*n+5*5*k+5*i+j])*(Input_Conv[32*32*k+32*(i+x)+j+y]);}
					}
				}
				if ((s+bias[n])<0) Output_Conv[28*28*n+28*x+y]=0; else Output_Conv[28*28*n+28*x+y]=s+bias[n];
			}
		}
	}
}
void Conv2D_1(float Input_Conv[1176],float Output_Conv[980], float bias[5], float kernel[30]){
	loop_for_channel2D_1:
	for (int n = 0; n < 5; n++){
		loop_for_bp2D_1:
		for (int x = 0; x < 14; x++){
			loop_for_ap2D_1:
			for (int y = 0; y < 14; y++){
				float s = 0;
				loop_for_fc_1:
				for (int k = 0; k < 6; k++){
					loop_for_fb_1:
					for (int i = 0; i < 1; i++){
						loop_for_fa_1:
						for (int j = 0; j < 1; j++){
							s=s+(kernel[6*1*1*n+1*1*k+1*i+j])*(Input_Conv[14*14*k+14*(i+x)+j+y]);}
					}
				}
				if ((s+bias[n])<0) Output_Conv[14*14*n+14*x+y]=0; else Output_Conv[14*14*n+14*x+y]=s+bias[n];
			}
		}
	}
}
void Conv2D_2(float Input_Conv[980],float Output_Conv[900], float bias[9], float kernel[1125]){
	loop_for_channel2D_2:
	for (int n = 0; n < 9; n++){
		loop_for_bp2D_2:
		for (int x = 0; x < 10; x++){
			loop_for_ap2D_2:
			for (int y = 0; y < 10; y++){
				float s = 0;
				loop_for_fc_2:
				for (int k = 0; k < 5; k++){
					loop_for_fb_2:
					for (int i = 0; i < 5; i++){
						loop_for_fa_2:
						for (int j = 0; j < 5; j++){
							s=s+(kernel[5*5*5*n+5*5*k+5*i+j])*(Input_Conv[14*14*k+14*(i+x)+j+y]);}
					}
				}
				if ((s+bias[n])<0) Output_Conv[10*10*n+10*x+y]=0; else Output_Conv[10*10*n+10*x+y]=s+bias[n];
			}
		}
	}
}
void Conv2D_3(float Input_Conv[900],float Output_Conv[1600], float bias[16], float kernel[144]){
	loop_for_channel2D_3:
	for (int n = 0; n < 16; n++){
		loop_for_bp2D_3:
		for (int x = 0; x < 10; x++){
			loop_for_ap2D_3:
			for (int y = 0; y < 10; y++){
				float s = 0;
				loop_for_fc_3:
				for (int k = 0; k < 9; k++){
					loop_for_fb_3:
					for (int i = 0; i < 1; i++){
						loop_for_fa_3:
						for (int j = 0; j < 1; j++){
							s=s+(kernel[9*1*1*n+1*1*k+1*i+j])*(Input_Conv[10*10*k+10*(i+x)+j+y]);}
					}
				}
				if ((s+bias[n])<0) Output_Conv[10*10*n+10*x+y]=0; else Output_Conv[10*10*n+10*x+y]=s+bias[n];
			}
		}
	}
}
void Conv2D_4(float Input_Conv[400],float Output_Conv[120], float bias[120], float kernel[48000]){
	loop_for_channel2D_4:
	for (int n = 0; n < 120; n++){
		loop_for_bp2D_4:
		for (int x = 0; x < 1; x++){
			loop_for_ap2D_4:
			for (int y = 0; y < 1; y++){
				float s = 0;
				loop_for_fc_4:
				for (int k = 0; k < 16; k++){
					loop_for_fb_4:
					for (int i = 0; i < 5; i++){
						loop_for_fa_4:
						for (int j = 0; j < 5; j++){
							s=s+(kernel[16*5*5*n+5*5*k+5*i+j])*(Input_Conv[5*5*k+5*(i+x)+j+y]);}
					}
				}
				if ((s+bias[n])<0) Output_Conv[1*1*n+1*x+y]=0; else Output_Conv[1*1*n+1*x+y]=s+bias[n];
			}
		}
	}
}
