#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *array_range -  creates an array of integers, that contain all the
 *values from min (included) to max (included), ordered from min to max
 *@min: value of smallest int to include in the array.
 *@max: value of largest int to include in the array.
 *Return: Pointer to the newly created array.
*/

int *array_range(int min, int max)
{
	int *arr;
	int i, range;

	if (min > max)
		return (NULL);

	range = max + 1 - min;
	arr = malloc(sizeof(int) * range);
	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		arr[i - min] = i;

	return (arr);
	free(arr);
}
