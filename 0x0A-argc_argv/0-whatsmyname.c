#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: an integer
 * @argv: an array that holds arguments
 * Return: 0 always (Success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
