/*
�Ӽ�������10��ѧ���İٷ��Ƴɼ���ŵ����������������� 
*/
#include<stdio.h>
int main(void)
{
	int i,a[10];
	for(i=1;i<=10;i++)
	{
		scanf("%d",&a[i]);
	} 
	for(i=10;i>=1;i--)
	{
		printf("%d  ",a[i]);
	}
	return 0;
}
  
