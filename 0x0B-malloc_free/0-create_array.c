#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* create_array - creates an array of chars, and
*initializes it with a specific char.
* @size: size of the array created.
* @c: character to initailize array with.
* Return: A pointer to the created array.
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(*arr) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);

}
