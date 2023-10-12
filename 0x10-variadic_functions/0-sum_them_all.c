#include "variadic_functions.h"

/**
 * sum_them_all - A function that returns the sum of all its parameters.
 * @n: the var that holds all args
 * Return: an integer if success and 0 if n is empty
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int x;
	int thesum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		thesum += va_arg(args, int);
	}

	va_end(args);

	return (thesum);


}
