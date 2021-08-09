#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 *create_file - a
 *@filename: a
 *@text_content: a
 *Return: a
 */
int create_file(const char *filename, char *text_content)
{
	int fd, chars, _chars;

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 00600);
	if ((fd == -1) | !filename)
		return (-1);
	chars = strlen(text_content);
	_chars = write(fd, text_content, chars);
	if (_chars != chars)
		return (-1);
	close(fd);
	return (1);
}
