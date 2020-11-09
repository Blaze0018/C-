#include<stdio.h>
#include<math.h>
#include<iostream>
int main(){
	printf("回合制对战(?)模拟器 V2.00\n");
	char none;
	printf("输入任意数值开始\n");
	scanf("%c",&none);
	printf("WARNING\n");
	printf("WARNING\n");
	printf("WARNING\n");
	printf("Enemy Detected\n");
	printf("[ZEUS]\n");
	int hp = 10000,atk = 10000,def = 1000,NP = 0;
	int zhp = 1000000,zatk = 1500,zdef = 9000;
	int i = 1;
	printf("Grand Battle\n");
	while(zhp >= 0){
		printf("TURN %d\n",i);
		i++;
		printf("Enemy\n[ZEUS]\n");
		printf("%d/1000000\n\n",zhp);
		printf("Galgamesh\n");
		printf("%d/10000\nNP %d\n",hp,NP);
		printf("1=attack\n2=NPup\n\n\n");
		char choice;
		scanf("%d",&choice);
		if(choice == 1){
			zhp = zhp - atk + zdef;
			hp = hp - zatk + def;
			NP = NP + 10;
		}
		else{
			hp = hp - zatk + def;
			NP = NP + 15;
		}
		if(NP >= 100){
			if(hp <= 5000){
				printf("可以使用必杀了\n");
				printf("输入Y使用\n");
				scanf("%c",&none);
				if(none == 89){
					break;
				}
			}
		}
	}
	if(none == 89){
		printf("此为诀别之礼\n");
		printf("诉说原始\n");
		printf("天地分离，虚无是为开辟之祝贺\n");
		printf("以此之剑撕裂天地\n");
		printf("星辰翻卷\n");
		printf("天上的地狱正是创世前夜的终点\n");
		printf("以死亡平息一切\n");
		printf("Enuma Elish!!!!\n");
		printf("Battle Finish\n");
	}
	if(hp <= 0){
		printf("Game Over\n");
	}
	else{
		printf("Battle Finish\n");
	}
	return 0;
}
