#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
    int i;
    unsigned long int current = 1, prev = 0, temp;

    for (i = 0; i < 98; i++)
    {
        printf("%lu, ", current);

        temp = current;
        current += prev;
        prev = temp;
    }

    printf("%lu\n", current);

    return 0;
}

