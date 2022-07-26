#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* str_concat - concatenates 2 strings.
* @s1: one of the strings.
* @s2: the string t add to s1.
* Return: pointer to new string which has s1+s2
*/

char *str_concat(char *s1, char *s2)
{
	int i, j, k, len1, len2;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	len1 = 0;
	while (s1[i])
	{
		len1++;
		i++;
	}
	j = 0;
	len2 = 0;
	while (s2[j])
	{
		len2++;
		j++;
	}

	s = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == NULL)
		return (NULL);

	for (k = 0; k < len1; k++)
		s[k] = s1[k];
	for (k = 0; s2[k]; k++)
		s[k + len1] = s2[k];
	s[len1 + len2 + 1] = '\0';

	return (s);
	free(s);
}
