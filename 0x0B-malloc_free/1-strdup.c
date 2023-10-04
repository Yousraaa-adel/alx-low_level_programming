#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function that  returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * @str: a pointer of type char that points to a string
 * Return: a pointer that points to the copy of str
 * NULL if str is NULL
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int i = 0;
	size_t len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	copy = (char *)malloc((len + 1) * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < len)
		{
			copy[i] = str[i];
			i++;
		}

		copy[len] = '\0';

		return (copy);
	}


}
