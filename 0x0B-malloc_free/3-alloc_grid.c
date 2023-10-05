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
	int **arr;
	int i = 0;
	int j;

	if (height < 1 || width < 1)
		return (NULL);

	arr = malloc(height * sizeof(**arr));

	if (arr == NULL)
		return (NULL);

	while (i < height)
	{
		arr[i] = malloc(width * sizeof(**arr));
		if (arr[i] == NULL)
		{
			for (i--; i > 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			arr[i][j] = 0;
		i++;
	}

	return (arr);
}
