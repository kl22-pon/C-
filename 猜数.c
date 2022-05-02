/*
由机器想一个1到100的数，由该人来猜，猜对则结束，否则由机器给出提示，告诉猜的的数是大了，还是小了； 
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int magic;//计算机想的数 
	int guess;//人猜的数 
	int counter;//记录人猜的次数 
	unsigned int seed;//随机种子 
	srand(seed);//在stdlib.h的头文件中，作用是产生一个随机整数 
	magic=rand()%100+1;//1到100的随机数 
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
	}while(guess!=magic);//直到人猜到为止 
	printf("Right!\n");
	printf("counter=%d\n", counter);
	
	
} 
