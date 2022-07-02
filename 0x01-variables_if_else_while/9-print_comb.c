#include <stdio.h>
/**
  *main - Prints single digit numbers of base 10.
  *
  *Description: The numbers are separated by commas and spaces.
  *Return: zero once succesful
  */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n == 9)
			continue;
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
