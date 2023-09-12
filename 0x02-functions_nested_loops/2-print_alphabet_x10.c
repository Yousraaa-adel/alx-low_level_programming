#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10: Printing 10 times the alphabet.
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
			if (letter == 'z')
			{
			putchar('\n');
			}
		}
		line++;
	}
}
