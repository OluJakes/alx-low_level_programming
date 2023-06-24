#include <stdio.h>

/**
 * main - finds and prints the sum of even-valued Fibonacci numbers
 *        that do not exceed 4,000,000
 * Return: 0
 */
int main(void)
{
	int num1 = 1, num2 = 2, next;
	int sum = 2;

	while (num2 <= 4000000)
	{
		next = num1 + num2;
		
		if (next % 2 == 0)
			sum += next;
		
		num1 = num2;
		num2 = next;
	}
	
	printf("%d\n", sum);
	
	return (0);
}

