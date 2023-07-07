#include <unistd.h>
#include "main.h"

/*
* _putchar - writes the character c
*
* @c: char parameter
*
*  Return: 0 (success)
*	  -1 (error)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
