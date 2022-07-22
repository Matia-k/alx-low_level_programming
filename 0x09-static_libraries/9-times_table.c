#include "main.h"
#include <stdio.h>
/**
  *times_table - prints 9 times table starting with 0.
  *
  *Return: nothing
  */
void times_table(void)
{
	int m, n, p, l;

	m = 0;
	do {
		l = m * 0;
		putchar(l + '0');
		for (n = 1; n <= 9; n++)
		{
			p = m * n;
			if (p >= 10)
			{
				printf(", %d", p);
			}
			else
			{
				printf(",  %d", p);
			}
		}
		putchar('\n');
		m++;
	} while (m < 10);
}
