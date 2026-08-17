//Write a loop program to print the two-digit even numbers, who's sum of digits are 6.
#include<stdio.h>
int main()
{
    int a=10;
    loop: if(a>9)
    {    
        if((a%10+a/10)==6)
        {
            printf("%d\n",a);
        }
        a=a+2;
        goto loop;
    }
}