//Write a program to get a number from user and if the last digit of the number is even print the same number. If the last digit of the number is odd, then subtract 1 from the last digit and print the number. (Note: Last digit -MSB)
#include<stdio.h>
int main()
{
    int n,i,temp,msb,odd,digit=1,check;
    printf("Enter a number :");
    scanf("%d",&n);
    temp=n;
    
    for(i=0;temp>9;i++)
    {
        digit=digit*10;
        temp/=10;
    }  

    msb=n/digit; 
    check=msb%2;
    
    if(check==0)
    {
        printf("Msb digit even = %d",n);
    }

    else
    {
        for(i=0;temp>9;i++)
        {
            digit=digit*10;
            temp/=10;
        }
        odd=( (msb-1)*digit ) + (n%digit);
        printf("Msb digit odd = %d",odd);
    }       
    
} 