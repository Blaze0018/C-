#include<stdio.h>
int main(){
	int year;
	printf("����������ж����\n");
	scanf("%d",&year);
	if(year%400 == 0)
		printf("����");
	else if(year%100 != 0 && year%4 == 0)
		printf("����");
	else
		printf("ƽ��");
	return 0;
}
