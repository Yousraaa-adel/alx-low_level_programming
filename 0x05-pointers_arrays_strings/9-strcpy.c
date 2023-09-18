#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int length;
	int index;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	index = 0;
	while (index < length)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';

	return (dest);
}
