#include<stdio.h>
int main(void){
	int s1,s2,s3;
	float average,as1 = 0,as2 = 0,as3 = 0;
	for(int i = 1;i < 6;i++){
		printf("请按顺序输入第%d位同学的成绩\n",i);
		scanf("%d%d%d",&s1,&s2,&s3);
		as1 = as1 + s1;
		as2 = as2 + s2;
		as3 = as3 + s3;
		average = (s1 + s2 + s3)/3;
		printf("该同学平均分数为:%f\n\n",average);
	}
	printf("各科平均成绩\n%f\n%f\n%f\n",as1/5,as2/5,as3/5);
	return 0;
}
