#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
    int i;
    long long int num1 = 1, num2 = 2, next;

    printf("%lld, %lld, ", num1, num2);

    for (i = 3; i <= 50; i++)
    {
        next = num1 + num2;
        printf("%lld", next);

        if (i != 50)
            printf(", ");

        num1 = num2;
        num2 = next;
    }

    printf("\n");

    return 0;
}

