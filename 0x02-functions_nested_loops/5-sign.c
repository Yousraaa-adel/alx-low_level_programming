#include "main.h"
#include <stdio.h>

/**
 * print_sign - A function that prints the sign of a number
 * @n: any integer number.
 * Return: 1 if n>0, 0 is n=0, -1 if n<0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}

	putchar('0');
	return (0);

}
