#include<stdio.h>
#include<math.h>
#define PI 3.1415926

double c1()
{
	float r;
	double c1;
	printf("������Բ�İ뾶��");
	scanf("%f",&r);
	c1=2*PI*r;
	return c1; 
} 
double cs()
{
	float r;
	double cs;
	printf("������Բ�İ뾶��");
	scanf("%f",&r);
	cs=PI*r*r; 
	return cs;
}
double bv()
{
	float r;
	double bv;
	printf("��������������");
	scanf("%f",&r);
	bv=4.0/3.0*PI*r*r*r;
	return bv;
}
double cv()
{
	float r,h;
	double cv;
	printf("������Բ���İ뾶�͸ߣ�");
	scanf("%f%f",&r,&h);
	cv=PI*r*r*h;
	return cv;
}
double cov()
{
	float r,h;
	double cov;
	printf("������Բ׶�İ뾶�͸ߣ�");
	scanf("%f%f",&r,&h);
	cov=PI*r*r*h/3.0;
	return cov;
}
void sele(int n)
{
	switch(n)
	{
		case 1:
			printf("Բ���ܳ�Ϊ��%.2f\n",c1());
			break;
		case 2:
			printf("Բ�����Ϊ��%.2f\n",cs());
			break;
		case 3:
			printf("������Ϊ��%.2f\n",bv());
			break;
		case 4:
			printf("Բ�������Ϊ��%.2f\n",cv());
			break;
		case 5:
			printf("Բ׶�����Ϊ: %.2f\n",cov());
			break;
	}
}
int main()
{
	int n;
	
	printf("1--����Բ���ܳ�\n");
	printf("2--����Բ�����\n");
	printf("3--����������\n");
	printf("4--����Բ�������\n");
	printf("5--����Բ׶�����\n");
	printf("��ѡ��\n");
	scanf("%d",&n);
	 
	sele(n);
	
	return 0;	
}
