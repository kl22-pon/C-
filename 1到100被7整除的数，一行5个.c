#include<stdio.h>
int main()
{
	int i;
	for(i=1; i<101;i++)
	{
		if(i%7==0)
		{
		printf("%d ", i);
	     if(i%5==0)
	     {
	     	printf("\n");
		 }
	    }
		
	}
	
	return 0;
	 
	
} 
