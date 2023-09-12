#include "main.h"

/**
 * print_to_98 - Prints all natural numbs from 98
 * @n: any integer
 * Return: natural numbers from 0 to 98
 */
void print_to_98(int n)
{
	int count;

	if (n > 98)
	{
		count = n;
		while (count > 98)
		{
			_putchar(count);
			_putchar(',');
			_putchar(' ');

			count--;
		}
	}
	else
	{
		count = n;
		while (count < 98)
		{
			_putchar(count);
			_putchar(',');
			_putchar(' ');

			count++;
		}

	}
}
