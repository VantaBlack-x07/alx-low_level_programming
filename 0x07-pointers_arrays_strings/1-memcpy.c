#include "main.h"

/**
* _memcpy - function that copies memory area.
*
* @dest: pointer to be copied
* @n: bytes of the memory area
* @src: constant byte
*
* Return: pointer to the memory area s
*
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
			unsigned int x;

			for (x = 0; n > x; x++)
			{
				dest[x] = src[x];
			}
				return (dest);
}
