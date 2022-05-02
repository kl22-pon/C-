#include<stdio.h>
double fact(int n)
{
	int p=1;
	int i;
	for(i=1;i<=n;i++)
	{
		p=p*i;
		printf("%d!=%d\n",i,p);
	}
	return p;
	
}
int main(void)
{
	int n;
	double j;
	printf("Input n: ");
	scanf("%d",&n);
	j=fact(n);
	
	return 0;
} 
