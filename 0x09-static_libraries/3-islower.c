#include "main.h"
/**
* _islower - checks for lower case characters
*@c: The character to be checked cast to an int.
*
*Return: 1 if c is lower case, 0 otherwise
*/
int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}
