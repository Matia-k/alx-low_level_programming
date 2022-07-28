#include <stdlib.h>
#include "main.h"

/**
  *_calloc - allocates memory for an array, using malloc.
  *memory is then set to zero.
  *@nmemb: number of elements of the array to be allocated.
  *@size: number of bytes in each element.
  *Return: a pointer to the newly allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int bytes;
	void *arr;
	char *type_arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	bytes = nmemb * size;
	arr = malloc(bytes);
	if (arr == NULL)
		return (NULL);
	type_arr = arr;

	for (i = 0; i < nmemb; i++)
		type_arr[i] = '\0';

	return (arr);

}
