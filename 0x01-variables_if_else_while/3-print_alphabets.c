#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower = 'a';
	char upper = 'A';
	char newline = '\n';

	while ((lower >= 'a') && (lower <= 'z'))
	{
		putchar(lower);
		lower++;
	}

	while ((upper >= 'A') && (upper <= 'Z'))
	{
		putchar(upper);
		upper++;
	}
	putchar(newline);

	return (0);
}
