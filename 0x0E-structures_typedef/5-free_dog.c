#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees dog
 * @d: dog
 * Return: 
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
