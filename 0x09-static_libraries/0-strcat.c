#include <string.h>

/**
 * *_strcat - function concates two strings
 *@dest: first string
 *@src: string to be appended unto the first
 *
 * Return: returns a pointer to the concated string
 */
char *_strcat(char *dest, char *src)
{
	char *concat;

	concat = strcat(dest, src);
	return (concat);
}
