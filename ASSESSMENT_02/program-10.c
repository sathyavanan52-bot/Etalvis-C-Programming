//Get a two-digit number from the user and check if the digit 0 is greater than the digit 1. If yes, print 1; otherwise, print 0
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number two digit number :");
    scanf("%d",&a);
    if((a/10)<(a%10))
    {
        printf("Result= 1");
    }
    else{
        printf("result= 0");
    }
}