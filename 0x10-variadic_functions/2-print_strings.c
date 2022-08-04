#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_strings - prints strings followed by a new line.
 *@separator: string to be printed between strings.
 *@n: number of stringss passed to the function.
 *@...: optional extra arguments.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(str, char *));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(str);

}
