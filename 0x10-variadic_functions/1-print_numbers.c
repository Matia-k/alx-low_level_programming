#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_numbers - prints numbers followed by a new line.
 *@separator: string to be printed between numbers.
 *@n: number of integers passed to the function.
 *@...: variable number of extra arguments.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);
	for (i = 1; i < n; i++)
	{
		printf("%d", va_arg(num, int);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);

	printf("\n");

	va_end(num);

}
