//Write a loop program to print odd number between 1 and 9.
#include<stdio.h>
int main()
{
    int a=1;
    loop: if(a<10)
    {   
        printf("%d\n",a);
        a=a+2;
        goto loop;
    }
}