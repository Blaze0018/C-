//�����Ͳ���Ҫָ�밡
//����ָ�뻹���鷳���� 
#include<stdio.h>
#include<stdlib.h>
#define MAX 100//maxӦ���ǽ������������ 
int main(void){
	system("pause");
	char a[MAX],b[MAX],*p = b;
	int t = 0;
	printf("�ֱ������������\n");
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
