#include "main.h"
#include <string.h>

/**
 * _strstr - A  function finds the first occurrence of
 * the substring needle in the string haystack.
 * @haystack: This is the main string to be examined.
 * @needle: This is the sub-string to be searched in string.
 * Return: returns a pointer point to the first character
 * of the found s2 in s1 otherwise a null pointer if s2 is not present in s1.
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptr1 = needle;

	if (strlen(needle) > strlen(haystack)) {
		return NULL;
	}


	while (*haystack != '\0')
	{
		char *haystack_ptr = haystack;
		char *needle_ptr = needle;

		while (*haystack_ptr != '\0' && *needle_ptr != '\0' && *haystack_ptr == *needle_ptr)
		{
			haystack_ptr++;
			needle_ptr++;
		}

		if (*needle_ptr == '\0')
		{
			return haystack;
		}

		needle = ptr1;

		haystack++;
	}

	return (NULL);

}
