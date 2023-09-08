#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	char letter = 'a';
	char newline = '\n';

	while ((n >= 0) && (n < 10))
	{
		putchar(n);
		n++;
	}

	while ((letter >= 'a') && (letter <= 'f'))
	{
		putchar(letter);
		letter++;
	}
	putchar(newline);

	return (0);
}
