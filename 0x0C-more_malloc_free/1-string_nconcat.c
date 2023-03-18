#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: maximum number of bytes
 *
 * Return: pointer to the new_str, NULL if the fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	int i = 0;
       	unsigned int j = 0;
	int s1_len = 0;
	int s2_len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
	{
		;
	}
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
	{
		;
	}
	if (n >= (unsigned int) s2_len)
	{
		n = s2_len;
	}
	new_str = (char *) malloc(s1_len + n + 1);
		if (new_str == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < s1_len; i++)
		{
			new_str[i] = s1[i];
		}
		for (j = 0; j < n ; j++)
		{
			new_str[s1_len + j] = s2[j];
		}
		new_str[s1_len + n] = '\0';
		return (new_str);
}
