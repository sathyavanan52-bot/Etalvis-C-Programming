//Write a program to get a 4-digit number from user, print whether that number's middle two digits (hundred's digit and ten's digit) is prime.
#include<stdio.h>
int main()
{
    int n,temp=0;
    printf("Enter a number :");
    scanf("%d",&n);
    temp=(n%1000)/10;
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
        printf("%d middle two digit is a prime number",n);
    }
    
    else
    {
        printf("%d middle two digits is not a prime number",n);
    }
}