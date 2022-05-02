#include <stdio.h>
void loop(int x);
int main()
{
	int a,b,i;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		loop(i);
	}	
	return 0;
}
void loop(int x)
{
	int a,b,c,d;
	if(x<10)
	{
		printf("%d\n",x);
	}
	else if(x>10&&x<=99)
	{
		a=x/10;
		b=x%10;
		if(a==b)
		{
			printf("%d\n",x);
		}
	}
	else if(x>99&&x<=999)
	{
		a=x%10;
		b=x/100;
		if(a==b)
		{
			printf("%d\n",x);
		}
		
	}
	else if(x>999&&x<=9999)
	{
		a=x%10;
		b=x/10%10;
		c=x/100%10;
		d=x/1000;
		if(a==d&&b==c)
		{
			printf("%d\n",x);
		}
	}
	else
	{
		a=x%10;
		b=x/10%10;
		c=x/1000%10;
		d=x/10000;
		if(a==d&&b==c)
		{
			printf("%d\n",x);
		}
		
	}
}

