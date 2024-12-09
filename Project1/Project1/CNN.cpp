#include "Conv.h"
#include "Pool.h"
#include "Dense.h"
void CNN(float InModel[3072],float &OutModel,float Weights[1195978]){
	float OutConv2D0[57600];
	float OutPool0[14400];
	float OutConv2D1[32448];
	float OutPool1[6912];
	float OutConv2D2[4096];
	float OutConv2D3[1024];
	float OutPool2[256];
	float OutFlatten[256];
	float OutDense0[128];
	float OutDense1[128];
	Conv2D_0(&InModel[0],OutConv2D0,&Weights[1728],&Weights[0]);
	Max_Pool2D_0(OutConv2D0,OutPool0);
	Conv2D_1(OutPool0,OutConv2D1,&Weights[112384],&Weights[1792]);
	Max_Pool2D_1(OutConv2D1,OutPool1);
	Conv2D_2(OutPool1,OutConv2D2,&Weights[554944],&Weights[112576]);
	Conv2D_3(OutConv2D2,OutConv2D3,&Weights[1145024],&Weights[555200]);
	Max_Pool2D_2(OutConv2D3,OutPool2);
	flatten(OutPool2,OutFlatten);
	Dense_0(OutFlatten,OutDense0,&Weights[1178048],&Weights[1145280]);
	Dense_1(OutDense0,OutDense1,&Weights[1194560],&Weights[1178176]);
	Dense_2(OutDense1,OutModel,&Weights[1195968],&Weights[1194688]);
}
