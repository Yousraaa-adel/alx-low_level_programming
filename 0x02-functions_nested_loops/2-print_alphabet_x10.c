#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Printing alphabets x10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int letter = 'a';
	int line = 0;

	while (line < 10)
	{
		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
		putchar('\n');
		line++;
		letter = 'a';
	}
}
