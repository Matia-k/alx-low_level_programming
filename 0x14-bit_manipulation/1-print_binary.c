#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 *@n: the number to be converted to binary.
*/

void print_binary(unsigned long int n)
{
	unsigned long int mask, fig;

	mask = 1 << 8;

	for (fig = 1; fig <= 8; fig++)
	{
		_putchar(n & mask ? '1' : '0');
		n = n << 1;
	}
	_putchar('\n');
}
