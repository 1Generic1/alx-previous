#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * main - entry point
 * @argc: argument point
 * @argv: argument vector
 *
 * Return:0 on success, exit with status 98, 99, 100 on failure
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n"
		exit (98);
	}
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);

		op_func = get_op_func(argv[2]);

		if (op_func == NULL || argv[2][1] != '\0')
		{
			printf("Error\n");
			exit(99);
		}
	if ((op_func == op_div || op_func == op_mod) && num2 == 0)
	{
	printf("Error\n");
`	exit(100);
	}
	result = op_func(num1, num2);
	print("%d\n", result);

	return (0);
}

