#include<stdio.h>
#define MAX 100
int main(void){
	printf("start\n");
	char ch[MAX],num = 0;
	gets(ch);
	for(int i = 0;i < MAX;i++){
		if(ch[i] == 32){
			num++;
		}
		if(ch[i] == 0){
			break;
		}
	}
	printf("¼ì²âµ½¿Õ¸ñÊý£º%d",num);
	return 0;
}
