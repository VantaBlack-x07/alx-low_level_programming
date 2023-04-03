#include "main.h"

/**
* _memset - function that fills memory with a constant byte
*
* @s: pointer to be filled
* @n: bytes of the memory area
* @b: constant byte
*
* Return: pointer to the memory area s
*
*/

char *_memset(char *s, char b, unsigned int n)
{
		unsigned int x;

		for (x = 0; n > 0; n--; x++)
		{
			s[x] = b;
		}

		return (s);
}
