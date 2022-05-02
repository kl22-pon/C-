/*
从键盘输入5个学生的成绩存放到数组中，并求平均数，总数和。 
*/
#include<stdio.h>
int main(void)
{
	int i,a[5];
	float sum=0, ave;
	printf("input numbers: ");
	for(i=1;i<=5;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	 ave=sum/5;
	 printf("%4.2f",ave);
	
	
	return 0;
}
