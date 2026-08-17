//Write a program to get a number from user and interchange the first and last digits and print the result.
#include<stdio.h>
int main()
{
    int a,b,n=0,temp,last,interchange,power=1,middle;
    printf("Enter a number :");
    scanf("%d",&a);
    temp=a;
    loop1: if(temp>0)
    {
        temp=temp/10;
        power=power*10;
        goto loop1;
    }
    last=a%10;
    b=a/10;
    middle=(a%(power/10))/10;
    interchange=last*(power/10)+(middle*10)+(a/(power/10));
    printf("%d",interchange);
}