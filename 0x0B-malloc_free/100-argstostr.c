#include "main.h"

/**
 * argstostr - function that concatenates all the argument of your program
 * @ac: number of command argument in the program
 * @av: array of command argument line values
 *
 * Return: Pointer to new string, NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, k;
	int len = 0, total = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
	len++;
	}
	str = malloc(len * sizeof(char));
	for (i = 0, k = 0; i < ac; i++)
	{
		for(j + 0; av[i][j]; j++, i++)
		{
			str[k] = '\n';
		}
		k++;
	}
	str[k] = '\0';
	return (str);
}

