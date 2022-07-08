#include "main.h"
/**
  *print_most_numbers - prints numbers 0 - 9,followed by anew line
  *
  */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
