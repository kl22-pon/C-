#include<stdio.h>
int large(int x,int y)
{
	int f;
	if(x>y)
	{
		f=1;
	}
	else if(x==y)
	{
		f=0;
	}
	else
	{
		f=-1;
	}
	return(f);
	
} 
int main(void)
{
	int a[10],b[10],i,m=0,j=0,k=0,z; 
	printf("请输入a数组的元素\n"); 
	for(i=0;i<10;i++)
	{
		scanf("%d",a[i]);
	}
	printf("\n请输入b数组的元素\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",b[i]); 
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		z=large(a[i],b[i]);
		if(z==1)
		{
			m++;
		}
		else if(z==0)
		{
			j++;
		}
		else
		{
			k++;
		}
	}
	printf("a[i]>b[i]的有%d个，相等的有%d个，小于的有%d个",m,j,k);
	if(m>k)
	{
		printf("a数组大于b数组！"); 
	}
	else if(m==k)
	{
		printf("a数组等于b数组！"); 
	} 
	else
	{
		printf("a数组小于b数组！");
	}
	
	return 0;
}
