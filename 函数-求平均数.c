#include<stdio.h>
float aver(float score[10])
{
	int i;
	float average,sum=0;
	for(i=0;i<10;i++)
	{
		sum=sum+score[i];
	}
	average=sum/10;
	return average;
}
int main(void)
{
	int i;
	float average,score[i];
	printf("������10���ɼ�\n");
	for(i=0;i<10;i++)
	{
		scanf("%f",&score[i]);
	} 
	average=aver(score);/*��������-��������ʵ��*/
	printf("ƽ���ɼ�Ϊ��%5.2f\n",average);
	return 0; 
}
