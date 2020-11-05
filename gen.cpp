#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,delta;
	printf("ax2+bx+c=0\nÊäÈëa,b,cµÄÖµ\n");
	scanf("%d%d%d",&a,&b,&c);
	delta = b * b - 4 * a * c;
	if(delta < 0){
		printf("No answer!");
	}
	else{
		float x1,x2;
		x1 = (- b + sqrt(delta))/(2 * a);
		x2 = (- b - sqrt(delta))/(2 * a);
		printf("x1=%f\nx2=%f",x1,x2);
	}
	return 0;
}
