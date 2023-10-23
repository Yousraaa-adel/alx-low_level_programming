#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - A function that runs a function that is given as a parameter
 * on each element of an array
 * @array: An array to loop over
 * @size: The size of the array
 * @action: A pointer to the used function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (!array || !action)
		return;

	for (x = 0; x < size; x++)
		action(array[x]);
}
