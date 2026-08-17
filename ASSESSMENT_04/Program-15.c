//Write a program get number from user print whether that number is prime or not.
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i=2,temp,count=0;
    printf("Enter a number :");
    scanf("%d",&n);
    temp=n;
    loop :if(i<=sqrt(temp))
    {
        if(temp%i==0)
        {
            count++;
        }
        i++;
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