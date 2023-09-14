#include "main.h"

/**
 * print_most_numbers - A function that prints most numbers
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int count = '0';

	while (count <= '9')
	{
		if ((count != '2') && (count != '4'))
		{
			_putchar(count);
		}
		count++;
	}
	_putchar('\n');
}
