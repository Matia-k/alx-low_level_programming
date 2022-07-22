#include "main.h"
/**
*reverse_array - Reverses the content of an array of ints.
*@a: The pointer to the array whose content is to be reversed.
*@n: Number of elements of the array.
*/

void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		i++;
	}
}
