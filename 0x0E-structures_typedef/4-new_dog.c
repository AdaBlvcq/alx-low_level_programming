#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - ...
 * @name: ...
 * @age: ...
 * @owner: ....
 * Return: ...
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *max_dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = strlen(name) + 1;
		own_l = strlen(owner) + 1;
		max_dog = malloc(sizeof(dog_t));
		if (max_dog == NULL)
			return (NULL);

		max_dog->name = malloc(sizeof(char) * name_l);

		if (max_dog->name == NULL)
		{
			free(max_dog);
			return (NULL);
		}

		max_dog->owner = malloc(sizeof(char) * own_l);

		if (max_dog->owner == NULL)
		{
			free(max_dog->name);
			free(max_dog);
			return (NULL);
		}

		max_dog->name = strcpy(max_dog->name, name);
		max_dog->owner = strcpy(max_dog->owner, owner);
		max_dog->age = age;
	}

	return (max_dog);
}

/**
 * _strlen - returns the length of a string
 * @s: string to count
 * Return: string length
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
 * _strcpy - copy a string
 * @dest: destination value
 * @src: source value
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';

	return (dest);
}
