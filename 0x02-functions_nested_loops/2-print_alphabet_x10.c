#include "main.h"

/**
* print_alphabet_x10 - function that prints 10 times the
* alphabet, in lowercase, followed by a new line.
*
* Return: Nothig
*/

void print_alphabet_x10(void)
{
	int x;

	for (x = 97; x <= 122; x++)
{
		_putchar(x);
}
putchar('\n');
}
