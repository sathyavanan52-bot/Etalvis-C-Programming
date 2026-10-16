// Write a program to get a number from user and print the reverse of that number.
#include <stdio.h>
int main()
{
    int a, n, i, rev = 0, last;
    printf("Enter a number :");
    scanf("%d", &n);
    for (i = 0; n > 0; i++)
    {
        last = n % 10;
        rev = rev * 10 + last;
        n /= 10;
    }
    printf("reverse of number = %d", rev);
}