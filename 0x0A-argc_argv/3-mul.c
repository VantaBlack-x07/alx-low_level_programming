#include <stdio.h>

/**
* main - program that multiplies two numbers.
*
* @argc: argument count
* @argv: argument vector
*
* Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%i\n", argv[1] * argv[2]);
	}
	return (0);
}
