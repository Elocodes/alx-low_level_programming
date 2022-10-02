#include <string.h>

/**
 * *_strncat - function concates two strings
 *@dest: first string
 *@src: string to be appended unto the first
 *@n: number of byte or character length of src to be appended to dest
 *
 * Return: returns a pointer to the concated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *cutNcat;

	cutNcat = strncat(dest, src, n);
	return (cutNcat);
}
