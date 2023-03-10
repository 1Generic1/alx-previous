#include "main.h"

/**
 * is_sqrt - checks if the number is square root of a number
 * @g: number to check if it is a square root
 * @r: test number
 *
 * Return: square root g, -1 if else
 */

int is_sqrt(int g, int r)
{
	if (g * g == r)
		return (g);
	if (g * g < r)
		return (is_sqrt(++g, r));
	else
		return (-1);
}
/**
 * _sqrt_recursion - function that returns the natural square root
 * @n: integer input
 *
 * Return: -1 if it is not a natural square
 */

int _sqrt_recursion(int n)
{
	if (n != 0)
		return (is_sqrt(0, n));
	else
		return (0);
}
