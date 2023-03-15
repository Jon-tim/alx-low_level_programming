#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: count
 * @av: argument
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *new;
	int c, i, j, ia;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	new = malloc((c + 1) * sizeof(char));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			new[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			new[ia] = av[i][j];
	}
	new[ia] = '\0';

	return (aout);
}
