// Write a program print total number of single digit Prime numbers.
#include <stdio.h>
int main()
{
    int count, n = 0;
    for (int j = 2; j < 272; j++)
    {
        count = 0;
        for (int i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            n++;
        }
    }

    printf("%d ", n);
}