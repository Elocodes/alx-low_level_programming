#include "main.h"

/**
 * create_file - function creates a textfile and writes into it
 *@filename: the file name
 *@text_content: text to be written
 *
 * Return: returns 1 on success, -1 on failure
 *
 * Description - fd opens the file, it is created if it does not
 * exist. write writes the text content into the file
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		if (fd == -1)
			return (-1);
		write(fd, text_content, strlen(text_content));
	}
	else
	{
		fd = open(filename, O_CREAT | O_WRONLY, 0600);
		if (fd == -1)
			return (-1);
	}
	return (1);
}
