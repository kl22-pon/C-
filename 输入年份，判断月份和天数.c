#include<stdio.h>
int main(void)
{

   int y,m,leap;

   scanf("%d%d",&y,&m); 
			{
         if(m==2)

            printf("%d" ,28+leap);

		 else if(m==4||m==6||m==9||m==11)
		    printf("%d", 30);

         else

            printf("%d",31);
		 return 0;
			}
}
