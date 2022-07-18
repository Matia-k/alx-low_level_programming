#include "main.h"
/**
* _memcpy - copies memory area.
* @dest: Pointer to memory area to copy bytes to.
* @src: Pointer to memory area to copy bytes from.
* @n: Number of bytes to be copied.
* Return: A pointer to dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
