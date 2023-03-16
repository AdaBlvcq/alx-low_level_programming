#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s2: string to append to
 * s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, k = 0, limit = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n > j)
		n = j;

	k = i + n;

	sout = malloc(k + 1);

	if (sout == NULL)
		return (NULL);

	for (limit = 0; limit < k; limit++)
		if (limit < i)
			sout[limit] = s1[limit];
		else
		sout[limit] = s2[limit - i];

	sout[limit] = '\0';
	return (sout);
}
