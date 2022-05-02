#include<stdio.h>
#include<math.h>
#define PI 3.1415926

double c1()
{
	float r;
	double c1;
	printf("请输入圆的半径：");
	scanf("%f",&r);
	c1=2*PI*r;
	return c1; 
} 
double cs()
{
	float r;
	double cs;
	printf("请输入圆的半径：");
	scanf("%f",&r);
	cs=PI*r*r; 
	return cs;
}
double bv()
{
	float r;
	double bv;
	printf("请输入球的体积：");
	scanf("%f",&r);
	bv=4.0/3.0*PI*r*r*r;
	return bv;
}
double cv()
{
	float r,h;
	double cv;
	printf("请输入圆柱的半径和高：");
	scanf("%f%f",&r,&h);
	cv=PI*r*r*h;
	return cv;
}
double cov()
{
	float r,h;
	double cov;
	printf("请输入圆锥的半径和高：");
	scanf("%f%f",&r,&h);
	cov=PI*r*r*h/3.0;
	return cov;
}
void sele(int n)
{
	switch(n)
	{
		case 1:
			printf("圆的周长为：%.2f\n",c1());
			break;
		case 2:
			printf("圆的面积为：%.2f\n",cs());
			break;
		case 3:
			printf("球的体积为：%.2f\n",bv());
			break;
		case 4:
			printf("圆柱的体积为：%.2f\n",cv());
			break;
		case 5:
			printf("圆锥的体积为: %.2f\n",cov());
			break;
	}
}
int main()
{
	int n;
	
	printf("1--计算圆的周长\n");
	printf("2--计算圆的面积\n");
	printf("3--计算球的体积\n");
	printf("4--计算圆柱的体积\n");
	printf("5--计算圆锥的体积\n");
	printf("请选择：\n");
	scanf("%d",&n);
	 
	sele(n);
	
	return 0;	
}
