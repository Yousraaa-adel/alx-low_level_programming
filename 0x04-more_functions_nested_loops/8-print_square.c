#include "main.h"

/**
 * print_square - A function to print a square
 * @size: any integer
 * Return: void
 */
void print_square(int size)
{
	int square = '#';
	int col;
	int row;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		col = 0;
		while (col < size)
		{
			row = 0;
			while (row < size)
			{
				_putchar(square);
				row++;
			}
			_putchar('\n');
			col++;
		}
	}
}
