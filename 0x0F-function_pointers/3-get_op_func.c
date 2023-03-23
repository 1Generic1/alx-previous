#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - function that selects the correct function to perform
 * the operation asked by the user
 * @s: the operator passed as argument to the program
 *
 * Return: pointer to the function that corresponds to the
 * operator given ais a parameter, or NULL if the operator not found
 */

int (*get_op_func(char *s))(int, int)
{
	int i;
	i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mull}'
		{"/", op_div},
		{"%", op_mod},
		{NULL,NULL}
	};
		while (ops[].op != NULL)
		{
			if(*(ops[i].op) == *s && *(s + 1) == '\0')
			{
				return (ops[i].f);
			}
			i++;
		}
	return (NULL);
}


