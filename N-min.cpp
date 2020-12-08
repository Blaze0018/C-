#include<stdio.h>
#include<stdlib.h>
int main(void){
	system("pause");
	int a,b,c;
	int *pa = &a,*pb = &b,*pc = &c,t;
	scanf("%d%d%d",&a,&b,&c);
	if(a > b){
		t = *pb;
		*pb = *pa;
		*pa = t;
	}
	if(b > c){
		t = *pb;
		*pb = *pc;
		*pc = t;
	}
	if(a > b){
		t = *pb;
		*pb = *pa;
		*pa = t;
	}
	printf("%d,%d,%d",*pa,*pb,*pc);
	return 0;
}
