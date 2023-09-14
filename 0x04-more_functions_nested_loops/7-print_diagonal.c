#include "main.h"

/**
 * print_diagonal - A function to diagonal
 * @n: any integer
 * Return: void
 */
void print_diagonal(int n)
{
	int sp = ' ';
	int slash = '\\';
	int col, row;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		col = 0;
		while (col < n)
		{
			row = 0;
			while (row < col)
			{
				_putchar(sp);
				row++;
			}

			_putchar(slash);
			_putchar('\n');
			col++;
		}
	}


}
