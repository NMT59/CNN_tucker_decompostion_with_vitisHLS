void Max_Pool2D_0(float input_MaxPooling[4704], float output_MaxPooling[1176]){
	int PoolSize = 2;
	int stride = 2;
	int index = 0;
	for (int i = 0; i < 6; i++){
		index = 0;
		for (int z = 0; z < 14; z++){
			for (int y = 0; y < 14; y++){
				float max_c = 0.0;
				for (int h = 0; h < PoolSize; h++){
					for (int w = 0; w < PoolSize; w++){
						int Pool_index = 28 * 28 * i + 28 * h + 28 * stride * z + w + y * stride;
						float Pool_value = input_MaxPooling[Pool_index];
						if (Pool_value >= max_c) max_c = Pool_value;
					}
				}
				int outIndex = 14 * 14 * i + index;
				output_MaxPooling[outIndex] = max_c;
				index++;
			}
		}
	}
}
void Max_Pool2D_1(float input_MaxPooling[1600], float output_MaxPooling[400]){
	int PoolSize = 2;
	int stride = 2;
	int index = 0;
	for (int i = 0; i < 16; i++){
		index = 0;
		for (int z = 0; z < 5; z++){
			for (int y = 0; y < 5; y++){
				float max_c = 0.0;
				for (int h = 0; h < PoolSize; h++){
					for (int w = 0; w < PoolSize; w++){
						int Pool_index = 10 * 10 * i + 10 * h + 10 * stride * z + w + y * stride;
						float Pool_value = input_MaxPooling[Pool_index];
						if (Pool_value >= max_c) max_c = Pool_value;
					}
				}
				int outIndex = 5 * 5 * i + index;
				output_MaxPooling[outIndex] = max_c;
				index++;
			}
		}
	}
}
void flatten(float input_Flatten[120],float output_Flatten[120]){
	int hs = 0;
	for (int i = 0; i < 1; i++){
		for (int j = 0; j < 1; j++){
			for (int k = 0; k < 120; k++){
				output_Flatten[hs] = input_Flatten[1 * i + 1 * 1 * k + j ];
				hs++;
			}
		}
	}
}
