#include<stdio.h>
int max(int x,int y)/*��������*/
{
	if(x>=y)
	{
		return x;
	}
	else
	{
		return y;
	} 
} 
int main()
{
	int m,i,x[5];
	printf("������5������Ԫ�أ�\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&x[i]);
	}
	m=x[0];
	for(i=1;i<5;i++)
	{	
		m=max(m,x[i]);
	}
	printf("max=%d\n",m);
}
