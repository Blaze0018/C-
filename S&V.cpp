#define PI 3.14
#include<stdio.h>
int main(){
	printf("����Բ�뾶��Բ����");
	int r,h;
	float S,V;
	scanf("%d%d",&r,&h);
	S = r * r * PI;
	V = S * h;
	printf("���=%f���=%f",S,V);
	return 0;
}
