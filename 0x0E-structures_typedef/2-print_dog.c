#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: pointer to dog
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("age: %.6f\n", d->age);
	if (d->owner == NULL)
	{
		printf("owner:(nil)\n");
	}
	else
	{
		printf("owner: %s\n", d->owner);
	}
}
