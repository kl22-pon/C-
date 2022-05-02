#include<stdio.h>
int main()
{
	int i=0,j=0;
	char s1[20],s2[10];
	printf("input s1:");
	gets(s1);
	getchar;
	printf("input s2:");
	gets(s2);
	while(s1[i]!='\0');
	{
		i++;
	}
	while(s2[i]!='\0')
	{
		s1[i++]=s2[j++];
	}
	s1[i]='\0';
    printf("%s",s1);
	return 0;
} 
