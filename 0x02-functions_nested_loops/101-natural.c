#include "main.h"
#include <stdio.h>

/**
 *
 * Return: Always 0 (Success)
 */
void natural_nums(void)
{
	int sum = 0;
	int num = 0;

	while (num < 1024)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
		{
		sum = sum + num;
		}

		num++;
	}
	printf("%d\n", num);
}
