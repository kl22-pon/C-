#include<stdio.h>
int main(void)
{
	int a[10],max;
	int *p;
	printf("请输入10个数据：");
	for(p=a;p<a+10;p++)
	{
		scanf("%d",p);
	}
	p=a;
	max=*p;
	for(;p<a+10;p++)
	{
		if(max<* p);
		{
			max=* p;
		}
	}
	printf("最大的数为%d",max);
	
	return 0;
} 
