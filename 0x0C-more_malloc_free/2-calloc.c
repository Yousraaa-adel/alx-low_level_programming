#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _setnem - A function to copy a character
 * @str: a string
 * @l: a string
 * @num: an integer
 * Return: a string
 */
char *_setnem(char *str, char l, unsigned int num)
{
	unsigned int x;

	for (x = 0; x < num; x++)
	{
		str[x] = l;
	}

	return (str);
}

/**
 * _calloc - A function that allocates memory for an array, using malloc.
 * @nmemb: an array
 * @size: an int number
 * Return: a pointer to
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	_setnem(ptr, 0, (nmemb * size));

	return (ptr);
}
