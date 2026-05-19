//Get a four-digit number from the user and check if the first 2 digits and last 2 digits are the same. If yes, print 1; otherwise, print 0
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number four digit number :");
    scanf("%d",&a);
    if((a/100)==(a%100))
    {
        printf("Result= 1");
    }
    else{
        printf("result= 0");
    }
}