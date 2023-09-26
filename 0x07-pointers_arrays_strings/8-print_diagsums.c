#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - A function that prints the sum of
 * the two diagonals of a square matrix of integers.
 * @a: a pointer points to a 2D array.
 * @size: integer
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (i < size)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
		i++;
	}

	printf("%d, %d", sum1, sum2);
	printf("\n");
}
