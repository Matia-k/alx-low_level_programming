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
	printf("%d", va_arg(num, int));
	for (i = 1; i < n; i++)
		if (separator == NULL)
			printf("%d", va_arg(num, int));
		else
			printf("%s %d", separator, va_arg(num, int));

	printf("\n");

	va_end(num);

}
