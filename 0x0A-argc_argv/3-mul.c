#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - multiplies two numbers.
* @argc: the number of command line arguments.
* @argv: pointer to an array of command-line arguments.
* Return: 1 if not 2 arguments, 0 if succesful.
*/
int main(int argc, char *argv[])
{
	int prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	prod = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", prod);
	return (0);
}
