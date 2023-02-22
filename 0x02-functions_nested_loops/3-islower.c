#include "main.h"
/**
 * _islower - Entry point
 * @c: single letter input
 * Return: Always 0 on success or 1 if otherwise
 */
int _islower(int c)
{
		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
