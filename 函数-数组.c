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
	printf("������a�����Ԫ��\n"); 
	for(i=0;i<10;i++)
	{
		scanf("%d",a[i]);
	}
	printf("\n������b�����Ԫ��\n");
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
	printf("a[i]>b[i]����%d������ȵ���%d����С�ڵ���%d��",m,j,k);
	if(m>k)
	{
		printf("a�������b���飡"); 
	}
	else if(m==k)
	{
		printf("a�������b���飡"); 
	} 
	else
	{
		printf("a����С��b���飡");
	}
	
	return 0;
}
