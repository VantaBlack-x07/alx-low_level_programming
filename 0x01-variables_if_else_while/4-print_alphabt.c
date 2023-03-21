#include <stdio.h>

/**
* main - entry point
*
* Description: program that prints the alphabet in lowercase,
* followed by a new line
*
* Return: Always 0 (success)
*/

int main(void)
{
	char x = 'a';

	while (x == 'e' || x == 'q')
	{
		x++;
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}

