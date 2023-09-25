#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring.
 * @accept: a string we're looking for
 * @s: a string we're looking into for accept
 * Return: an integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int counter = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				counter++;
				break;
			}
			j++;	
		}
		i++;
	}

	return (counter);
}
