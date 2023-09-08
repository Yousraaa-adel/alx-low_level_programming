#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'z';
	char newline = '\n';

	while ((letter <= 'z') && (letter >= 'a'))
	{
		putchar(letter);
		letter++;
	}
	putchar(newline);

	return (0);
}
