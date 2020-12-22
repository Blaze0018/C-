#include<stdio.h>
#include<stdlib.h>
#define LEN 100
void nega(char ch[]);
int main(void){
	system("pause");
	char ch[LEN];
	gets(ch);
	nega(ch);
	puts(ch);
	return 0;
}

void nega(char ch[]){
	int t = LEN;
	char m;
	for(int i = 0;i < LEN;i++){
		if(ch[i] == 0){
			t = i;
			break;
		}
	}
	for(int j = 0;j < t - j;j++){
		m = ch[j];
		ch[j] = ch[t - j - 1];
		ch[t - j - 1] = m;
	}
}
