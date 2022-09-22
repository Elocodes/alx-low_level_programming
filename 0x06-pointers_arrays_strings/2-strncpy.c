#include <string.h>

/**
 * *_strncpy - function that replaces strings
 *@dest: first string
 *@src: string that replaces the first
 *@n: number of byte or character length of src that replaces the first
 *
 * Return: returns a pointer to the replaced string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *cutNreplace;

	cutNreplace = strncpy(dest, src, n);
	return (cutNreplace);
}
