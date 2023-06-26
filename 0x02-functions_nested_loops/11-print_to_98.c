#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers
 * from n to 98, followed by a new line.
 *
 * @n: the number
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
		int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			_putchar(i + 48);
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			_putchar(i + 48);
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar(98 + 48);
}
