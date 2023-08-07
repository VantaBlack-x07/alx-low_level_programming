#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output.
 *
 * @filename: the name of the file.
 * @letters: number of letters.
 *
 * Return: number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file;
	ssize_t n_written, n_read;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(file);
		return (0);
	}

	n_read = read(file, buffer, letters);
	if (n_read <= 0)
	{
		free(buffer);
		close(file);
		return (0);
	}

	n_written = write(STDOUT_FILENO, buffer, n_read);
	free(buffer);
	close(file);

	if (n_written <= 0)
		return (0);

	return (n_written);
}

