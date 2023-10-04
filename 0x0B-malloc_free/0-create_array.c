#include "main.h"
#include <stdlib.h>

/**
 * create_array - A  function that creates an array of chars
 * and initializes it with a specific char.
 * @size: an integer for array size
 * @c: a character
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = (char *)malloc((size + 1) * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < size)
		{
			array[i] = c;
			i++;
		}
	}

	array[size] = '\0';

	return (array);


}
