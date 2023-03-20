#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initialize a variable of type struct dog
 * @d: dog to be initialzed
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = nam;
		d->age = age;
		d->owner = owner;
	}
}
