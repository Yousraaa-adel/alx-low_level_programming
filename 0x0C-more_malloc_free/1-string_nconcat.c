#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - A function that concatenates two strings.
 * @s1: string one
 * @s2: string two
 * @n: an integer
 * Return: a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);
	char *ptr;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ptr = (char *)malloc(len1 + len2 + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

	for (i = 0; i < n && s2[i] != '\0'; i++)
		ptr[len1 + i] = s2[i];

	ptr[len1 + i] = '\0';

	return (ptr);


}
