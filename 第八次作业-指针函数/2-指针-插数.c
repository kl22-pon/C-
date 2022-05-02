#include<stdio.h>
int main(void)
{
	int a[6],i,k,t,j;
	printf("input array date:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("input insert data:\n");
	scanf("%d",&k);
	for(i=0;i<5;i++)
	{
		if(k<a[i])
		{
			t=i;
			break;
		}
	}
	if(i==5)
	{
		t=5;
	}
	for(j=5;j>t;j--)
	{
		a[j]=a[j-1];
	}
	a[t]=k;
	for(i=0;i<6;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
} 
