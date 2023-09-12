#include <stdio.h>
#include "main.h"

/**
 * _islower - checkes for lowercases.
 * @c: any alphabetic character
 * Return: void
 */
_islower(int c)
{
	char letter = chr(c);

	if (islower(letter))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
