#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers
 * @min: minimum as integer
 * @max: maximum as integer
 * Return: an array
 */

int *array_range(int min, int max)
{
	int *ptr, x = 0, k = min;

	if (min > max)
		return (0);
	ptr = malloc((max - min + 1) * sizeof(int));

	if (!ptr)
		return (0);
	while (x <= max - min)
		ptr[x++] = k++;

	return (ptr);
}
