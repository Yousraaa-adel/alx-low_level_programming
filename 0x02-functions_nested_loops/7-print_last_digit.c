#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints last digit
 * @num: any integer
 * Return: last digit
 */
int print_last_digit(int a)
{
	int b;

	if (a < 0)
	{
		b = -1 * (a%10);
		_putchar(b + '0');
		return (b);
	}
	else
	{
		b = a % 10;
		_putchr(b + '0');
		return (b);
	}
}
