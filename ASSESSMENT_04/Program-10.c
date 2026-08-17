//Write a program to get a number from user print the total number of digits in that number.
#include<stdio.h>
int main()
{
    int a,n=0;
    printf("Enter a number :");
    scanf("%d",&a);
    if(a==0)
    {
       n=1;
    }
    else 
    {
    loop: if(a>0)
    {
        n++;
        a=a/10;
        goto loop;
    }
    }
     printf("Number of digits =%d",n);
}