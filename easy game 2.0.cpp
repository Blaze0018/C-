#include<stdio.h>
#include<math.h>
#include<iostream>
int main(){
	printf("�غ��ƶ�ս(?)ģ���� V2.00\n");
	char none;
	printf("����������ֵ��ʼ\n");
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
				printf("����ʹ�ñ�ɱ��\n");
				printf("����Yʹ��\n");
				scanf("%c",&none);
				if(none == 89){
					break;
				}
			}
		}
	}
	if(none == 89){
		printf("��Ϊ����֮��\n");
		printf("��˵ԭʼ\n");
		printf("��ط��룬������Ϊ����֮ף��\n");
		printf("�Դ�֮��˺�����\n");
		printf("�ǳ�����\n");
		printf("���ϵĵ������Ǵ���ǰҹ���յ�\n");
		printf("������ƽϢһ��\n");
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
