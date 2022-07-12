#include "main.h"
/**
  *puts2 - prints every other character of a string.
  *@str: string to be printed
*/
void puts2(char *str)
{
	int len, i;

	len = 0;
	while (str[len] != '\0')
		len++;

	_putchar(str[0]);
	for (i = 1; i <= len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
