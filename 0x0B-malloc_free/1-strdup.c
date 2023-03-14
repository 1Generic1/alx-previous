#includei "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - function returns a pointer to a new string
 * @str: the string
 *
 * Return: a pointer to the string 
 */

char *_strdup(char *str)
{
	int len = 0;
	int i = 0;
	char *new_str;

	if (str == NULL)
	{
		return NULL;
	}
	while (str[len] != '\0')
		len++;
	new_str = malloc((len + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		new_str[i] = str[i];
	}
	return (new_str);
}
