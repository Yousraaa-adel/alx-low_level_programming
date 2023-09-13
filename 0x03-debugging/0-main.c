#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: void
 */
int main(void)
{
	int result;

	result = positive_or_negative(0);

	if (result == 0)
	{
		printf("%d is zero\n", result);
	}
	else if (result > 0)
	{
		printf("%d is positive\n", result);
	}
	else
	{
		printf("%d is negative\n", result);
	}
	
	return (0);

}
