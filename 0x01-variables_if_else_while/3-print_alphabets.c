#include <stdio.h>

/**
* main - entry point
*
* Description: program that prints the alphabet
* in lowercase, and then in uppercase, followed by a new line
*
* Return: 0 (success)
*
*/

int main(void)
{
	int x, y;

	for (x = 97; x <= 122; x++)
{
		putchar(x);
}
	for (y = 65; y <= 132; y++)
{
		putchar(y);
}
	putchar('\n');
	return (0);
}
