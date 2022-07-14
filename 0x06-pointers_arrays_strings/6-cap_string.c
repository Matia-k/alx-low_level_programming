#include "main.h"
/**
*cap_string - Capitalizes all words of a string.
*@s: Pointer to the string.
*Return: Pointer to the string.
*/

char *cap_string(char *s)
{
	int i;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' ||
				s[i] == ';' || s[i] == '.' || s[i] == '!' ||
				s[i] == '?' || s[i] == '"' || s[i] == '(' ||
				s[i] == ')' || s[i] == '{' || s[i] == '}')
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] -= 32;
		i++;
	}

	return (s);
}
