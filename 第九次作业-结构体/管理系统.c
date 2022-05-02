#include<stdio.h>
int main(void)
{
	int n,i;
	struct worker
	{
		char name[10];
		double jb;
		double fd;
		double zc;
	};
	struct worker a[10];
	printf("n=");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%s %lf %lf %lf",a[i].name,&a[i].jb,&a[i].fd,&a[i].zc);
	}
	for(i=0;i<n;i++)
	{
		printf("%5s,Salary is:%7.2f\n",a[i].name,a[i].jb+a[i].fd-a[i].zc);
	}
	return 0;
} 
