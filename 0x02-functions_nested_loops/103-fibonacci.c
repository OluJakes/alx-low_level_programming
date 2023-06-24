#include <stdio.h>

/**
 * main - finds and prints the sum of even-valued Fibonacci terms
 *        not exceeding 4,000,000
 * Return: 0
 */
int main(void)
{
	int prev = 1;
	int curr = 2;
	int next = 0;
	int sum = 2;

	while (next <= 4000000)
	{
		next = prev + curr;
		if (next % 2 == 0)
			sum += next;

		prev = curr;
		curr = next;
	}

	printf("%d\n", sum);

	return (0);
}

