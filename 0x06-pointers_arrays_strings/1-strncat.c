#include "main.h"
/**
  *_strncat - concatenates two strings
  *@dest: string to be appended to.
  *@src: string to be appended.
  *@n: number of bytes to be used from src.i
  *Return: the concatenated sting dest.
*/
char *_strncat(char *dest, char *src, int n)
{
	int len1, len2, i;

	len1 = 0;
	len2 = 0;
	while (dest[len1] != 0)
		len1++;
	while (src[len2] != 0)
		len2++;

	for (i = 0; i < len2; i++)
	{
		if (i >= n)
		{
			continue;
		}
		dest[i + len1] = src[i];
	}
	if (len2 < n)
		dest[len1 + len2] = '\0';

	return (dest);
}
