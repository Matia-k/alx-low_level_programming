#include "main.h"
/**
* factorial - returns factorial of a given number.
* @n: number whose factorial is to be returned.
*Return: the factorial of n.
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
