#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

void _close(int file);
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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	from_size = lseek(from, 0, SEEK_END);
	buffer = malloc(from_size + 1);
	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	to = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
	{
		free(buffer);
		_close(from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	file_to_str(from, &buffer, from_size);
	write(to, buffer, from_size);
	free(buffer);
	_close(from);
	_close(to);
	return (0);
}
/**
 *_close - close with err
 *@file: file to close
 *Return: nothing
 */
void _close(int file)
{
	int n;

	n = close(file);
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}
/**
 *file_to_str - save file content in a string
 *@from: file to copy
 *@buffer: pointer to buffer
 *@size: size of file
 *Return: nothing
 */
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
