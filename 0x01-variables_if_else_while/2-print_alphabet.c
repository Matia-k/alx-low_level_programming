#include <stdio.h>
/**
  *main - calls putchar function on a set of characters.
  *
  *Return: zero once succesful
  */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
