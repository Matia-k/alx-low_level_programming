#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *string_nconcat - concatenates two strings.
  *@s1: string to be concatenated to.
  *@s2: string to concatenate to s1.
  *@n: number of bytes of s1 to concatenate to s2.
  *Return: a pointer to the newly cncatenated space in memory.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, lens1;
	char *str;
	unsigned int e;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	lens1 = 0;
	while (s1[i] != '\0')
	{
		lens1++;
		i++;
	}

	str = malloc((lens1 + n + 1) * sizeof(*str));
	if (str == NULL)
		return (NULL);

	for (j = 0; j < lens1; j++)
	{
		str[j] = s1[j];
	}
	for (e = 0; e < n; e++)
	{
		str[lens1 + e] = s2[e];
	}
	str[lens1 + n] = '\0';

	return (str);
}
