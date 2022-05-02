#include<stdio.h>
int main(void)
{
	char a[80];
	int i,count=0;
	printf("Input a string:");
    scanf("%s",&a[i]);
	for(i=0;a[i]!='\0';i++)
	    {
		if(a[i]>'A'&&a[i]<'Z'&&a[i]!='A'&&a[i]!='E'&&a[i]!='I'&&a[i]!='O'&&a[i]!='U')
	              count++; 
     	}
     	printf("count=%d",count);
	
	
	return 0;
}
