#include<stdio.h>
int main(void)
{
	int i,flag=0;
	char ch[80],s;
	printf("Input a character:");
	scanf("%c",&s);
	printf("Input a string:");
	scanf("%s",ch);
	for(i=0;i<80;i++)
	{
		if(ch[i]==s)
		{
			flag=1;
			break;
			
		}
	}
	if(flag==1)
	{
		printf("index=%d",i+1);
	}
	else
	{
		printf("Not Found");
	}
	
	
	return 0;
} 
