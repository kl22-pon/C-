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
		printf("恭喜！答对了！\n");
	}
	else
	{
		printf("答错了！继续努力!");
	}
	
}
int main(void)
{
	int x,y,t,m=0,n=0,i;
	int score=0;
	for(i=0;i<10;i++)
	{
		/*函数time()返回以秒计算当前时间值，该值被转换为无符号整数并用作随机数 
		发生器的种子*/ 
		srand(time(NULL));
		x=rand()%100+1;//随机产生一个1到100的数
		y=rand()%100+1;
		printf("请计算%d+%d=",x,y);
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
	printf("答对%d题，答错%d题，最后得分%d",m,n,score);
	
	return 0; 
} 
