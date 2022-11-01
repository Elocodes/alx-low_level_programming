#include "main.h"

/**
 * read_textfile - function reads a textfile and prints it to
 * stdout
 *@filename: the file name
 *@letters: number of bytes to be printed
 *
 * Return: returns the number of bytes printed
 *
 * Description - fd opens the file, r reads it and stores
 * the number of bytes requested, in the memory space buf,
 * write prints the number of bytes of charcters in the
 * buf to the stdout
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	r = read(fd, buf, letters);
	if (r < 0)
	{
		free(buf);
		return (0);
	}
	buf[r] = '\0';

	w = write(STDOUT_FILENO, buf, letters);
	if (w < 0)
	{
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);
	return (w);
}
