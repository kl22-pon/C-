#include<stdio.h>
int main(void)
{
	int i, j, k;
	for(i=1; i<=9; i++)
	{
		for(j=1; j<=9; j++)
		{
			k=i*j;
			printf("%1d * %1d=%-3d ", i, j, k);
		}
		printf("\n");
	}

	return 0;
}