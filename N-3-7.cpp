#include<stdio.h>
#include<stdlib.h>
#define LEN 10
int main(void){
	system("pause");
	int a[LEN],t;
	int *pa = a;
	for(int h = 0;h < 10;h++){
		scanf("%d",&a[h]);
	}
	for(int i = 2;i < 7;i++){
		t = *(pa + i);
		printf("%d ",t);
	}
	return 0;
}
