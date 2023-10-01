#include "main.h"

/**
 * check_p - A function that checks for a prime number
 * @o: an integer
 * @l: an integer
 * Return: 0 if is divisable, and 1 if not
 */
int check_p(int o, int l)
{
	if (o <= 1 || (o != l && o % l == 0))
	{
		return (0);
	}
	else if (o == l)
	{
		return (1);
	}

	return (check_p(o, l + 1));
}

/**
 * is_prime_number - A function that checks for prime n.
 * @n: any integer
 * Return: 0 if not a prime n, 1 if prime
 */
int is_prime_number(int n)
{
	return (check_p(n, 2));
}
