#include "main.h"

/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: the string
 * @accept: the bytes to seacrh for
 *
 * Return: a pointer to the byte in @s that matches  bytes in accept or null
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		for (int i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (0);
			}
		}
		s++;
	}
	return (NULL);
}
