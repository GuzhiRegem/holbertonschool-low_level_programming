#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

/**
 *read_textfile - a
 *@filename: a
 *@letters: a
 *Return: a
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t out;
	char *buf;
	ssize_t printed;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY | O_CREAT);
	if (fd == -1)
		return (0);
	buf = malloc(letters);
	if (!buf)
		return (0);
	out = read(fd, buf, letters);
	close(fd);
	printed = write(1, buf, out);
	free(buf);
	if (printed != out)
		return (0);
	return (out);
}
