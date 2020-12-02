#include<stdio.h>
#define H 3
#define L 4
int main(void){
	printf("start\n");
	int orign[H][L],max[H],t;
	for(int i = 0;i < H;i++){
		for(int j = 0;j < L;j++){
			scanf("%d",&orign[i][j]);
			if(j == 0){
				t = orign[i][j];
			}
			if(t < orign[i][j]){
				t = orign[i][j];
			}
			if(j == L - 1){
				max[i] = t;
			}
		}
	}
	for(int q = 0;q < H;q++){
		printf("%d ",max[q]);
	}
	return true;
}
