#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count = 0;
	unsigned long fib1 = 0;
	unsigned long fib2 = 1;
	unsigned long sum;

	while (count < 50)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}

		count++;
	}

	return (0);
}
