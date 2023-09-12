#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbs from 98
 * @n: any integer
 * Return: natural numbers from 0 to 98
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
		{
			n++;
		}
		else
		{
			n--;
		}
	}
	printf("%d\n", n);
}
