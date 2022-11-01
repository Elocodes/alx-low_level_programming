#include "main.h"

/**
 * main - function copies content from one file to another
 *@argc: argument count
 *@argv: argument vector; contains the files
 *
 * Return: returns success on execution
 */
int main(int argc, char *argv[])
{
	int fd, fd2;
	int c, cc, r;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	r = read(fd, buf, 1024);
	c = close(fd);
	if (c < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	write(fd2, buf, r);
	cc = close(fd2);
	if (cc < 0)
	{
		dprintf(STDERR_FILENO, "Error: Cant't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
