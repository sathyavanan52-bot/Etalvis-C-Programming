//Write a loop program to print the sum of two-digit odd numbers, whose ten's digit is 7.
#include<stdio.h>
int main()
{
    int a=11,sum=0;
    loop: if(a>9)
    {    
        if(a/10==7)
        {
            sum+=a;
        }
        a=a+2;
        goto loop;
    }
    printf("%d\n",sum);
}