#include "main.h"

/**
* _strspn - function that gets the length of a prefix substring.
*
* @s: the string
* @accept: characters to be searched in s
*
* Return: number of bytes in the initial segment of s
*
*/
unsigned int _strspn(char *s, char *accept)
{
int x, y, count = 0;

for (x = 0; s[x] != '\0'; x++)
{
	for (y = 0; accept[y] != '\0'; y++)
	{
		if (s[x] == accept[y])
		{
			count++;
			break;
		}
	}
}
return (count);
}
