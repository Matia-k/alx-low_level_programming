#include <stdio.h>
/**
  *main - calls putchar function on a set of characters.
  *
  *Description: Prints all lower case alph except q and e
  *Return: zero once succesful
  */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		if (ch == 101 || ch == 113)
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
