#include<stdio.h>
#define MAX 100
int main(void){
	printf("start\n");
	char ch[MAX],a;
	int t,m;
	gets(ch);
	for(int i = 0;i < MAX;i++){
		if(ch[i] == 0){
			t = i - 1;
			break;
		}
	}
	for(int j = 0;j < t - j + 1;j++){
		m = t - j;
	a = ch[j];
	ch[j] = ch[m];
	ch[m] = a;
	}
	puts(ch);
	return 0;
}
