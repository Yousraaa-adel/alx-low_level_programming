#include "main.h"

/**
 * _strncat - A function to concatenate two strings
 * based on n of bytes
 * @n: number of bytes in integer
 * @dest: any string
 * @src: any string
 * Return: final concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while ((src[j] != '\0') && (j < n))
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
