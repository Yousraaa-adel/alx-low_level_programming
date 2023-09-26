#include "main.h"

/**
 * _strpbrk - A function locates the first occurrence in
 * the string s of any of the bytes in the string accept.
 * @s: a string to search in
 * @accept: a string to search for
 * Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp_accept = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
			{
				return (s);
			}
			accept++;
		}
		accept = temp_accept;
		s++;
	}

	return (NULL);
}
