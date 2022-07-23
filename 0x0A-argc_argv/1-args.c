#include <stdio.h>
#include "main.h"
/**
* main - prints the number of arguments passed into it.
* @argc: the number of command line arguments.
* @argv: pointer to an array of command-line arguments.
* Return: always zero.
*/
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%i\n", (argc - 1));
	return (0);
}
