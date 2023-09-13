#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints time tables of n
 * @n: any integer
 * Return: void
 */
void print_times_table(int n)
{
	int row = 0;
	int col;
	int prod = 0;

	if ((n >= 0) && (n <= 15))
	{
		while (row <= n)
		{
		col = 0;
		while (col <= n)
		{
			prod = row * col;
			printf("%d,   ", prod);

			col++;
		}
		printf("\n");
		row++;
		}
	}
}
