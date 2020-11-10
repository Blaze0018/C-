#include<stdio.h>
int main(){
	char orign,next;
	scanf("%c",&orign);
	if(orign<65||(orign>90&&orign<97)||orign>122){
		next = orign;
	}
	else if(orign < 96){
		next = orign + 32;
	}
		else{
			next = orign - 32;
		}
	printf("%c",next);
	return 0;
}
