#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @fn: text file being read
 * @letrs: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *fn, size_t letrs)
{
	char *bf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(fn, O_RDONLY);
	if (fd == -1)
		return (0);
	bf = malloc(sizeof(char) * letrs);
	t = read(fd, bf, letrs);
	w = write(STDOUT_FILENO, bf, t);

	free(bf);
	close(fd);
	return (w);
}

