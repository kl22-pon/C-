/*
给一个含有10个元素的数组赋值（正整数值），求数组中偶数的个数和偶数的平均数。 
*/
#include<stdio.h>
int main(void)
{
	int i, a[10] ,m=0;//偶数个数计时器
	float sum=0, ave;
	printf("Input munber: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			m++;
			sum=sum+a[i];
		}
	}
	ave=sum/m;
	printf("the number of even number is: %d\n",m);
	printf("the average of even number is: %4.1f\n",ave);
	
	return 0;
}
