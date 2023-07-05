#include "main.h"

/**
 * is_prime_check - Checks if n is divisible by any number from div to n-1.
 * @n: The number to check if prime.
 * @div: The current divisor to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_check(int n, int div)
{
	if (n % div == 0)
		return (0);

	if (div == n - 1)
		return (1);

	return (is_prime_check(n, div + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_check(n, 2));
}

