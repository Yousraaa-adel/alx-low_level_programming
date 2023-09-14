#include "main.h"

/**
 * print_line - Prints a straight line
 * @n: any integer
 * Return: void
 */
void print_line(int n)
{
	int line = '_';

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar(line);
			n--;
		}
		_putchar('\n');
	}
}
