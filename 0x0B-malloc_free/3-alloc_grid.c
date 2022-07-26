#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *alloc_grid -  returns a pointer to a 2 dimensional array of integers.
  *@width: size of the first dimension of the array.
  *@height: size of each element of W.
  *Return: A 2 dimensional array.
*/

int **alloc_grid(int width, int height)
{
	int **arr;
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(*arr) * width);
	if (arr == NULL)
		return (NULL);

	for (w = 0; w < width; w++)
	{
		arr[w] = malloc(sizeof(*arr) * height);
		if (arr[w] == NULL)
		{
			for (; w >= 0; w--)
				free(arr[w]);
			return (NULL);
			free(arr);
		}
	}
	for (w = 0; w < width; w++)
	{
		for (h = 0; h < height; h++)
			arr[w][h] = 0;
	}

	return (arr);
}
