#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - adds positive numbers.
* @argc: the number of command line arguments.
* @argv: pointer to an array of command-line arguments.
* Return: 1 if one of arguments contains non digits, 0 if succesful.
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%i\n", sum);
	return (0);
}
