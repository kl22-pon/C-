#include<stdio.h>
#include<string.h>
#define N 6
int main(void)
{
	char name[N][20],str[20];
	int i, j;
	for(i=0;i<N;i++)
	{
		gets(name[i]);
	}
	for(i=0;i<N-1;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(strcmp(name[j],name[i])<0)
			{
				strcpy(str,name[j]);
				strcpy(name[j],name[i]);
				strcpy(name[i],str);
			}
		}
	}
	for(i=0;i<N;i++)
	{
		puts(name[i]);
	}
	printf("\n");
	return 0;
} 
