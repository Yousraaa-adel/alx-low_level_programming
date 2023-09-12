#include "main.h"
#include <stdio.h>

/**
 * print_putchar - Printing a _putchar string
 *
 * Description: Printing a _putchar string
 * @string: A string of characters
 */
void print_putchar(char string[])
{
	int i = 0;

	while (string[i] != '\0')
	{
	putchar(string[i]);
	i++;
	}
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char string[] = "_putchar";

	print_putchar(string);
	putchar('\n');

	return (0);
}
