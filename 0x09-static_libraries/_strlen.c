#include "main.h"

int _strlen(char *s)
{
	int len = 0
	int index = 0
	for (index = 0; s[index] != '\0'; index++)
	{
		len++
	}
	return (len);
}
