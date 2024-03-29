#include "main.h"

/**
* leet - encodes a string into 1337.
*
* @src: the string
*
* Return: changed string
*/

char *leet(char *src)
{
	int i;
	char lowercase_alphabets[] = {'4', 'b', 'c', 'd', '3', 'f', 'g', 'h', 'i',
	'j', 'k', '1', 'm', 'n', '0', 'p', 'q', 'r',
	's', '7', 'u', 'v', 'w', 'x', 'y', 'z'};

	char uppercase_alphabets[] = {'4', 'B', 'C', 'D', '3', 'F', 'G', 'H', 'I',
	'J', 'K', '1', 'M', 'N', '0', 'P', 'Q', 'R', 'S', '7', 'U',
	'V', 'W', 'X', 'Y', 'Z'};
	i = 0;
	while (src[i] != '\0')
	{
		while ((src[i] >= 'a' && src[i] <= 'z') || (src[i] >= 'A' && src[i] <= 'Z'))
		{
			if (src[i] >= 'a' && src[i] <= 'z')
			{
				src[i] = lowercase_alphabets[src[i] - 97];
				break;
			}
			src[i] = uppercase_alphabets[src[i] - 65];
			break;
		}
		i++;
	}

	return (src);
}
