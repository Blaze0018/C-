#include<stdio.h>
#include<stdlib.h>
int max(int,int);
int main(void){
	system("pause");
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);
	t = max(a,b);
	t = max(t,c);
	printf("max=%d",t);
	return EXIT_SUCCESS;
}

int max(int x,int y){
	if(x > y){
		return(x);
	}
	else{
		return(y);
	}
}
