#include<stdio.h>
int main(void)
{
	int n, m, k, a, b, c;
	printf("Input m: ");
	scanf("%d", &m);
	printf("Input n: ");
	scanf("%d", &n);
	k=m;
	while(k<n)
	{
		a=k/100;
		b=k%100/10;
		c=k%10;
		if(k==a*a*a+b*b*b+c*c*c)
		printf("%d\n", k);
		k++; 
	}
	printf("\n");
	return 0;
}
