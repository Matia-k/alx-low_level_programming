#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*binary_to_uint - converts a binary number to an unsigned int.
*@b: pointer to a string of 0 and 1 chars.
*Return: the converted number, or 0 if
	*there is one or more chars in the string b that is not 0 or 1
	*b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int base, n, num;
	int index, len, i;

	if (b == NULL)
		return (0);
	i = 0;
	len = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
		len++;
	}

	n = 0;
	base = 1;
	for (index = len - 1; index >= 0; index--)
	{
		num = (b[index] - '0');
		num = num * base;
		n = n + num;
		base = base * 2;
	}
	return (n);
}