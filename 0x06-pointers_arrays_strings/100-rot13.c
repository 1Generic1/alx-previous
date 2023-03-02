#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the string to encode
 *
 * Return: encode string
 */

char *rot13(char *src)
{
	int i, j;

	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while ( c[j] != '\0')
		{
			if (src[i] == c[j])
			{
				src[i] = rot[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
