#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 * @a: the first integer to add 
 * @b: the second integer to add
 *
 * Return: The sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of a and b
 * @a: The integer to substract from
 * @b: The integer to substract
 *
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that returns the product of a and b
 * @a: The first integer to multiply
 * @b: The second integer to multiply
 *
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the result of dividing a and b
 * @a: The dividend
 * @b: The divisor
 *
 * Return: The result of a divided by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of dividing a and b
 * @a: The  dividend
 * @b: The divisor
 *
 * Return: The remainder of a divided by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
