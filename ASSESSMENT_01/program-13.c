//Get a three-digit number from the user and print the reverse of the number.
#include<stdio.h>
int main()
{
    int a,b,c,d,rev=0;
    printf("Enter a three digit number :");
    scanf("%d",&a);
    b=a%10;
    rev=b;
    c=(a/10)%10;
    rev=rev*10+c;
    d=a/100;
    rev=rev*10+d;
    printf("Result=%d",rev);
}
