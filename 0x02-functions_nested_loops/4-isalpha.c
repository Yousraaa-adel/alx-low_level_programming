#include "main.h"
#include <stdio.h>
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
		putchar(1);
	}
	else
	{
		putchar(0);
	}
}
