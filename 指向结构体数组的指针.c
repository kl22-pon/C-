#include<stdio.h>
#define N 3
struct staff_performance
{
	char num[10];
	char name[15];
	int perf;
}perf_record[N];
int main(void)
{
	int i;
	struct staff_performance * p;
	printf("请输入%d位职工的工号,姓名和业绩\n",N);
	for(i=0;i<N;i++)
	{
		scanf("%s  %s  %d  ",perf_record[i].num,perf_record[i].name,&perf_record[i].perf); 
	}
	printf("职工完成业绩情况如下：\n");
	printf("工号   姓名   业绩\n");
	for(p=perf_record;p<perf_record+N;p++)
	{
		printf("%s %s %d\n",p->name ,p->num,p->perf);
	} 
	return 0;
} 
