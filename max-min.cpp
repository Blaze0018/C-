#include<stdio.h>
#include<stdlib.h>
int max(int,int);
int min(int,int);
int minus(int,int,int);
int main(void){
	system("pause");
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);
	t = minus(a,b,c);
	printf("max-min=%d",t);
	return EXIT_SUCCESS;
}

int max(int x,int y){
	if(x > y)
	return(x);
	else
	return(y);
}

int min(int x,int y){
	if(x > y)
	return(y);
	else
	return(x);
}

int minus(int x,int y,int z){
	int ans,mx,mn;
	mx = max(x,y);
	mx = max(mx,z);
	mn = min(x,y);
	mn = min(mn,z);
	ans = mx - mn;
	return(ans);
}
