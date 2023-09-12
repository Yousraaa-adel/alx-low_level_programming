#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_putchar(char *string) 
{
  putchar(*string);
}

int main(void)
{
	char *string = "_putchar";
	print_putchar(string);

	return (0);
}
