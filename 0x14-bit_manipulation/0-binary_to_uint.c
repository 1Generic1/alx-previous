#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - function that converts a binary number to an insigned int
 * @b: binary string to be converted
 *
 * Return: the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1 or if b is NULL.
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
			result <<= 1;
			if (b[i] == '1')
			{
				result += 1;
			}
	}
		return (result);
}
