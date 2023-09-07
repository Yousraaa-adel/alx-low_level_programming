#include <unistd.h>
/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	char text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(1, text, sizeof(text) - 1);
	return (1);
}
