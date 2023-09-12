#include <stdio.h>
#include "main.h"

/**
 * _islower - checkes for lowercases.
 * @c: any alphabetic character
 * Return: void
 */
int _islower(c)
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
