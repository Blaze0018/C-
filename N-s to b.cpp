#include<stdio.h>
#include<stdlib.h>
#define LEN 10
int main(void){
	system("pause");
	int a[LEN],t = 0;
	int *p = NULL;
	for(int i = 0;i <LEN;i++){
		scanf("%d",&a[i]);
	}
	for(int j = 0;j < LEN;j++){
		t = 0;
		for(int k = 0;k < LEN;k++){
			if(a[t] > a[k]){
				t = k;
			}
		}
		p = &a[t];
		printf("%d ",*p);
		a[t] = 100000000;
	}
	return 0;
}
