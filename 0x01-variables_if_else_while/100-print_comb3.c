#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firstn = 0;
	int secn = firstn + 1;

	while ((firstn >= 0) && (firstn <= 9))
	{
		putchar(firstn + 48);
		while ((secn >= 0) && (secn <= 9))
		{
			putchar(secn + 48);
			if (secn <= 9)
			{
				putchar(44);
				putchar(32);
			}
			secn++;
		}
		firstn++;
	}
	putchar(10);

	return (0);
}
