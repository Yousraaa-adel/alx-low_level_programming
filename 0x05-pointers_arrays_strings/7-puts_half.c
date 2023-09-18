#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 * Return: void
 */
void puts_half(char *str)
{
	int len, n, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		i = len / 2;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	else if (len % 2)
	{
		n = (len - 1) / 2;
		while (n < len - 1)
		{
			_putchar(str[n + 1]);
			n++;
		}
	}
	_putchar('\n');
}
