#include "main.h"
int rep_subtraction(int number, int count);
/**
*_sqrt_recursion - returns the natural square root of a number.
*@n: The number whose square root is to be found.
*Return: The square root of n.
*/

int _sqrt_recursion(int n)
{
	int ret, odd = 1;

	if (n <= 0)
		return (-1);

	ret = rep_subtraction(n, odd);
	if (ret < 0)
		return (-1);

	return (ret);
}

/**
*rep_subtraction - subtracts the consecutive odd numbers from a number,
*until it's zero. "repeated subtraction method".
*@number: the number to be subtracted.
*@count: keeps track of the number of subtractions.
*Return: the number of subtractions.
*/
int rep_subtraction(int number, int count)
{
	if (number == 0)
		return (0);
	if (number < 0)
		return (-1000);
	number = number - count;
	count = count + 2;
	return (1 + rep_subtraction(number, count));
}
