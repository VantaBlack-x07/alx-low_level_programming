#include "main.h"

/**
* rev_string - function that reverses a string.
*
* @s: is the string.
*
*/

void rev_string(char *s)

{
	int x, y;
	char temp;

	for (x = 0 ; s[x] != '\0'; x++)
	{
	}
	for (y = 0; y < x / 2; y++)
	{
		temp = s[y];
		s[y] = s[i - 1 - y];
		s[i - 1 - y] = temp;
	}

}
