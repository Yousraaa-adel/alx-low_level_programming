#include "main.h"

/**
 * _pow_recursion - A function that returns the value
 * of x raised to the power of y.
 * @x: an integer for base value
 * @y: an integer for power value
 * Return: an integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * (_pow_recursion(x, y - 1)));
	}
}
