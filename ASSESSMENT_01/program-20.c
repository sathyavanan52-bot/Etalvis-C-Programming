//Get a two-digit number from user and subtract 5 from that number if the sum of the digits of the number is odd, then print the result. Do not use "if".
#include<stdio.h>
int main()
{
    int a,b,sub;
    printf("Enter a two digit number :");
    scanf("%d",&a);
    b=(a/10)+(a%10);
    sub=a-(5*(b%2));
    printf("Result=%d",sub);

}