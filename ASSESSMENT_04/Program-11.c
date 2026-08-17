//Write a program to get a number from user and print the sum of all digits.
#include<stdio.h>
int main()
{
    int a,sum=0,n=0;
    printf("Enter a number :");
    scanf("%d",&a);
    loop: if(a>0)
    {
        n=a%10;
        sum=sum+n;
        a=a/10;
        goto loop;
    }
     printf("sum of digits =%d",sum);
}