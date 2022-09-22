#include <string.h>

/**
 *_strcmp - function that compares two strings
 *@s1: first string
 *@s2: string that compares with the first
 * Return: returns the difference of their ascii codes, s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	int compare;

	compare = strcmp(s1, s2);
	return (compare);
}
