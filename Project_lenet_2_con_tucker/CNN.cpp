#include "Conv.h"
#include "Pool.h"
#include "Dense.h"
#include <hls_math.h>
void CNN(float InModel[784],float &OutModel,float Weights[419680]){
	float OutConv2D0[11520];
	float OutPool0[2880];
	float OutConv2D1[2880];
	float OutConv2D2[1536];
	float OutConv2D3[3200];
	float OutPool1[800];
	float OutFlatten[800];
	float OutDense0[500];
	Conv2D_0(&InModel[0],OutConv2D0,&Weights[500],&Weights[0]);
	Max_Pool2D_0(OutConv2D0,OutPool0);
	Conv2D_1(OutPool0,OutConv2D1,&Weights[920],&Weights[520]);
	Conv2D_2(OutConv2D1,OutConv2D2,&Weights[12920],&Weights[920]);
	Conv2D_3(OutConv2D2,OutConv2D3,&Weights[14120],&Weights[12920]);
	Max_Pool2D_1(OutConv2D3,OutPool1);
	flatten(OutPool1,OutFlatten);
	Dense_0(OutFlatten,OutDense0,&Weights[414170],&Weights[14170]);
	// Apply hls::tanh function as activation function
	for(int i = 0; i < 500; i++) {
	    OutDense0[i] = hls::tanh(OutDense0[i]);
	}
	Dense_1(OutDense0,OutModel,&Weights[419670],&Weights[414670]);
}
