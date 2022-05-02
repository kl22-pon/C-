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
	printf("请输入10个成绩\n");
	for(i=0;i<10;i++)
	{
		scanf("%f",&score[i]);
	} 
	average=aver(score);/*函数调用-数组名作实参*/
	printf("平均成绩为：%5.2f\n",average);
	return 0; 
}
