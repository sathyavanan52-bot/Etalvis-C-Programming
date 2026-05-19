//Get a number from the user and subtract 5 from that number if the number's ten's position digit is odd, then print the result. Do not use "if".
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number :");
    scanf("%d",&a);
    b=(a/10)%2;
    printf("Result=%d",a-(5*b));
}
