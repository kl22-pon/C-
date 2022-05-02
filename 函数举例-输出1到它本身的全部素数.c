#include<stdio.h>
#include<stdbool.h>
bool Isprime(int m)
{
	int i;
	for(i=2;i<m;i++)
	{
		if(m%i==0)
		{
			break;
		}
	}
	if(i==m)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main(void)
{
	int i;
	int val;
	scanf("%d",&val); 
	for(i=2;i<=val;i++)
	{
		if(Isprime(i)) 
		printf("%d",i);
	}
	
	return 0;
}
