#include "main.h"
/**
 * _isalpha - Entry point
 * @c: single letter
 * Return: always 1 if lower or upper case or 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
