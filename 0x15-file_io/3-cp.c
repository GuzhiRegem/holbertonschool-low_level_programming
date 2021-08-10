#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

void file_to_str(int from, char **buffer, int size);
/**
 *main- cp command
 *@argc: argument count
 *@argv: argument list
 *Return: 0 if no errors
 */
int main(int argc, char **argv)
{
	int from, to, from_size;
	char *buffer;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	from_size = lseek(from, 0, SEEK_END);
	buffer = malloc(from_size);
	to = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (!buffer | (to == -1))
	{
		if (buffer)
			free(buffer);
		if (to != -1)
			close(to);
		close(from);
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit (99);
	}
	file_to_str(from, &buffer, from_size);
	write(to, buffer, from_size);
	free(buffer);
	close(from);
	close(to);
	return (0);
}
void file_to_str(int from, char **buffer, int size)
{
	int repeat, i, len;
	char buf[1025];

	repeat = size / 1024;
        for (i = 0; i <= repeat; i++)
	{
		lseek(from, 1024 * i, SEEK_SET);
		len = read(from, buf, 1024);
		buf[len] = 0;
		strncpy((*buffer) + (i * 1024), buf, len + 1);
	}
}
