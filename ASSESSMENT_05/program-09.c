//Write a loop program to print the sum of two-digit numbers whose one's digit is 5.
#include<stdio.h>
int main()
{
    int i,sum=0,digit;
    for(i=1;i<=99;i++)
    {
        digit=i%10;
        if( digit==5 && i/10>0 )
        {
           sum=sum+i;
        }
    }
     printf("%d\n",sum);
}