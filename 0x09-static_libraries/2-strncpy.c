#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
