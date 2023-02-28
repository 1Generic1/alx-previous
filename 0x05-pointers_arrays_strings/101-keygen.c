#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 * main - Entry point
 *
 * Return: Always 0 on success
 */

int main()
{
	char password[PASSWORD_LENGTH +1];
		int i;
		srand(time(NULL));

		for (i = 0; i < PASSWORD_LENGHT + 1; i++)
		{
			password[i] = rand() % 94 + 33;
		}

		password[PASSWORD_LENGTH] = '0';

		printf("Generated password: %s\n", password);
		return (0);
		}
