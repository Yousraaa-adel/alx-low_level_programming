#include "main.h"

/**
 * _strcat - A function appendes a string on another string.
 * @src: string that will be appended in dest.
 * @dest: string that will comine both.
 * Return: dest string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
