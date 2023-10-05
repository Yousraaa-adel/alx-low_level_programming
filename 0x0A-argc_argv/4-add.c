#include <stdio.h>
#include <stdlib.h>

/**
 * isInteger - A function that checks if s is an integer
 * @s: a string to check
 * Return: 0 if there's no number or 1 if one of
 * the numbers contains symobls.
 */

int isInt(const char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		if (s[x] < '0' || s[x] > '9')
		{
			return (1);
		}
		x++;
	}
	return (0);
}

/**
 * main - Entry point
 * @argc: an integer
 * @argv: an array of a list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int sum = 0;

	while (--argc)

	{
		if (isInt(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}
	printf("%i\n", sum);
	return (0);
}
