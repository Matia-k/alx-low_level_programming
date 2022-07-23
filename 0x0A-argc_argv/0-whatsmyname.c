#include <stdio.h>
#include "main.h"
/**
* main - prints its name, followed by a new line.
* @argc: The number of command line arguments.
* @argv: A pointer to the command line arguments.
* Return: Always zero.
*/
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
