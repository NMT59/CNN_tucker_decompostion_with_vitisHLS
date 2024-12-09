void Conv2D_0(float Input_Conv[784],float Output_Conv[11520], float bias[20], float kernel[500]){
	loop_for_channel2D_0:
	for (int n = 0; n < 20; n++){
		loop_for_bp2D_0:
		for (int x = 0; x < 24; x++){
			loop_for_ap2D_0:
			for (int y = 0; y < 24; y++){
				float s = 0;
				loop_for_fc_0:
				for (int k = 0; k < 1; k++){
					loop_for_fb_0:
					for (int i = 0; i < 5; i++){
						loop_for_fa_0:
						for (int j = 0; j < 5; j++){
							s=s+(kernel[1*5*5*n+5*5*k+5*i+j])*(Input_Conv[28*28*k+28*(i+x)+j+y]);}
					}
				}
				if ((s+bias[n])<0) Output_Conv[24*24*n+24*x+y]=0; else Output_Conv[24*24*n+24*x+y]=s+bias[n];
			}
		}
	}
}
void Conv2D_1(float Input_Conv[2880],float Output_Conv[2880], float bias[20], float kernel[400]){
	loop_for_channel2D_1:
	for (int n = 0; n < 20; n++){
		loop_for_bp2D_1:
		for (int x = 0; x < 12; x++){
			loop_for_ap2D_1:
			for (int y = 0; y < 12; y++){
				float s = 0;
				loop_for_fc_1:
				for (int k = 0; k < 20; k++){
					loop_for_fb_1:
					for (int i = 0; i < 1; i++){
						loop_for_fa_1:
						for (int j = 0; j < 1; j++){
							s=s+(kernel[20*1*1*n+1*1*k+1*i+j])*(Input_Conv[12*12*k+12*(i+x)+j+y]);}
					}
				}
				if ((s+bias[n])<0) Output_Conv[12*12*n+12*x+y]=0; else Output_Conv[12*12*n+12*x+y]=s+bias[n];
			}
		}
	}
}
void Conv2D_2(float Input_Conv[2880],float Output_Conv[1536], float bias[24], float kernel[12000]){
	loop_for_channel2D_2:
	for (int n = 0; n < 24; n++){
		loop_for_bp2D_2:
		for (int x = 0; x < 8; x++){
			loop_for_ap2D_2:
			for (int y = 0; y < 8; y++){
				float s = 0;
				loop_for_fc_2:
				for (int k = 0; k < 20; k++){
					loop_for_fb_2:
					for (int i = 0; i < 5; i++){
						loop_for_fa_2:
						for (int j = 0; j < 5; j++){
							s=s+(kernel[20*5*5*n+5*5*k+5*i+j])*(Input_Conv[12*12*k+12*(i+x)+j+y]);}
					}
				}
				if ((s+bias[n])<0) Output_Conv[8*8*n+8*x+y]=0; else Output_Conv[8*8*n+8*x+y]=s+bias[n];
			}
		}
	}
}
void Conv2D_3(float Input_Conv[1536],float Output_Conv[3200], float bias[50], float kernel[1200]){
	loop_for_channel2D_3:
	for (int n = 0; n < 50; n++){
		loop_for_bp2D_3:
		for (int x = 0; x < 8; x++){
			loop_for_ap2D_3:
			for (int y = 0; y < 8; y++){
				float s = 0;
				loop_for_fc_3:
				for (int k = 0; k < 24; k++){
					loop_for_fb_3:
					for (int i = 0; i < 1; i++){
						loop_for_fa_3:
						for (int j = 0; j < 1; j++){
							s=s+(kernel[24*1*1*n+1*1*k+1*i+j])*(Input_Conv[8*8*k+8*(i+x)+j+y]);}
					}
				}
				if ((s+bias[n])<0) Output_Conv[8*8*n+8*x+y]=0; else Output_Conv[8*8*n+8*x+y]=s+bias[n];
			}
		}
	}
}
