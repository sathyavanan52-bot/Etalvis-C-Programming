//Write a program to get a number from user and if the last digit of the number is even print the same number. If the last digit of the number is odd, then subtract 1 from the last digit and print the number. (Note: Last digit -MSB)
#include<stdio.h>
int main()
{
    int n,temp,power=1,msb,odd, lastdigits,interchanged;
    printf("Enter a number :");
    scanf("%d",&n);
    temp=n;
    loop: if(temp>0)
    {
        temp/=10;
        power=power*10;
        goto loop;
    }
    msb=n/(power/10);
    lastdigits=n%(power/10);
    odd=msb-1;
    interchanged=odd*(power/10)+lastdigits;
    if(msb%2==0)
    {
        printf("%d",n);
    }
    else
    {
        printf("%d",interchanged);
    }

}
