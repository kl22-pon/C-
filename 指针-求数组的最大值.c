#include<stdio.h>
int main(void)
{
	int a[10],max;
	int *p;
	printf("������10�����ݣ�");
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
	printf("������Ϊ%d",max);
	
	return 0;
} 
