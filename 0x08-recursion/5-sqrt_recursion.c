#include "main.h"

/**
 * sqrt_check - Checks for the square root of n starting from guess
 * @n: The number to find the square root of
 * @guess: The current guess for the square root
 *
 * Return: The square root of n if found, -1 otherwise.
 */
int sqrt_check(int n, int guess)
{
	if (guess * guess == n)
		return (guess);

	if (guess * guess > n)
		return (-1);

	return (sqrt_check(n, guess + 1));
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_check(n, 0));
}

