#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints whether a number stored in a variable is +ve or -ve.
 *
 * Return: zero after succesful execution.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		puts("The number is positive");
	}
	else if (n == 0)
	{
		puts("The number is zero");
	}
	else
		puts("The number is negative");

	return (0);
}
