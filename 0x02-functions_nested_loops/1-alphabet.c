#include "main.h"
/**
 *main -Calls print_alphabet
 *
 *Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 *print_alphabet - prints the alphabet in lower case
 *
 *Return: none
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
