//Get a three-digit number from the user and print the ten's digit.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a three digit number :");
    scanf("%d",&a);
    b=a/10;
    printf("Result=%d",b%10);

}