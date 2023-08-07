#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - function that appends text at the end of a file.
 *
 * @filename: the name of the file.
 * @text_content: content of the file
 *
 * Return: 1 on success, or -1 on failure..
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t n_written;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	n_written = write(file, text_content, strlen(text_content));
	if (n_written == -1)
		return (-1);

	close(file);

	return (1);
}
