#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * binary_to_unit - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return:if b is NULL or contains chars not 0 or 1 - 0
 * else convert number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len, i;

	if (b == NULL)
		return (0);

	len = strlen(b);
	for (i = 0; i < len; i++)
	{
		if (b[i] == '0' || b[i] == '1')
	{
			result = (result << 1) + (b[i] - '0');
		}
		else
		{
			return (0);
		}
	}

	return (result);
}
