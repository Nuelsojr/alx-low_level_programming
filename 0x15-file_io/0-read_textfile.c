#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fdsc;
	ssize_t wt;
	ssize_t pe;

	fdsc = open(filename, O_RDONLY);
	if (fdsc == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	pe = read(fdsc, buffer, letters);
	wt = write(STDOUT_FILENO, buffer, pe);

	free(buffer);
	close(fdsc);
	return (wt);
}
