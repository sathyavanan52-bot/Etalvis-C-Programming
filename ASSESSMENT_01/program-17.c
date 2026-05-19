//Get a three-digit number from the user, make the one's digit 2, and then print it.
#include<stdio.h>
int main()
{
    int a,b,num;
    printf("Enter a two digit number :");
    scanf("%d",&a);
    b=a/10;
    num=(b*10)+2;
    printf("Result=%d",num);
}