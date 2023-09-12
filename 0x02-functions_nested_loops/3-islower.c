#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - checkes for lowercases.
 * @c: any alphabetic character
 * Return: void
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
