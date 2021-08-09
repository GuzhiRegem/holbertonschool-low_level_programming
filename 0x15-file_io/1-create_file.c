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

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		chars = strlen(text_content);
		_chars = write(fd, text_content, chars);
	}
	close(fd);
	if (_chars != chars)
		return (-1);
	return (1);
}
