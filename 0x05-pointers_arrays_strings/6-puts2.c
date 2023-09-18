#include "main.h"
#include <string.h>

/**
 * puts2 - A  function that prints every other character of a string.
 * @str: any string
 * Return: void
 */
void puts2(char *str)
{
	int length = strlen(str);
	int index = 0;

	while (index < length)
	{
		_putchar(str[index]);
		index += 2;
	}
	_putchar('\n');
}
