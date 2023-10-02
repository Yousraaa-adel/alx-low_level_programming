#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: an integer
 * @argv: an array that holds all arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc > 0)
	{
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}

	return (0);
}
