#include <stdio.h>

/**
 *main - program that prints all arguments it receives.
 *
 *@argc: int
 *@argv: array
 *
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int x = 0;

	while (argc--)
	{
	printf("%d\n", argv[x]);
	x++;
	}
	return (0);
}
