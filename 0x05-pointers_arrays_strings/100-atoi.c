#include "main.h"
/**
*_atoi - converts a string to an integer.
*@s: string to be converted
*Return: integer resulting from the conversion.
*/
int _atoi(char *s)
{
	unsigned int num = 0, i = 0, sign = 1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
			num = num * 10 + s[i] - '0';
		if (s[i] >= '0' && s[i] <= '9' && s[i + 1] == ' ')
			break;
		i++;
	}
	return (num * sign);
}
