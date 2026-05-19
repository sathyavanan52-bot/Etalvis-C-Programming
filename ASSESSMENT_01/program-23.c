//Get a three-digit number from the user and make the ten's digit as 0, then print it.
#include<stdio.h>
int main()
{
    int a,b,ans;
    printf("Enter a three digit number :");
    scanf("%d",&a);
    b=(a/100)*100+(a%10);
    printf("result=%d",b);
}