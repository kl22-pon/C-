#include<stdio.h>
void sort(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
			   t=a[i];
			   a[i]=a[j];
			   a[j]=t;
		    }
		}
	}
}
int main(void)
{
	int a[20],n,i;
	printf("Input n:");
	scanf("%d",&n);//��������Ԫ�صĸ����� 
	printf("Input array of %d integers:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,n);
	printf("After sorted the array is:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}
