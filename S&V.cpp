#define PI 3.14
#include<stdio.h>
int main(){
	printf("输入圆半径、圆柱高");
	int r,h;
	float S,V;
	scanf("%d%d",&r,&h);
	S = r * r * PI;
	V = S * h;
	printf("面积=%f体积=%f",S,V);
	return 0;
}
