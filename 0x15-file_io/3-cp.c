#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

void _close(int file);
void file_to_str(int from, int to, char **files);
/**
 *main- cp command
 *@argc: argument count
 *@argv: argument list
 *Return: 0 if no errors
 */
int main(int argc, char **argv)
{
	int from, to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	to = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
	{
		_close(from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	file_to_str(from, to, argv);
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
 *@to: pointer to buffer
 *@files: size of file
 *Return: nothing
 */
void file_to_str(int from, int to, char **files)
{
	int len = 1024, _len;
	char buf[1024];

	while (len == 1024)
	{
		len = read(from, buf, 1024);
		if (len == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", files[1]);
			_close(from);
			_close(to);
			exit(98);
		}
		_len = write(to, buf, len);
		if (_len == -1)
		{
			_close(from);
			_close(to);
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", files[2]);
			exit(99);
		}
	}
}
