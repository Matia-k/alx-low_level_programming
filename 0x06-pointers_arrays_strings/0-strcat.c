#include "main.h"
#include <stddef.h>
/**
*_strcat - concatenates two strings
* @dest: string to appended to.
* @src: string to be appended.
* Return: pointer to the resulting string.
*/

char *_strcat(char *dest, char *src)
{
	int len1, len2, len, i;
	char *added = NULL;

	len1 = 0;
	len2 = 0;
	while (dest[len1] != '\0')
		len1++;
	while (src[len2] != '\0')
		len2++;

	len = len1 + len2;

	for (i = 0; i < len1; i++)
	{
		added[i] = dest[i];
	}

	for (i = 0; i < len2; i++)
	{
		added[i + len1] = src[i];
	}

	added[len] = '\0';

	return (added);

}

