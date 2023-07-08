#include "main.h"

/**
* _isupper - checks for uppercase character.
*
* @c:input for alphabet
*
* Return: 1 if it's uppercase, 0 if not
*
*/

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	else
		return (0);
}
