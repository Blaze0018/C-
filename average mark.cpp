#include<stdio.h>
int main(void){
	int s1,s2,s3;
	float average,as1 = 0,as2 = 0,as3 = 0;
	for(int i = 1;i < 6;i++){
		printf("�밴˳�������%dλͬѧ�ĳɼ�\n",i);
		scanf("%d%d%d",&s1,&s2,&s3);
		as1 = as1 + s1;
		as2 = as2 + s2;
		as3 = as3 + s3;
		average = (s1 + s2 + s3)/3;
		printf("��ͬѧƽ������Ϊ:%f\n\n",average);
	}
	printf("����ƽ���ɼ�\n%f\n%f\n%f\n",as1/5,as2/5,as3/5);
	return 0;
}
