#include <stdio.h>
/**
  *main - calls putchar function on a set of characters.
  *
  *Description: Prints the characters in small case, then in upper case
  *Return: zero once succesful
  */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	for (ch = 65; ch <= 90; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
