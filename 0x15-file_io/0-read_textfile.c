#iinclude <stdlib.h>
#include "main.h"
/**
*read_textfile -  reads a text file and prints it to the POSIX standard output.
*@filename: Pointer to the name of file.
*@letters: The number of letters to be read and printed.
*Return:  the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(*buffer) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);
	return (w);
}