#include "main.h"

/**
 * _strncpy - A function that copies a string.
 * @n: number of bytes in integer
 * @src: string to be copied
 * @dest: destination of the string
 * Return: a pointer for the dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while ((src[j] != '\0') && (j < n))
	{
		dest[i] = src[i];
		i++;
		j++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
