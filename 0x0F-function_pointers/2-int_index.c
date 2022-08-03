#include <stdio.h>
#include "function_pointers.h"
/**
  *int_index - searches for an integer.
  *@array: the array to be searched.
  *@size: size of the array
  *@cmp: pointer to function to be used to compare values.
  *Return: returns the index of the first element for
  *which the cmp function does not return 0.
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
