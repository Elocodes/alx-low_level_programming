#include "main.h"

/**
 * append_text_to_file - function appends text to file
 *@filename: the file name
 *@text_content: text to be written
 *
 * Return: returns 1 on success, -1 on failure
 *
 * Description - fd opens the file, it is not created if it does not
 * exist. write writes the text content into the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		if (text_content != NULL)
			write(fd, text_content, strlen(text_content));
	}
	else
	{
		return (-1);
	}
	close(fd);
	return (1);
}
