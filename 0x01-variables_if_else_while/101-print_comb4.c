#include <stdio.h>

/**
 * main - prints all possible combinations of three digits
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j, z;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (z = y + 1; z < 10; z++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(z + '0');
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}

	putchar('\n');

	return (0);
}
