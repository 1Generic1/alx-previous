#include "main.h"

/**
 * _memset - entry point of function that fills memory ith constant
 * @s: pointer
 * @b: constant byte
 * @n: interger number of byte of the memory
 *
 * Return: returns pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return s;
}
