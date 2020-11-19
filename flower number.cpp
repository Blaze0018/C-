#include<stdio.h>
#include<math.h>
int main(){
	double num = 100,h = 1,t = 0,n = 0,a;
	while(num < 1000){
		a = pow(h,3) + pow(t,3) + pow(n,3);
		if(a == num){
			printf("%f\n",num);
		}
		num++;
		n++;
		if(n == 10){
			t++;
			n = 0;
		}
		if(t == 10){
			h++;
			t = 0;
		}
	}
	return 0;
}
