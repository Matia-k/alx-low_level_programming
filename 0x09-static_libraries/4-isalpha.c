#include "main.h"
/**
* _isalpha - checks for alphabetic characters
*@c: The character to be checked cast to an int.
*
*Return: 1 if c is a letter irrespective of case, 0 otherwise
*/
int _isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}
