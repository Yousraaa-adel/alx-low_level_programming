#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: an integer
 * @argv: an array that holds all arguments
 * Return: 0 if success, 1 if there're no arguments
 */
int main(int argc, char *argv[])
{
	if (argc >= 3)
	{
		int arg1 = atoi(argv[1]);
		int arg2 = atoi(argv[2]);
		int result = arg1 * arg2;

		printf("%d\n", result);

		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
