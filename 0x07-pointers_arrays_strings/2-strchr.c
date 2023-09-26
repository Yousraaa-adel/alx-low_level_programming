#include "main.h"

/**
 * _strchr - A function that returns a pointer to the first occurrence
 * of the character c in the string s, or NULL if the character is not found.
 * @s: a pointer of a string
 * @c: any character
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
	if (s == NULL)
	{
		return (NULL);
	}

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
