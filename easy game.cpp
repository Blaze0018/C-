#include<stdio.h>
int main(){
	printf("Test 1.00\n");
	int hp = 100,atk = 30,def = 10,choice,round=0;
	printf("С��A������!\n");
	int enemyhp = 100,enemyatk = 15,enemydef = 10;
	while(enemyhp>=0){
		printf("round %d\n",++round);
		printf("�з�HP=%d\n���HP=%d\n",enemyhp,hp);
		printf("choose\n1.attack 2.defence\n");
		scanf("%d",&choice);
		if(choice == 1){
			printf("�㹥���ˣ�\n");
			enemyhp = enemyhp - (atk - enemydef);
			if(enemyhp <= 0){
				break;
			}
		}
		else if(choice = 2){
			printf("������˷�����\n");
			def = def + 5;
		}
			else{
				printf("Please choose again\n");
				continue;
			}
		printf("you are under attack\n");
		hp = hp - (enemyatk - def);
		if(choice = 2){
			def = def - 5;
		}
		printf("������û�е���\n");
		if(hp <= 0){
			printf("you died!\n");
			break;
		}
	}
	if(hp > 0){
		printf("you win!\n");
	}
	else{
		printf("game over");
	}
	return 0;
}
