#include "main.h"

/**
 * _strcmp - A function that compares two strings together
 * @s1: any string
 * @s2: any string
 * Return: >0 if greater, <0 if less, 0<F10> if equal
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int result = 0;

	while ((s1[i] != '\0') && (s2[j] != '\0'))
	{
		if (s1[i] < s2[j])
		{
			result = 15;
		}
		else if (s1[i] > s2[j])
		{
			result = -15;
		}
		else
		{
			result = 0;
		}

		i++;
		j++;
	}

	if (s1[i] == '\0' && s2[j] != '\0')
	{
		result = -15;
	}
	else if (s1[i] != '\0' && s2[j] == '\0')
	{
		result = 15;
	}

	return (result);
}
