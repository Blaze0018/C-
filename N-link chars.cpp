//根本就不需要指针啊
//用了指针还更麻烦。。 
#include<stdio.h>
#include<stdlib.h>
#define MAX 100//max应当是接起来的最长长度 
int main(void){
	system("pause");
	char a[MAX],b[MAX],*p = b;
	int t = 0;
	printf("分别输入两段语句\n");
	gets(a);
	gets(b);
	for(int i = 0;i < MAX;i++){
		if(a[i] == 0){
			t = i;
			break;
		}
	}
	for(int j = 0;j < MAX;j++){
		a[t + j] = *(p + j);
		if(b[j] = 0){
			break;
		}
	}
	puts(a);
	return EXIT_SUCCESS;
} 
