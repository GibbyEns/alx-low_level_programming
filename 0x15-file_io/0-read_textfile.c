#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads text file print to STDOUT.
 * @filename: The text file being read
 * @letters: The number of letters to be read
 * Return: Success, w- actual number of bytes read and printed
 *        0. If not, function or filename error is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

