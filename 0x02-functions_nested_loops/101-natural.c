#include "main.h"
#include <stdio.h>

/**
 * natural_nums - Prints sum
 *
 * Return: Sum of nums multiplied by 3 or 5
 */
int natural_nums(void)
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
	return (sum);
}

/**
 * main - Entry point
 * @num: variable from the natural_nums function
 * Return: Always 0 (Success)
 */
int main(int num)
{
	natural_nums();
	printf("%d\n", num);

	return (0);
}
