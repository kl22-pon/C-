#include <stdio.h>
int main()
{
    int hanoi(int,char,char,char);
    int n,counter;
    scanf("%d",&n);
    printf("\n");
    counter=hanoi(n,'A','B','C');
    return 0;
}

int hanoi(int n,char x,char y,char z)
{
    int move(char,int,char);
    if(n==1)
        move(x,1,z);
    else
    {
        hanoi(n-1,x,z,y);
        move(x,n,z);
        hanoi(n-1,y,x,z);
    }
    return 0;
}

int move(char getone,int n,char putone)
{
   
    printf("%c-->%c\n",getone,putone);
    return 0;
}

