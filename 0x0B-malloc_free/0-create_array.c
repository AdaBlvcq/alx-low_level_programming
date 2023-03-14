#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initializes
 * it with a specific char
 * @c: char to intialize
 * @size: number of bytes to allocate
 * Return: a pointer to the array or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str; 
	unsigned int i;

	str = mallo(sizeof(char) * size);
	if (size == 0 || size == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
