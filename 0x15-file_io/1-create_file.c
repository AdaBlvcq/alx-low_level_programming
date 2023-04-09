#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "main.h"

/**
 * create_file - a function that creates a file
 *
 * @filename: name of file to create
 * @text_content: string to write to file
 *
 * Return: 1 on success OR -1 on faliure
*/
int create_file(const char *filename, char *text_content)
{
	int myfile;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}
	myfile = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (myfile == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
	bytes_written = write(myfile, text_content, strlen(text_content));

	if (bytes_written == -1)
	{
		close(myfile);
		return (-1);
	}
	}
	close(myfile);
	return (1);
}
