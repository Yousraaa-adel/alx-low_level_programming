#include "main.h"
#include <stdlib.h>

/**
 * argstostr - A function that concatenates all
 * the arguments of your program.
 * @ac: argument n in integer
 * @av: argument array
 * Return: all the arguments
 */
char *argstostr(int ac, char **av)
{
	char *arr;
	int x = 0;
	int y;
	int len = 0;

	if (ac == 0 || av == 0)
		return (NULL);
	while (x < ac)
	{
		y = 0;
		while (av[x][y++])
			len++;
		x++;
	}
	len++;
	arr = malloc((len + ac) * sizeof(**av));
	if (arr == NULL)
		return (NULL);
	len = 0;
	for (x = 0; x < ac; x++)
	{
		y = 0;
		while (av[x][y])
			arr[len++] = av[x][y++];
		arr[len++] = '\n';
	}
	arr[len] = '\0';
	return (arr);
}
