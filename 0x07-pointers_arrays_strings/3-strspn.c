#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring.
 * @accept: a string we're looking for
 * @s: a string we're looking into for accept
 * Return: an integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int nope;
	char *ptr = accept;

	while (*s)
	{
		nope = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				nope = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = ptr;
		if (nope == 0)
			break;
	}
	return (count);
}
