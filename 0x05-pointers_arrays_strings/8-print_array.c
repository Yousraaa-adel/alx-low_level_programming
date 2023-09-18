#include "main.h"

/**
 * print_array - A function that prints n elements of an array of integers.
 * @a: any array of integers
 * @n: the number of elements of the array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int index = 0;

	while (index < n)
	{
		printf("%d", a[index]);

		if (index < n - 1)
		{
			printf(", ");
		}

		index++;
	}

	printf("\n");
}
