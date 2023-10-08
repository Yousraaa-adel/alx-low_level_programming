#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _setnem - A function to copy a character
 * @s: a string
 * @b: a string
 * @n: an integer
 * Return: a string
 */
char *_setnem(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _calloc - A function that allocates memory for an array, using malloc.
 * @nmemb: an array
 * @size: an int number
 * Return: a pointer to
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	_setnem(p, 0, (nmemb * size));

	return (p);
}
