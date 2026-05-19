// Get a two-digit number from user and print the reverse of the number.
#include<stdio.h>
int main()
{
    int a,b,c,rev=0;
    printf("Enter a two digit number :");
    scanf("%d",&a);
    b=a%10;
    rev=b;
    c=a/10;
    rev=rev*10+c;
    printf("Result=%d",rev);
}