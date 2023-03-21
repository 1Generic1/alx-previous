#include "dog.h"
#include <stdlib>
#include <stddef>

/**
 * free_dog - function that frees dogs
 * @d: pointer to dog
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
