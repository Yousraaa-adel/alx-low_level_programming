#include "main.h"

/**
 * rev_string - A function that reverses a string.
 * @s: any string
 * Return: void
 */
void rev_string(char *s)
{
	int length = _strlen(s);
	int index;

	index = length - 1;
	while (index >= 0)
	{
		_putchar(s[index]);
		index--;
	}
	_putchar('\n');
}

/**
 * _strlen - A function that returns the length of a string.
 * @s: any string
 * Return: any integer
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
