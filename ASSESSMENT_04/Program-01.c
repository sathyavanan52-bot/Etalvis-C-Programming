//Write a loop program to print 1 to 5 on one by one.
#include<stdio.h>
int main()
{
    int a=1;
    loop: if(a<6)
    {
        printf("%d\n",a++);
        goto loop;
    }
}