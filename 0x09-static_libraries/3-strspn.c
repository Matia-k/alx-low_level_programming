#include "main.h"
/**
*_strspn - Gets the length of a prefix substring.
*@s: String to be scanned.
*@accept: String consists of only bytes to match.
*Return: Number of bytes in the initial segment of s,
*which consist only of bytes from accept.
*/

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int bytes;

	i = 0;
	bytes = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (bytes);
		}
		s++;
	}

	return (bytes);
}
