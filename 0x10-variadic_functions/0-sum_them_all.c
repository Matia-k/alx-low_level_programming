#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - returns sum of all it's parameters.
 *@n: number of parameters passed to the function.
 *@...: variable number of arguments.
 *Return: 0 if n == 0, else sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list argp;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	va_start(argp, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += var_arg(argp, int);
	}

	va_end(argp);
	return (sum);


}
