#include<stdio.h>
#include<string.h>
void strcmcpy(char s[],char t[],int m)
{
	int i;
	for(i=m-1;s[i]!='\0';i++)
	{
		s[i-m+1]=t[i];
	}
	s[i-m+1]='\0';
	printf("Output is:%s",s);
}
int main(void)
{
	char t[80],s[50];
	int m;
	printf("Input a string:");
	scanf("%s",t);
	printf("Input an integer:");
	scanf("%d",&m);
	strcmcpy(s,t,m);
	return 0;
}
 
