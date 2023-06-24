#include <stdio.h>

/**
* main - entry point
*
* Description: program that prints
* the alphabet in lowercase, followed by a new line
*
* Return: 0 (success)
*
*/

int main(void)
{
	int x;

	for (x = 97; x <= 122; x++)

{
		putchar(x);
}
		putchar('\n');
	return (0);
}
