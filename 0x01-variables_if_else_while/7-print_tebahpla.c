#include <stdio.h>
/**
  *main - Prints lower case alphabets in reverse.
  *
  *Return: zero once succesful
  */
int main(void)
{
	int ch;

	for (ch = 122; ch >= 97; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
