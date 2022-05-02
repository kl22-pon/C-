#include<stdio.h>
#include<string.h>
void delchar(char *s,char c)
{
	int i,j=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]!=c)
		{
			s[j++]=s[i];
		}
	}
	s[j]='\0';
	printf("After deleted,the string is:%s",s);
} 

int main(void)
{
	char str[30];
	char c;
	printf("Input a string:");
	gets(str);
	printf("Input a char:");
	scanf("%c",&c);
	delchar(str,c);
	
	return 0; 
} 
