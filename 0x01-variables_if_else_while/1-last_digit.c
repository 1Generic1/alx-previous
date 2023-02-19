#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of this progran that prints the last digit of the number stored in the variable n
 *
 * Return: 0 on success
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d", n % 10);
	if (n > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (n == 0)
	{
		printf("and is 0\n");
	}
	else if (n < 6 && n != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
