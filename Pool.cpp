void Max_Pool2D_0(float input_MaxPooling[57600], float output_MaxPooling[14400]){
	int PoolSize = 2;
	int stride = 2;
	int index = 0;
	for (int i = 0; i < 64; i++){
		index = 0;
		for (int z = 0; z < 15; z++){
			for (int y = 0; y < 15; y++){
				float max_c = 0.0;
				for (int h = 0; h < PoolSize; h++){
					for (int w = 0; w < PoolSize; w++){
						int Pool_index = 30 * 30 * i + 30 * h + 30 * stride * z + w + y * stride;
						float Pool_value = input_MaxPooling[Pool_index];
						if (Pool_value >= max_c) max_c = Pool_value;
					}
				}
				int outIndex = 15 * 15 * i + index;
				output_MaxPooling[outIndex] = max_c;
				index++;
			}
		}
	}
}
void Max_Pool2D_1(float input_MaxPooling[32448], float output_MaxPooling[6912]){
	int PoolSize = 2;
	int stride = 2;
	int index = 0;
	for (int i = 0; i < 192; i++){
		index = 0;
		for (int z = 0; z < 6; z++){
			for (int y = 0; y < 6; y++){
				float max_c = 0.0;
				for (int h = 0; h < PoolSize; h++){
					for (int w = 0; w < PoolSize; w++){
						int Pool_index = 13 * 13 * i + 13 * h + 13 * stride * z + w + y * stride;
						float Pool_value = input_MaxPooling[Pool_index];
						if (Pool_value >= max_c) max_c = Pool_value;
					}
				}
				int outIndex = 6 * 6 * i + index;
				output_MaxPooling[outIndex] = max_c;
				index++;
			}
		}
	}
}
void Max_Pool2D_2(float input_MaxPooling[1024], float output_MaxPooling[256]){
	int PoolSize = 2;
	int stride = 2;
	int index = 0;
	for (int i = 0; i < 256; i++){
		index = 0;
		for (int z = 0; z < 1; z++){
			for (int y = 0; y < 1; y++){
				float max_c = 0.0;
				for (int h = 0; h < PoolSize; h++){
					for (int w = 0; w < PoolSize; w++){
						int Pool_index = 2 * 2 * i + 2 * h + 2 * stride * z + w + y * stride;
						float Pool_value = input_MaxPooling[Pool_index];
						if (Pool_value >= max_c) max_c = Pool_value;
					}
				}
				int outIndex = 1 * 1 * i + index;
				output_MaxPooling[outIndex] = max_c;
				index++;
			}
		}
	}
}
void flatten(float input_Flatten[256],float output_Flatten[256]){
	int hs = 0;
	for (int i = 0; i < 1; i++){
		for (int j = 0; j < 1; j++){
			for (int k = 0; k < 256; k++){
				output_Flatten[hs] = input_Flatten[1 * i + 1 * 1 * k + j ];
				hs++;
			}
		}
	}
}
