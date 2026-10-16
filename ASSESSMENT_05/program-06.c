//Write a loop program to print the two-digit odd numbers, below 20.
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=20;i++)
    {
        if(i%2==1 && i/10>0)
        {
            printf("%d\n",i);
        }
    }
}