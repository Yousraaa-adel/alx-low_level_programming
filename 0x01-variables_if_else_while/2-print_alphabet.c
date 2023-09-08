#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	char newline = '\n';

	while ((letter >= 'a') && (letter <= 'z'))
	{
		putchar(letter);
		letter++;
	}
	putchar(newline);

	return (0);
}
