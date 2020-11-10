#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int m;
	if(a > b){
		m = a;
	}
	else{
		m = b;
	}
	if(c > m){
		m = c;
	}
	printf("max=%d",m);
	return 0;
} 
