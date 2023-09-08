#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	char com = ',';
	char sp = ' ';
	char newline = '\n';

	while ((n >= 0) && (n <= 9))
	{
		putchar(n + 48);
		if (n < 9)
		{
			putchar(com);
			putchar(sp);
		}
		n++;
	}
	putchar(newline);

	return (0);
}
