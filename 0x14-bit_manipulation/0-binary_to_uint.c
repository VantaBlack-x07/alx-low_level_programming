#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function that converts
 * a binary number to an unsigned int.
 *
 * @b: pointer to a string contains the chars of 0 and 1.
 *
 * Return: the converted number, or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	for (; *b != '\0'; b++)
	{
		if (*b == '0')
		{
			num <<= 1;
		}
		else if (*b == '1')
		{
			num = (num << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (num);
}
