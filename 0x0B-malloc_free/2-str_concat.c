#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - A function that concatenates two strings.
 * @s1: a string
 * @s2: a string
 * Return: a pointer points to a new string
 */
char *str_concat(char *s1, char *s2)
{
	size_t i = 0;
	size_t len1 = 0;
	size_t len2 = 0;
	char *final;

	if ((s1 == NULL) || (s2 == NULL))
	{
		return (NULL);
	}

	while ((*s1 != '\0') && (s1[len1] != '\0'))
	{
		len1++;
	}

	while ((*s2 != '\0') && (s2[len2] != '\0'))
	{
		len2++;
	}

	final = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (final == NULL)
	{
		return (NULL);
	}

	while (i < len1)
	{
		final[i] = s1[i];
		i++;
	}

	i = 0;
	while (i < len2)
	{
		final[len1 + i] = s2[i];
		i++;
	}

	final[len1 + len2] = '\0';

	return (final);
}
