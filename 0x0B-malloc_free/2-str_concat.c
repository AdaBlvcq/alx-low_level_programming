#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concentrates two strings
 * @s1: string to concatenete
 * @s2: other string to concatenate
 * Return: pointer to new string createrd (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0, j = 0, k = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	s3 = malloc(sizeof(char) * (i + j + 1));

	if (s3 == NULL)
	{

		free(s3);
		return (NULL);
	}

	for (k = 0; k < i; k++)
			s3[k] = s1[k];

	limit = j;
	for (j = 0; j <= len2; k++, j++)
		s3[k] = s2[j];
	return (s3);
}
