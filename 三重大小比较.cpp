#include <stdio.h>
int max(int x,int y){
 	int z;
 	if(x>y){
 		z=x;
		 }
 	else z=y;
 	return z;
 }
 
int main(){
	int t1,t2,t3,v;
	scanf("%d%d%d",&t1,&t2,&t3);
	v = max(t1,t2);
	v = max(v,t3);
	printf("%d",v);
	return 0;
 } 
