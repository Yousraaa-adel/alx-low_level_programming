#include "main.h"
#include <stdio.h>

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
