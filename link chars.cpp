#include<stdio.h>
#include<string.h>
#define LONG 100
#define SHORT 50
int main(void){
	char cha[LONG],chb[SHORT];
	int la,lb;
	printf("�ֱ����������ַ���\n");
	gets(cha);
	gets(chb);
	la = strlen(cha);
	lb = strlen(chb);
	for(int i = 0;i < lb;i++){
		cha[la + i] = chb[i];
	}
	puts(cha);
	return 0;
}
