#include<stdio.h>
#include<stdlib.h>
void change(int *pa,int *pb,int *pc);
int main(void){
	system("pause");
	int a,b,c;
	int *pst = &a,*pnd = &b,*prd = &c;
	scanf("%d%d%d",&a,&b,&c);
	change(pst,pnd,prd);
	return 0;
}

void change(int *pa,int *pb,int *pc){
	int num[3] = {*pa,*pb,*pc},t;
	if(num[0] > num[1]){
		t = num[0];
		num[0] = num[1];
		num[1] = t;
	}
	if(num[1] > num[2]){
		t = num[1];
		num[1] = num[2];
		num[2] = t;
	}
	if(num[0] > num[1]){
		t = num[0];
		num[0] = num[1];
		num[1] = t;
	}
	pa = &num[0];
	pb = &num[1];
	pc = &num[2];
	printf("%d %d %d",*pa,*pb,*pc);
}
