#include "main.h"

/**
 * print_last_digit - prints last digit
 * @num: any integer
 * Return: last digit
 */
int print_last_digit(int num)
{
	if (num < 0)
	{
		num = -num;
	}

	int last_num = num % 10;

	return (last_num);
}
