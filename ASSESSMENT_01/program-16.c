//Get a two-digit number from the user, make the ten's digit 1, and then print it.
#include<stdio.h>
int main()
{
    int a,b=0,c;
    printf("Enter a two digit number :");
    scanf("%d",&a);
    b=a%10;
    c=b+10;
    printf("Result=%d",c);
}