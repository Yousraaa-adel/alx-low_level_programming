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
	int i = 0;
	int j;

	while (s[i])
	{
		s++;
	}

	j = 0;
	while (j <= i)
	{
		if (c == s[j])
		{
			s += j;
			return (s);
		}
		j++;
	}

	return ('\0');
}
