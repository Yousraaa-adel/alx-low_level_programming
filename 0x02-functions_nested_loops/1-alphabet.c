#include <stdio.h>

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
}

int main(void)
{
	 print_alphabet();
	 putchar('\n');

	return (0);
}
