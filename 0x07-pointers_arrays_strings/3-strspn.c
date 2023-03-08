#include "main.h"

/**
 * _strspn - function that gets the lenght of a prefix substring
 * @s: the string
 * @accept: the bytes to include
 *
 * Return: the number of bytes in the initial segment of @s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
	if (accept[j] == '\0')
	{
		break;
	}
	}
	return len;
}
