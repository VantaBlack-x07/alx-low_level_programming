#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFSIZE 1024

/**
 * main - program that copies the content of a file to another file.
 *
 * @argc: number of inputs.
 * @argv: array of input strings.
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t n_read, n_written;
	char buf[BUFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((n_read = read(file_from, buf, BUFSIZE)))
	{
		if (n_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close(file_from);
			close(file_to);
			exit(98);
		}
		n_written = write(file_to, buf, n_read);
		if (n_written == -1 || n_written != n_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_to);
			close(file_from);
			exit(99);
		}
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
