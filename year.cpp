#include<stdio.h>
int main(){
	int year;
	printf("输入年份以判断闰否\n");
	scanf("%d",&year);
	if(year%400 == 0)
		printf("闰年");
	else if(year%100 != 0 && year%4 == 0)
		printf("闰年");
	else
		printf("平年");
	return 0;
}
