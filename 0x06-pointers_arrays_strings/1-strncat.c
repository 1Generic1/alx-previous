#include "main.h"

/**
 * _strncat - Function that concatenates two strings
 * @dest: destination string
 * @src: source string 
 * @n: maximun number of bytes from src to be appended to best
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, src_len = 0;

		while (dest[dest_len] != '\0')
		{
			dest++;
		}
	while (src_len < n && src[src_len] != '\0')
	{
		dest[dest_len + src_len] = src[src_len];
			dest_len++;
		src_len++;
	}
	dest[dest_len + src_len] = '\0';
	return (dest);
}
