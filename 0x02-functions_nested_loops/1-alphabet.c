#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Printing alphabet lowercase
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

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	 print_alphabet();
	 putchar("\n");

	return (0);
}
