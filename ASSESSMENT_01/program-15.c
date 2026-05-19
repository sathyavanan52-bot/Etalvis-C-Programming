//Get a two-digit number from the user, make the one's digit 0, then print it.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a two digit number :");
    scanf("%d",&a);
    b=a/10;
    c=b*10;
    printf("Result=%d",c);

}
