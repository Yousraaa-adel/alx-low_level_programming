#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while ((n > -1) && (n < 10))
	{
		printf("%d", n);
	}
	printf("\n");

	return (0);
}