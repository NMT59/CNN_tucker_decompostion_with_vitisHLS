void Dense_0(float input_Dense[120],float output_Dense[84],float bias[84],float weight[10080]){
	loop_for_a_Dense_0:
	for (int i = 0; i < 84; i++){
		float s=0;
		loop_for_b_Dense_0:
		for (int j = 0; j < 120; j++){
			s+=input_Dense[j]*weight[j*84+i];
		}
		if ((s+bias[i])<0) output_Dense[i]=0; else output_Dense[i]=s+bias[i];
	}
}
void Dense_1(float input_Dense[84],float &output_Dense,float bias[10],float weight[840]){
	float out_Dense[10];
	loop_for_a_Dense_1:
	for (int i = 0; i < 10; i++){
		float s=0;
		loop_for_b_Dense_1:
		for (int j = 0; j < 84; j++){
			s+=input_Dense[j]*weight[j*10+i];
		}
		out_Dense[i]=s+bias[i];
	}
	float maxindex=out_Dense[0];
	output_Dense = 0;
	loop_detect:
	for (int i=1; i<10; i++){
		if (out_Dense[i]>maxindex) {
			maxindex=out_Dense[i];
			output_Dense=i;
		}
	}
}
