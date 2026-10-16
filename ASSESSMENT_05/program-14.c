//Write a program to get a number from user and interchange the first and last digits and print the result.
#include<stdio.h>
int main()
{
    int n,i,temp,rev=0,first,last,middle,digit=1;
    printf("Enter a number :");
    scanf("%d",&n);
    temp=n;
    for(i=0;temp>9;i++)
    {
        digit=digit*10;
        temp/=10;
    }
    middle= ( n%digit )/10;
    first=n/digit;
    last=n%10 ;
    rev=( last * digit )+( ( middle * 10 ) + first );
    printf("Interchange of first and last number = %d",rev);
} 