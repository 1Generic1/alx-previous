#include "main.h"

/**
 * _isupper - Entyr point 
 * @c: charater to be checked
 * Return: 1 if c is uppercase or 0 if otherwise
 */

int _isupper(int c)
{
		if (c >= 'A' && c <= 'Z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
