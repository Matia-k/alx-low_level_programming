#include "main.h"
/**
* _strlen_recursion - returns the length of a string.
*@s: the string whose lenght is to be returned.
*Return: The length of string as an int.
*/

int _strlen_recursion(char *s)
{
	int len;

	if (s[0] == '\0')
	{
		len = 0;

		return (len);
	}
	len = 1;
	return (len + _strlen_recursion(s + 1));
}
