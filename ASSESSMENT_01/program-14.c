//Get a four-digit number from user and only reverse the first two digits of the number, then print the number.
#include<stdio.h>
int main()
{
    int a,b,c,d,rev=0;
    printf("Enter a four digit number :");
    scanf("%d",&a);
    b=a/100;
    c=b%10;
    rev=c;
    d=b/10;
    rev=rev*10+d;
    rev=rev*100+(a%100);
    printf("Result=%d",rev);
}