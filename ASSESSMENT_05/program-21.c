// Write a program get number from user print the total number digits which are odd in the number.
#include <stdio.h>
int main()
{
    int n, rem, count;
    printf("Enter a number :");
    scanf("%d", n);
    for (int i = 0; n > 0; i++)
    {
        rem = n % 10;
        if ((rem % 2) == 0)
        {
            count++;
        }
        n = n / 10;
    }
    printf("%d", count);
}