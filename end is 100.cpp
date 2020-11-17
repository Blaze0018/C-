#include<stdio.h>
int main(){
	float a = 0,s = 1,m = 2;
	for(int i = 1;i <= 100;i++){
		a = a + s / m;
		s++;
		s++;
		m++;
		m++;
	}
	printf("%f",a);
	return 0;
}
