#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
/**
 * read_textfile - a function that reads a text file and prints it
 *                to POSIX standard output.
 *
 * @filename: is the file to read
 * @letters: number of letters to read and print from file
 *
 * Return: 0 if file can not be opened or read,
 *         if filename is NULL
*/
size_t read_textfile(const char *filename, size_t letters)
{
	int myfile;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
	{
		return (0);
	}

	myfile = open(filename, O_RDONLY);

	if (myfile == -1)
	{
		return (0);
	}

	buffer = (char *)malloc(letters + 1);
	bytes_read = read(myfile, buffer, letters);

	if (bytes_read == -1)
	{
		close(myfile);
		free(buffer);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(myfile);
		free(buffer);
		return (0);
	}

	free(buffer);
	close(myfile);
	return (bytes_read);
}
