#include <stdio.h>

/**
* main - entry point
*
* Description: program that prints all possible
* different combinations of two digits
*
* Return: 0 (success)
*
*/

int main(void)
{
	int x, y;

	for (x = 48; x <= 57; x++)
{
		for (y = 48; y <= 57; y++)
	{
			if (x != y || y != 9)
		{
			putchar(x);
			putchar(y);
			putchar(',');
			putchar(' ');
		}
	}
}
	putchar('\n');
	return (0);
}
