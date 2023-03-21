#include <stdio.h>

/**
* main - entry point
*
* Description: program that prints the alphabet
* in lowercase, followed by a new line.
*
* Return: 0 (success)
*
*/
int main(void)
{
	char x = 'a';
	char X = 'A';

	while (x <= 'z')
	{
	putchar(x);
	x++;
	}
	while (X <= 'Z')
	{
	putchar(X);
	X++;
	}
	putchar('\n');
	return (0);
}
