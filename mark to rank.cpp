#include<stdio.h>
int main(){
	printf("输入分数以得到等级\n");
	char rank;
	int mark;
	scanf("%d",&mark);
	if(mark < 60){
		rank = 'E';
	}
	else if(mark < 70){
		rank = 'D';
	}
		else if(mark < 80){
			rank = 'C';
		}
			else if(mark < 90){
				rank = 'B';
			}
				else {
					rank = 'A';
				}
	printf("Rank=%c",rank);
	return 0;
}
