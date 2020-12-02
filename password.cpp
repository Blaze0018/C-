#include<stdio.h>
#define MAX 100
int main(void){
	printf("请输入以@结尾的明文\n");
	printf("@后的数据均无效\n");
	printf("之后将输出密文\n"); 
	char password[MAX];
	int n;
	for(int f = 0;f < MAX;f++){
		password[f] = 0;//字符串完全初始化 
	}
	gets(password);
	puts(password);
	for(int i = 0;i < MAX;i++){
		if(password[i]<65||(password[i]>90&&password[i]<97)||password[i]>122){}
		else{
			if(password[i] < 91){
				password[i] = password[i] + 32;
				password[i]++;
				if(password[i] == 123){
					password[i] = 'a';
				}
			}
		}
		if(password[i] > 96){
			if(password[i] == 122){
				password[i] = 'a';
			}
			else{
				password[i]++;
			}
		}
		if(password[i] == '@'){
			n = i;
			break;
		}
		else if(i == MAX){
			printf("ERROR\n");
			printf("未检测到@\n");
			goto end;
		}
	}
	for(int j = 0;j <= n;j++){
		printf("%c",password[j]);
	}
	end:
	return 0;
}
