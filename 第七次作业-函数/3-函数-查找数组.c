#include<stdio.h>
void search(int list[],int n,int x)
{
	int i, flag=0;
	for(i=0;i<n;i++)
	{
		if(list[i]==x)
		{
			printf("index = %d",i);
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("Not found");
	}
} 
int main(void)
{
	int n,list[10],x,i;
	printf("Input n:");
	scanf("%d",&n);
	printf("Input %d integers:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&list[i]);
	}
	printf("Input x:");
	scanf("%d",&x);
	search(list,n,x);
	return 0;
}

