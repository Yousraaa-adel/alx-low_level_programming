#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_sign - A function that prints the sign of a number
 * @n: any integer number.
 * Return: 1 if n>0, 0 is n=0, -1 if n<0.
 */
int print_sign(int n)
{
	if (isalpha(n > 0))
	{
		putchar('+');
		return (1);
	}
	else if (isalpha(n == 0))
	{
		putchar('0');
		return (0);
	}
	else if (isalpha(n < 0))
	{
		putchar('-');
		return (-1);
	}

	return (0);

}
