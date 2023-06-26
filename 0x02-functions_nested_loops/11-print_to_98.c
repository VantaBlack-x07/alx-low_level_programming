#include "main.h"

/**
* print_to_98 - function that prints all natural numbers
* from n to 98, followed by a new line.
*
* @n: the number
*
* Return: Nothing
*
*/

void print_to_98(int n)
{
	if (n == 0 || n < 0)
	{
		n = 1;
	}
	for (; n <= 98; n++)
	{
		_putchar(n + 48);
		if (n != 98)
		{
		_putchar(',');
		_putchar(' ');
		}
	}
}
