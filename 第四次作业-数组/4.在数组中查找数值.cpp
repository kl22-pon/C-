/*
�Ӽ�������һ������Ϊ5���������飬�ٴӼ�������һ���������������в��Ҹ������Ƿ���ڣ�
���������������ڵ���С�±꣬��������ڣ����"error" 
*/
#include<stdio.h>
int main(void)
{
	int i,a[5],m,flag=0;
	printf("input array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("input number:");
	scanf("%d",&m);
	for(i=0;i<5;i++)
	{
		if(a[i]==m)
		{
		   printf("i=%d",i);
		   flag=1;
		   break;
	    } 
    }
    if(flag==0)
    {
       printf("error");
    } 
	return 0;
} 
