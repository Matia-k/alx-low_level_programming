#include "main.h"
/**
  *rev_string - reverses a string.
  *@s: string to be reversed.
*/
void rev_string(char *s)
{
	int len, i;
	char c;

	len = 0;
	while (s[len] != '\0')
		len++;

	for (i = len - 1; i >= len / 2; i--)
	{
		c = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = c;
	}
}
