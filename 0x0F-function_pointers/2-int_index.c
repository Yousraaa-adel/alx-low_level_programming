#include "function_pointers.h"

/**
 * int_index - A function that searches for an int
 * @array: The array to search in
 * @size: The size of the array
 * @cmp: The pointer to the comparing function
 *
 * Return: an int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
				return (x);
		}
	}
	return (-1);
}
