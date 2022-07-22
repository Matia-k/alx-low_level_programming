#include "main.h"
/**
  *print_last_digit - prints last digit of a number
  *@n: Number whose last digit is to be printed
  *
  *Return: The value of the last digit
  */
int print_last_digit(int n)
{
	int d;

	if (n < 0)
		n = n * -1;
	d = n % 10;
	_putchar(d + '0');
	return (d);
}
