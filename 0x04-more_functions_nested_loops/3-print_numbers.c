#include "main.h"

/**
 * print_numbers - A function that prints 0-9
 *
 * Return: void
 */
void print_numbers(void)
{
	int count = '0';

	while (count <= '9' && count >= '0')
	{
		_putchar(count);
		count++;
	}
	_putchar('\n');
}
