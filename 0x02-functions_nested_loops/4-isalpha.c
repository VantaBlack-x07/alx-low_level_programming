#include "main.h"

/**
* _isalpha - function to check if
* character is lowwercase pr uppercase
*
* @c: check input of function
*
* Return: return 1 if 'c' is true else 0
*/

int _isalpha(int c)
{
	if (c >= 98 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
