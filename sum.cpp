#include<stdio.h>
int main(){
	printf("���1+1/3+1/5+...+1/99֮��\n");
	float a = 0,m = 1;
	while(m < 100){
		a = a + 1/m;
		m = m + 2;
	}
	printf("%f",a);
	return 0;
} 
