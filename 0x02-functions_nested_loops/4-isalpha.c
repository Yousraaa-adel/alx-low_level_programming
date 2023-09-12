#include "main.h"
#include <ctype.h>

/**
 * _isalpha: function 
 * @c: integer
 * Return: integer
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
