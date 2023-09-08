#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	while ((letter >= 'a') && (letter <= 'z'))
	{
		putchar(letter);
		letter++;
	}

	return (0);
}
