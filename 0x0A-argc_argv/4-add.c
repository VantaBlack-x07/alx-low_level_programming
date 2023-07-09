#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
* main - program that adds positive numbers.
*
* @argc: argument count
* @argv: argument vector
*
* Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	int x, y;
	int sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", sum);
	}

	return (0);
}
