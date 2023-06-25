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
		for (y = i + 1; y <= 57; y++)
	{
			putchar(x);
			putchar(y);
		if (x !=9 && y != 9)
	{
			putchar(',');
			putchar(' ');
	}
	}
}
	putchar('\n');
	return (0);
}
