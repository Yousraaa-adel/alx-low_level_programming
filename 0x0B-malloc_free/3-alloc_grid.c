#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: width in integer
 * @height: height in integer
 * Return: Null if 0 or NULL
 */
int **alloc_grid(int width, int height)
{
	int **arr, m, n;

	if (height < 1 || width < 1)
		return (NULL);

	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	m = 0;
	while (m < height)
	{
		arr[m] = malloc(width * sizeof(int));
		if (arr[m] == NULL)
		{
			while (m-- >= 0)
				free(arr[m]);
			free(arr);
			return (NULL);
		}

		n = 0;
		while (n < height)
		{
			arr[m][n] = 0;
			n++;
		}
		m++;
	}

	return (arr);
}
