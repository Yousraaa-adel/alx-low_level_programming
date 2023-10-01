#include "main.h"

/**
 * function- it returns the square root of a number
 * @x: base integer
 * @y: power integer
 * Return: square root
 */
int function(int x, int y)
{
	int square_root;

	square_root = y * y;
	if (square_root == x)
	{
		return (y);
	}
	else if (square_root < x)
	{
		return (function(x, y + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - Recursive function
 * @n: any integer
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	return (function(n, 1));
}
