#include<stdio.h>
#include<stdlib.h>
int n = 5; //由这里决定n 
float averge(int arr[],int);
int main(void){
	system("pause");
	int target[n];
	float av;
	for(int j = 0;j < n;j++){
		scanf("%d",&target[j]);
	}
	av = averge(target,n);
	for(int k = 0;k < n;k++){
		if(target[k] < av){
			printf("%d ",target[k]);
		}
	}
	return EXIT_SUCCESS;
}

float averge(int arr[],int n){
	int sum = 0;
	float ave;
	for(int i = 0;i < n;i++){
		sum = sum + arr[i];
	}
	ave = sum/n;
	return(ave);
}
