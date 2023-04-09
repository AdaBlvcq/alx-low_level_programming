#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - a funcion that appends text at the end
 *                      of a file
 *
 * @filename: file to add data to
 * @text_content: text content to add to file
 *
 * Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *myfile;
	int result;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	myfile = fopen(filename, "a");

	if (myfile == NULL)
	{
		return (-1);
	}

	result = fputs(text_content, myfile);

	if (result == EOF)
	{
		fclose(myfile);
		return (-1);
	}

	fclose(myfile);
	return (1);
}
