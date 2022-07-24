#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"
/**
* main - adds poIsitive numbers.
* @argc: the number of command line arguments.
* @argv: pointer to an array of command-line arguments.
* Return: 1 if one of arguments contains non digits, 0 if succesful.
*/
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%i\n", sum);
	return (0);
}
