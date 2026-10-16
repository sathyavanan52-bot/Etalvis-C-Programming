//Write a loop program to print the two-digit odd numbers, who's sum of digits are 7.
#include<stdio.h>
int main()
{
    int i,num;
    for(i=1;i<=99;i++)
    {
        num=(i%10)+(i/10);
        if( num==7 && i/10>0 && i%2==1)
        {
            printf("%d\n",i);
        }
    }
}