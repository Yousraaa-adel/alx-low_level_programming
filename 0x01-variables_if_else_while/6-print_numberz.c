#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	int newline = '\n';

	while ((n >= 0) && (n <= 9))
	{
		putchar(n + 48);
		n++;
	}
	putchar(newline);

	return (0);
}
