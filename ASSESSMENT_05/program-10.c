//Write a loop program to print the sum of two-digit odd numbers, whose ten's digit is 7.
#include<stdio.h>
int main()
{
    int i,sum=0,digit;
    for(i=1;i<=99;i++)
    {
        digit=i/10;
        if( digit==7 && i/10>0 && i%2==1 )
        {
           sum=sum+i;
        }
    }
     printf("%d\n",sum);
}