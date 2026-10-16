//Write a program to get number from user, print whether that number's first two digits (ten's digits and one's digit) is prime.
#include<stdio.h>
int main()
{
    int n,temp=0;
    printf("Enter a number :");
    scanf("%d",&n);
    temp=n%100;
    int count =0;
    for(int i=2;i<temp;i++)
    {
        if(temp%i==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("%d last two digit is a prime number",n);
    }
    
    else
    {
        printf("%d last two digits is not a prime number",n);
    }
}