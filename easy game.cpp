#include<stdio.h>
int main(){
	printf("Test 1.00\n");
	int hp = 100,atk = 30,def = 10,choice,round=0;
	printf("小怪A出现了!\n");
	int enemyhp = 100,enemyatk = 15,enemydef = 10;
	while(enemyhp>=0){
		printf("round %d\n",++round);
		printf("敌方HP=%d\n你的HP=%d\n",enemyhp,hp);
		printf("choose\n1.attack 2.defence\n");
		scanf("%d",&choice);
		if(choice == 1){
			printf("你攻击了！\n");
			enemyhp = enemyhp - (atk - enemydef);
			if(enemyhp <= 0){
				break;
			}
		}
		else if(choice = 2){
			printf("你进行了防御！\n");
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
		printf("敌人仍没有倒下\n");
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
