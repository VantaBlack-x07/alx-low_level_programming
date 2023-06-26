#include "main.h"

/**
* times_table - function that prints the 9 times table, starting with 0.
*
* Return: Nothing
*
*/

void times_table(void)
{
	char x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			_putchar(x * y);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
