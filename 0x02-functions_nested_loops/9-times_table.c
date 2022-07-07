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
		for (n = 0; n < 9; n++)
		{
			p = m * n;
			printf("%d, ", p);
		}
		l = m * 9;
		printf("%d\n", l);
		m++;
	} while (m < 10);
}
