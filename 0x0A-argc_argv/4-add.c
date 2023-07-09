#include <stdio.h>
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
	int x, y;

	for (int x = 1; x < argc; x++)
	{
		for (int y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
			else if (argc == 1)
			{
				printf("0\n");
			}
			else
			{
				printf("%i\n", argv[x] + argv[x + 1]);
			}
		}

	}
	return (0);
}
