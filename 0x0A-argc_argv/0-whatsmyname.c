#include <stdio.h>

/**
* main - program that prints its name, followed by a new line.
*
* @argc: argument count
* @argv: argument vector
*
* Return: Always (0) Success
*/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
