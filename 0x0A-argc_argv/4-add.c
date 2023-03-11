#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: number of command argument in the program
 * @argv: actual command argument values in the program
 *
 * Return: 1 on error , 0 on success
 */
int main(int argc, char *argv[])
{
	int i, num2, total = 0;

		if (argc == 1)
		{
			printf("0/n");
			return (0);
		}
	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		while (*arg)
		{
			if (!isdigit(*arg))
			{
				printf("Error\n");
				return (1);
			}
			arg++;
		}
		num2 = 0;
		num2 = atoi(argv[i]);
		if (num2 > 0)
		{
			total += num2;
		}
	}
	printf("%d\n", total);
	return (0);
}
