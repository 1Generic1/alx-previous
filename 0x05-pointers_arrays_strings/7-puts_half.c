#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: the string
 */
void puts_half(char *str)
{
	int len = 0, i;

	for (len = 0; str[len] != '\0'; len++)
	{
		;
	}
	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
		else
		{
			for (i = (len + 1) / 2; i < len; i++)
			{
				_putchar(str[i]);
			}
		}
	_putchar('\n');
}
