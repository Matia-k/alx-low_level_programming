#include "main.h"
/**
* leet - Encodes a string into 1337.
*@s: Pointer to the string to be encoded
*Return: Pointer to the encoded string.
*/

char *leet(char *s)
{
	int i, j;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; j <= 7; j++)
		{
			if (s[i] == leet[j] || s[i] - 32 == leet[j])
				s[i] = j + '0';
		}

		i++;
	}

	return (s);
}
