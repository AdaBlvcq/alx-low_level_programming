#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to print in binary
 *
 * Return: None
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	unsigned int counter;

	for (counter = 0; counter < (sizeof(unsigned long int) * 8); counter++)
	{
		if ((n & (mask << counter)) == (mask << counter))
			putchar('1');
		else
			putchar('0');
	}
}
