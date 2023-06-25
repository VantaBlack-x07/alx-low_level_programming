#include <stdio.h>

/**
* main - entry point
*
* Description: program that prints the lowercase alphabet
* in reverse, followed by a new line
*
* Return: 0 (success)
*
*/

int main(void)
{
	int x;

	for (x = 122; x >= 97; x--)
{
		putchar(x);
}
	putchar('\n');
	return (0);
}
