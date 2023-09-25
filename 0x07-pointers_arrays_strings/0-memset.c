#include "main.h"

/**
 * _memset - A function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b.
 * @n: an integer
 * @b: any char value
 * @s: a pointer
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*s = b;
		s++;
		i++;
	}

	return (s);
}
