//Write a program get number from user print whether that number is prime or not.
#include<stdio.h>
int main()
{
    int n,temp;
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
    if(count==0)
    {
        printf("%d is a prime number",n);
    }
    
    else
    {
        printf("%d is not a prime number",n);
    }
}