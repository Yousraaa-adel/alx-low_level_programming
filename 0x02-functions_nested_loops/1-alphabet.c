#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Printing alphabet lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	putchar(letter);
	letter++;
	}

	putchar('\n');
}
