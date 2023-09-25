#include "main.h"

/**
 * _memcpy - A function copies n bytes from memory area src to memory area dest
 * @src: a src pointer
 * @n: any integer
 * @dest: the destination pointer
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *ptr = dest;

	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	return (ptr);

}
