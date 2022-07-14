#include "main.h"
/**
  *_strncpy - concatenates two strings
  *@dest: pointer to the buffer to be copied to.
  *@src: pointer to the string to be copied.
  *@n: maximum number of bytes to be used from src.i
  *Return: Pointer the copied string dest.
*/
char *_strncpy(char *dest, char *src, int n)
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
		dest[i] = src[i];
	}
	if (len2 < n)
		dest[len2] = '\0';

	return (dest);
}
