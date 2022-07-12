#include "main.h"
/**
*_strcpy - copies a string to the buffer.
*@src: string to be copied.
*@dest: Pointer to the buffer.
*Return: A pointer to the buffer.
*/

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
		len++;

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
