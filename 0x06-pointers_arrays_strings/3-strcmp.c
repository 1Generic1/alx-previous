#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: string 1 to be compared
 * @s2: string 2 to be compared
 *
 * Return: s1[i] - s2[i]
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
	
