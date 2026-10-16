//Write a program to get a number from user, print whether that number is prime, and sum of digit is equal to 14.
#include<stdio.h>
int main()
{
    int n,temp,sum;
    printf("Enter a number :");
    scanf("%d",&n);
    temp=n;
    int count =0;
    for(int i=2;i<n;i++)
    {
        if(temp%i==0)
        {
            count++;
        }
    }
    sum=(n/10)+(n%10);
    if(count==0 && sum==14)
    {
        printf("%d is  prime & sum of digits is 14",n);
    }
    
    else if(count==0 && sum!=14)
    {
        printf("%d is prime & sum of digits is not equal 14",n);
    } 
    else if(count!=0 && sum==14) 
    {
        printf("%d is not a prime & sum of digits is 14",n);
    }
     else if(count!=0 && sum!=14) 
    {
        printf("%d is not a prime & sum of digits is not 14",n);
    }
    
}