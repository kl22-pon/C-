/*
从键盘输入一个长度为5的整型数组，再从键盘输入一个整数，在数组中查找该数组是否存在，
如果存在输出其所在的最小下标，如果不存在，输出"error" 
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
