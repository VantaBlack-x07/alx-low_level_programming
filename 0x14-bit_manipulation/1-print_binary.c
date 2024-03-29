#include <stdio.h>
#include "main.h"

/**
 * print_binary - function that prints
 * the binary representation of a number.
 *
 * @n: the number used.
 *
 * Return: Nothing.
 */

void print_binary(unsigned long int n)
{
	if (n)
	{
		if (n >> 1)
		{
			print_binary(n >> 1);
		}
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
