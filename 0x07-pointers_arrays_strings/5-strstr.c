#include <stdio.h>
#include "main.h"
/**
 *_strstr - finds the first occurrence of the substring needle
 *in the string haystack.
 *@haystack: string in which a substring is to be located.
 *@needle: the substring to be located.
 *Return: a pointer to the beginning of the located substring,
 *or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	if (*needle == 0)
		return (haystack);

	while (haystack[i])
	{
		if (needle[j + 1] == '\0')
			return (haystack + (i - j));

		while (needle[j])
		{
			if (needle[j] == haystack[i])
			{
				j++;
				break;
			}
			break;
		}
		i++;
	}

	return (NULL);
}
