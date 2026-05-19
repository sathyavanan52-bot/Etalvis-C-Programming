//Get a four-digit number from user and only reverse the last two digits of the number, then print the number.
#include<stdio.h>
int main()
{
    int a,b,c,rev;
    printf("Enter a four digit number :");
    scanf("%d",&a);
    b=a%100;
    c=(b%10)*10+(b/10);
    rev=(a/100)*100+c;
    printf("Result=%d",rev);
}