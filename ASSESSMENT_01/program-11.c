//Get a three-digit number from the user and print the sum of the digits.
#include<stdio.h>
int main()
{
    int a,b,c,d,sum;
    printf("Enter athree digit number :");
    scanf("%d",&a);
    b=a%10;
    c=a/100;
    d=(a/10)%10; 
    sum=b+c+d;
    printf("Result=%d",sum);
}