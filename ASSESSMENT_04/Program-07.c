//Write a loop program to print the two-digit odd numbers, who's sum of digits are 7.
#include<stdio.h>
int main()
{
    int a=11;
    loop: if(a>9)
    {    
        if((a%10+a/10)==7)
        {
            printf("%d\n",a);
        }
        a=a+2;
        goto loop;
    }
}