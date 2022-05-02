#include<stdio.h>
#include<string.h>
#define i 20
char str(char a[i])
{
	int j;
	j=strlen(a);
	return j;
}
int main(void)
{
	int k;
	char a[i];
    gets(a);
	k=str(a);
	printf("%d",k);
	
	return 0;
}
