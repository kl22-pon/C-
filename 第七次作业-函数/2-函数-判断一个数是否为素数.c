#include<stdio.h>
int prime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			break;
		}
	}
	if(i=n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
} 
int main(void)
{
	int n,i;
	printf("Input n:");
	scanf("%d",&n);
	i=prime(n); 
	if(i==1)
	{
		printf("%d������",n);
	}
	else
	{
		printf("%d��������",n);
	}
	return 0;
}
