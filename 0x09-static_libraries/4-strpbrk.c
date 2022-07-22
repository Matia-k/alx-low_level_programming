#include "main.h"
/**
*_strpbrk - searches a string for amy of a set of bytes
*@s: The string to be searched.
*@accept: The string, any of whose bytes is to be searched for.
*
*Return: Pointer to the byte in s that matches one of the
*bytes in accept, or NULL if not found.
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}

		i++;
	}

	return ('\0');
}
