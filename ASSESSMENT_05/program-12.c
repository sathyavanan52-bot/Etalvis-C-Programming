// Write a program to get a number from user and print the sum of all digits.
#include <stdio.h>
int main()
{
    int a, n, i, sum = 0, last;
    printf("Enter a number :");
    scanf("%d", &n);
    for (i = 0; n > 0; i++)
    {
        last = n % 10;
        sum = sum + last;
        n /= 10;
    }
    printf("Sum of digits = %d", sum);
}