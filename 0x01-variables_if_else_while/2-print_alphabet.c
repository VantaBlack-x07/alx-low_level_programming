#include <stdio.h>

/**
* main - entry point
*
* Description: program that prints
* the alphabet in lowercase, followed by a new line.
*
* Return: 0 (success)
*
*/

int main(void)
{
        char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
		putchar('\n');
        return (0);
}

