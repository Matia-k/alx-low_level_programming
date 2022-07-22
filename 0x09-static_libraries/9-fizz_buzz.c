#include <stdio.h>

void fizz_buzz(void);

/**
 * main - calls another function fizz_buzz;
 * Return: always 0;
*/
int main(void)
{
	fizz_buzz();
	return (0);
}

/**
 * fizz_buzz - prints numbers 1 to 100. For multiples of three print Fizz.
 * for multiples of five print Buzz.
 * for multiples of three and five print FizzBuzz.
 *Return: nothing
 */
void fizz_buzz(void)
{
	int i;

	printf("1");
	for (i = 2; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else
			printf(" %i", i);
	}
	printf("\n");
}
