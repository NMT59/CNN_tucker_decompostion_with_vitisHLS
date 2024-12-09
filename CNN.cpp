#include "Conv.h"
#include "Pool.h"
#include "Dense.h"
void CNN(float InModel[1024],float &OutModel,float Weights[60605]){
	float OutConv2D0[4704];
	float OutPool0[1176];
	float OutConv2D1[980];
	float OutConv2D2[900];
	float OutConv2D3[1600];
	float OutPool1[400];
	float OutConv2D4[120];
	float OutFlatten[120];
	float OutDense0[84];
	Conv2D_0(&InModel[0],OutConv2D0,&Weights[150],&Weights[0]);
	Max_Pool2D_0(OutConv2D0,OutPool0);
	Conv2D_1(OutPool0,OutConv2D1,&Weights[186],&Weights[156]);
	Conv2D_2(OutConv2D1,OutConv2D2,&Weights[1311],&Weights[186]);
	Conv2D_3(OutConv2D2,OutConv2D3,&Weights[1455],&Weights[1311]);
	Max_Pool2D_1(OutConv2D3,OutPool1);
	Conv2D_4(OutPool1,OutConv2D4,&Weights[49471],&Weights[1471]);
	flatten(OutConv2D4,OutFlatten);
	Dense_0(OutFlatten,OutDense0,&Weights[59671],&Weights[49591]);
	Dense_1(OutDense0,OutModel,&Weights[60595],&Weights[59755]);
}
