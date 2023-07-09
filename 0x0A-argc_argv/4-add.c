#include <stdio.h>
#include <ctype.h>
#include <ctype.h>

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
	int sum = 0;

	for (int x = 1; x < argc; x++)
	{
		for (int y = 0; argv[x][y] != '\0'; y++) {
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
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
