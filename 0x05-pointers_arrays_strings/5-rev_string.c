#include "main.h"
/**
 * rev_string - entry point of a function that reverse a string
 * @s: the string
 */
void rev_string(char *s)
{
	int i;
	int j;
	int temp;
	int lenght;

	while (s[i] != 0)
	{
		i++;
	}
	length = i;
	i = 0
	j = lenght - 1

	while (i < j)
	{
		temp = s[1];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
