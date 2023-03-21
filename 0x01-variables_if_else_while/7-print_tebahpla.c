#include <stdio.h>

/**
* main - entry point
*
* Description: program that prints the lowercase alphabet in reverse
*
* Return: 0 (success)
*
*/

int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');

	return (0);
}
