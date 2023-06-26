#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0.
 *
 * Return: Nothing
 */
void times_table(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			printf("%2d", x * y);
			if (y != 9)
			{
				printf(", ");
			}
		}
	printf("\n");
		}
}
