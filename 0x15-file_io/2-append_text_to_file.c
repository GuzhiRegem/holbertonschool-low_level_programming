#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 *append_text_to_file - a
 *@filename: a
 *@text_content: a
 *Return: a
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, chars = 0, _chars = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
