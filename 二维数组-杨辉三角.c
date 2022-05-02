#include<stdio.h>
int main(void)
{
	int a[10][10],i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j==0||i==j)
			{
				a[i][j]=1;
			}
			else
			{
				a[i][j]=a[i-1][j]+a[i-1][j-1];
			}
			
		} 
	} 
	for(i=0;i<10;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%-5d",a[i][j]);
		}
		printf("\n");
	}
	
	
	return 0; 
} 
