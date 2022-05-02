#include<stdio.h>
#define N 3
struct staff_performance
{
	char num[10];//工号 
	char name[15];//姓名 
	int perf;//业绩 
	char class;//等级 
}perf_record[N];
int main(void)
{
	int i;
	printf("请输入%d位职工的工号，姓名和业绩\n",N);
	for(i=0;i<N;i++)
	{
		scanf("%s %s %c",perf_record[i].num,perf_record[i].name,&perf_record[i].perf);
		if(perf_record[i].perf>=10000)
		{
			perf_record[i].class='Y'; 
		}
		else
		{
			perf_record[i].class='N';
		}
	}
	printf("业绩考核情况如下，合格记为Y,不合格记为N:\n");
	for(i=0;i<N;i++)
	{
		printf("%s %s %c\n",perf_record[i].num,perf_record[i].name,&perf_record[i].perf,perf_record[i].class);
	}
	return 0;
} 
