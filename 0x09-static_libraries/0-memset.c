#include "main.h"
/**
*_memset - fills memory with a constant byte.
*@s: Pointer to the memory area to be filled.
*@b: constant byte to fill the memory area.
*@n: The number of bytes in memory to fill.
*Return: A pointer to the filled memory area.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
