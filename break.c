/*
2020年11月2日13:40:57
*/
#include<stdio.h>
int main(void)
{
	int s;
	scanf("%d", &s);
	switch(s)
	{
	case 1:printf("%d", s+5);
	case 2:printf("%d", s+4);break;
	case 3:printf("%d", s+3);
	case 4:printf("%d", s+1);break;
	}
	//运行输入1 2 3 4 5
	//输出结果是65 6 64 5 6
	return 0;
}