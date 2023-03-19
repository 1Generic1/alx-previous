#include "main.h"

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (isspace(s[i]))
	{
		i++;
	}

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}
	while (isdigit(s[i]))
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return sign * result;
}


