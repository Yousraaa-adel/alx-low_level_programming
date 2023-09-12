#include "main.h"
#include <ctype.h>

/**
 * _isalpha - A function to check for letters
 * @c: integer
 * Return: returns 1 if number and returns 0 if something else
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
