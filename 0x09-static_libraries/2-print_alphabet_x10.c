#include "main.h"
/**
*print_alphabet_x10 - prints alphabet 10times in lower case
*
*Return: nothing
*/
void print_alphabet_x10(void)
{
	int s;
	int ch;

	for (s = 0; s < 10; s++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
