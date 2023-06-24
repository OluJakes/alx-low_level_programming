#include <stdio.h>

/**
 * main - finds and prints the sum of even-valued terms in the Fibonacci sequence
 * Return: 0
 */
int main(void)
{
    int i;
    unsigned long int current = 1, prev = 0, temp, sum = 0;

    while (current <= 4000000)
    {
        if (current % 2 == 0)
            sum += current;

        temp = current;
        current += prev;
        prev = temp;
    }

    printf("%lu\n", sum);

    return 0;
}

