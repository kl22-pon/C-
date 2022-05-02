#include<stdio.h>
#include<stdbool.h>
bool Isprime(int val)
{
	int i;
	
	for(i=2;i<val;i++)
	{
		if(val%i==0)
	 	break;
	}
	if(i==val)
	   return true;
	else
	   return false;
}
int main(void)
{
	int m;
	
	scanf("%d",m);
	if(Isprime(m))
	printf("yes\n");
	else
	printf("no\n");
	
	return 0;
} 
