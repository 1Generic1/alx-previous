#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main - Entry point of the program
 * Return : 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("the number is : %d\n", n);
	if (n>0)
	{
		printf("is positive\n");
	}
	else if (n==0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}

	return (0);

}

