#include <stdio.h>
/**
  *main - Prints hexadecimal numbers in lowercase.
  *
  *Return: zero once succesful
  */
int main(void)
{
	int n;
	int ch;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (ch = 97; ch <= 102; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
