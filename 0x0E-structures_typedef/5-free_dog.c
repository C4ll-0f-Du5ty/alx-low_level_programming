#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * free_dog - frees yo dawgs
 * @d: yo dawg
 *
 * Return: void.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
