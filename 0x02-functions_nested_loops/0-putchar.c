#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_putchar(char *string) 
{
	int i = 0;
	while (string[i] != '\0')
	{
	putchar(string[i]);
	i++;
	}
}

int main(void)
{
	char *string = "_putchar";
	print_putchar(string);

	return (0);
}
