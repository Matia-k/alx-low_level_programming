#include "main.h"
#include <stdio.h>
/**
  * print_array - prints elements of an array of integers.
  * @a: the array of integers.
  * @n: the number of elements to be printed.
*/
void print_array(int *a, int n)
{
	int i;

	printf("%i", a[0]);
	for (i = 1; i < n; i++)
	{
		printf(", %i", a[i]);
	}
	printf("\n");
}
