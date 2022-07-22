#include "main.h"
/**
* _strstr - locates a substring.
* @haystack: the string to be searched.
* @needle: the substring to be located.
* Return: a pointer to the beginning of the located substring,
* or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	while (haystack[i] != '\0')
	{
		for (j = 0; needle[j]; j++)
		{
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
			else if (haystack[i] == needle[j])
			{
				i++;
			}
			else
				break;
		}

		i++;
	}

	return ('\0');
}
