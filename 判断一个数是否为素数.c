//用单独的函数来实现，代码的可利于率提高 
#include<stdio.h>
#include<stdbool.h> 

bool Isprime(int val)
{
	int i;
	for(i=2;i<val;i++)
	{
		if(val%2==0)
		{
			break;
		}
	}
	if(i==val)
	   return true;
	else
	   return false;
}


int main(void)
{
	int val;
	int i;
	scanf("%d",&val);
	if(Isprime(val))
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	
	return 0;
}
