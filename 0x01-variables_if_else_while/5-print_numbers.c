#include <stdio.h>
/**
  *main - Prints all single digit numbers.
  *
  *Return: zero once succesful
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}
