#include <stdio.h>
#include "main.h"
/**
* main - prints all arguments it receives.
* @argc: the number of command line arguments.
* @argv: pointer to an array of command-line arguments.
* Return: always zero.
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
