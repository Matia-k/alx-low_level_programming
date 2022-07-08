#include "main.h"
/**
  *print_triangle - prints a traingle, followed by a new line.
  *@size: size of the triangle.
*/

void print_triangle(int size)
{
	int row, hash, spc;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 0; row < size; row++)
		{
			for (spc = (size - 1); spc > row; spc--)
				_putchar(' ');

			for (hash = 0; hash <= row; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
