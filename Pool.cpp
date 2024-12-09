void Max_Pool2D_0(float input_MaxPooling[11520], float output_MaxPooling[2880]){
	int PoolSize = 2;
	int stride = 2;
	int index = 0;
	for (int i = 0; i < 20; i++){
		index = 0;
		for (int z = 0; z < 12; z++){
			for (int y = 0; y < 12; y++){
				float max_c = 0.0;
				for (int h = 0; h < PoolSize; h++){
					for (int w = 0; w < PoolSize; w++){
						int Pool_index = 24 * 24 * i + 24 * h + 24 * stride * z + w + y * stride;
						float Pool_value = input_MaxPooling[Pool_index];
						if (Pool_value >= max_c) max_c = Pool_value;
					}
				}
				int outIndex = 12 * 12 * i + index;
				output_MaxPooling[outIndex] = max_c;
				index++;
			}
		}
	}
}
void Max_Pool2D_1(float input_MaxPooling[3200], float output_MaxPooling[800]){
	int PoolSize = 2;
	int stride = 2;
	int index = 0;
	for (int i = 0; i < 50; i++){
		index = 0;
		for (int z = 0; z < 4; z++){
			for (int y = 0; y < 4; y++){
				float max_c = 0.0;
				for (int h = 0; h < PoolSize; h++){
					for (int w = 0; w < PoolSize; w++){
						int Pool_index = 8 * 8 * i + 8 * h + 8 * stride * z + w + y * stride;
						float Pool_value = input_MaxPooling[Pool_index];
						if (Pool_value >= max_c) max_c = Pool_value;
					}
				}
				int outIndex = 4 * 4 * i + index;
				output_MaxPooling[outIndex] = max_c;
				index++;
			}
		}
	}
}
void flatten(float input_Flatten[800],float output_Flatten[800]){
	int hs = 0;
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			for (int k = 0; k < 50; k++){
				output_Flatten[hs] = input_Flatten[4 * i + 4 * 4 * k + j ];
				hs++;
			}
		}
	}
}
