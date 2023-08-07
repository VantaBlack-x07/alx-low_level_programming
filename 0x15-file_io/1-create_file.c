#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - function that creates a file.
 *
 * @filename: the name of the file.
 * @text_content: content of the file
 *
 * Return: 1 on success, or -1 on failure..
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t n_written;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	n_written = write(file, text_content, strlen(text_content));
	if (n_written == -1)
		return (-1);

	return (1);
}
