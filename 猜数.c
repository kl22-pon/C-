/*
�ɻ�����һ��1��100�������ɸ������£��¶�������������ɻ���������ʾ�����߲µĵ����Ǵ��ˣ�����С�ˣ� 
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int magic;//���������� 
	int guess;//�˲µ��� 
	int counter;//��¼�˲µĴ��� 
	unsigned int seed;//������� 
	srand(seed);//��stdlib.h��ͷ�ļ��У������ǲ���һ��������� 
	magic=rand()%100+1;//1��100������� 
	counter=0;
	do
	{
		printf("Please guess a magic number: ");
		scanf("%d",&guess);
		counter++;
		if(guess>magic)
		   printf("Wrong! Too high!\n");
		else if(guess<magic)
		printf("Wrong! Too low");
	}while(guess!=magic);//ֱ���˲µ�Ϊֹ 
	printf("Right!\n");
	printf("counter=%d\n", counter);
	
	
} 
