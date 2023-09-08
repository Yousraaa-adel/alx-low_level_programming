#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firstn = 0;
	int secn = 0;

	while ((firstn >= 0) && (firstn <= 9))
	{
		putchar(firstn + 48);
		while ((secn >= 0) && (secn <= 9))
		{
			putchar(secn + 48);
			secn++;
			if (secn <= 9)
			{
				putchar(44);
				putchar(32);
			}
		}
		firstn++;
	}
	putchar(10);

	return (0);
}
