void Conv2D_0(float Input_Conv[3072],float Output_Conv[57600], float bias[64], float kernel[1728]){
	loop_for_channel2D_0:
	for (int n = 0; n < 64; n++){
		loop_for_bp2D_0:
		for (int x = 0; x < 30; x++){
			loop_for_ap2D_0:
			for (int y = 0; y < 30; y++){
				float s = 0;
				loop_for_fc_0:
				for (int k = 0; k < 3; k++){
					loop_for_fb_0:
					for (int i = 0; i < 3; i++){
						loop_for_fa_0:
						for (int j = 0; j < 3; j++){
							s=s+(kernel[3*3*3*n+3*3*k+3*i+j])*(Input_Conv[32*32*k+32*(i+x)+j+y]);}
					}
				}
				if ((s+bias[n])<0) Output_Conv[30*30*n+30*x+y]=0; else Output_Conv[30*30*n+30*x+y]=s+bias[n];
			}
		}
	}
}
void Conv2D_1(float Input_Conv[14400],float Output_Conv[32448], float bias[192], float kernel[110592]){
	loop_for_channel2D_1:
	for (int n = 0; n < 192; n++){
		loop_for_bp2D_1:
		for (int x = 0; x < 13; x++){
			loop_for_ap2D_1:
			for (int y = 0; y < 13; y++){
				float s = 0;
				loop_for_fc_1:
				for (int k = 0; k < 64; k++){
					loop_for_fb_1:
					for (int i = 0; i < 3; i++){
						loop_for_fa_1:
						for (int j = 0; j < 3; j++){
							s=s+(kernel[64*3*3*n+3*3*k+3*i+j])*(Input_Conv[15*15*k+15*(i+x)+j+y]);}
					}
				}
				if ((s+bias[n])<0) Output_Conv[13*13*n+13*x+y]=0; else Output_Conv[13*13*n+13*x+y]=s+bias[n];
			}
		}
	}
}
void Conv2D_2(float Input_Conv[6912],float Output_Conv[4096], float bias[256], float kernel[442368]){
	loop_for_channel2D_2:
	for (int n = 0; n < 256; n++){
		loop_for_bp2D_2:
		for (int x = 0; x < 4; x++){
			loop_for_ap2D_2:
			for (int y = 0; y < 4; y++){
				float s = 0;
				loop_for_fc_2:
				for (int k = 0; k < 192; k++){
					loop_for_fb_2:
					for (int i = 0; i < 3; i++){
						loop_for_fa_2:
						for (int j = 0; j < 3; j++){
							s=s+(kernel[192*3*3*n+3*3*k+3*i+j])*(Input_Conv[6*6*k+6*(i+x)+j+y]);}
					}
				}
				if ((s+bias[n])<0) Output_Conv[4*4*n+4*x+y]=0; else Output_Conv[4*4*n+4*x+y]=s+bias[n];
			}
		}
	}
}
void Conv2D_3(float Input_Conv[4096],float Output_Conv[1024], float bias[256], float kernel[589824]){
	loop_for_channel2D_3:
	for (int n = 0; n < 256; n++){
		loop_for_bp2D_3:
		for (int x = 0; x < 2; x++){
			loop_for_ap2D_3:
			for (int y = 0; y < 2; y++){
				float s = 0;
				loop_for_fc_3:
				for (int k = 0; k < 256; k++){
					loop_for_fb_3:
					for (int i = 0; i < 3; i++){
						loop_for_fa_3:
						for (int j = 0; j < 3; j++){
							s=s+(kernel[256*3*3*n+3*3*k+3*i+j])*(Input_Conv[4*4*k+4*(i+x)+j+y]);}
					}
				}
				if ((s+bias[n])<0) Output_Conv[2*2*n+2*x+y]=0; else Output_Conv[2*2*n+2*x+y]=s+bias[n];
			}
		}
	}
}
