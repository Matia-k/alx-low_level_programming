#include "main.h"
/**
* _strcmp - compares two strings.
* @s1: Pointer to one of the strings.
* @s2: Pointer to the other string.
*Return: an int - the ASCII diff btn the two strings.
*/

int _strcmp(char *s1, char *s2)
{
	int i, diff;

	i = 0;
	diff = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
		{
			diff = s1[i] - s2[i];
			break;
		}
	}

	return (diff);
}
