#include<stdio.h>
#define N 3
struct staff_performance
{
	char num[10];//���� 
	char name[15];//���� 
	int perf;//ҵ�� 
	char class;//�ȼ� 
}perf_record[N];
int main(void)
{
	int i;
	printf("������%dλְ���Ĺ��ţ�������ҵ��\n",N);
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
	printf("ҵ������������£��ϸ��ΪY,���ϸ��ΪN:\n");
	for(i=0;i<N;i++)
	{
		printf("%s %s %c\n",perf_record[i].num,perf_record[i].name,&perf_record[i].perf,perf_record[i].class);
	}
	return 0;
} 
