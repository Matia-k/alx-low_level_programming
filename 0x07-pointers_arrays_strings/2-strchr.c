#include "main.h"
/**
* _strchr - Locates a character in a string.
* @s: Pointer to the string to be searched.
* @c: The character to be searched for.
* Return: pointer to the first occurrence of c in s,
* or NULL if the character is not found.
*/

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (c == s[i])
		{
			s = &s[i];
			return (s);
		}
		i++;
	}
	return ('\0');
}
