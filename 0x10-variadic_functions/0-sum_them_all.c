#include <stdarg.h>

/**
 *	sum_them_all - Returns the sum of all its parameters.
 *	@n: Number of parameters.
 *	@...: A variable number of paramters to calculate the sum of.
 *
 *	Return: If n == 0, 0
 *	Else - The sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}

