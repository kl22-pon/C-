#include<stdlib.h>
#include<time.h>
#include<stdio.h>
int text(int x,int y)
{
	int answer;
	scanf("%d",&answer);
	if(x+y==answer)
	{
		return 1;
	}
	else
	{
		return 0; 
	}
}
void print(int flag)
{
	if(flag)
	{
		printf("��ϲ������ˣ�\n");
	}
	else
	{
		printf("����ˣ�����Ŭ��!");
	}
	
}
int main(void)
{
	int x,y,t,m=0,n=0,i;
	int score=0;
	for(i=0;i<10;i++)
	{
		/*����time()����������㵱ǰʱ��ֵ����ֵ��ת��Ϊ�޷������������������ 
		������������*/ 
		srand(time(NULL));
		x=rand()%100+1;//�������һ��1��100����
		y=rand()%100+1;
		printf("�����%d+%d=",x,y);
		t=text(x,y);
		print(t);
		if(t==1)
		{
			m++;
			score+=10;
		} 
		else
		{
			n++;
		}
	
	}
	printf("���%d�⣬���%d�⣬���÷�%d",m,n,score);
	
	return 0; 
} 
