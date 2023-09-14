#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Function that checks for digits
 * @c: any input 
 * Return: 1 if digit, 0 otherwise 
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
