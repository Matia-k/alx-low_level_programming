#include "main.h"
/**
  *print_diagonal - draws a diagonal line in the terminal
  *@n: number of times \ should be printed.
*/

void print_diagonal(int n)
{
	int rows, spaces;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (rows = 0; rows < n; rows++)
		{
			for (spaces = 0; spaces < rows; spaces++)
				_putchar(' ');

			_putchar('\\');

			_putchar('\n');
		}
	}
}
