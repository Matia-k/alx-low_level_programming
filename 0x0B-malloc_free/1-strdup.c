#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory,
*which contains a copy of the string given as a parameter.
* @str: string to be copied.
* Return: A pointer to a copy of str.
*/

char *_strdup(char *str)
{
	char *dup_str;
	int len, j, i;

	len = 0;
	j = 0;
	while (str[j] != '\0')
	{
		j++;
		len++;
	}
	dup_str = malloc((sizeof(*dup_str) * len) + 1);
	if (dup_str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		dup_str[i] = str[i];
	}
	return (dup_str);
	free(dup_str);
}
