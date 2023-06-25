#include <stdio.h>

/**
* main - entry point
*
* Description: program that prints all the numbers
* of base 16 in lowercase, followed by a new line
*
* Return: 0 (success)
*
*/

int main(void)
{
	int x, y;

	for (x = 48; x <= 57; x++)
{
		putchar(x);
}
	for (y = 97; y <= 102; y++)
{
		putchar(y);
}
	putchar('\n');
	return (0);
}
