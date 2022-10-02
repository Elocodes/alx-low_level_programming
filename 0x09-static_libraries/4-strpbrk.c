#include <string.h>

/**
 *_strpbrk - function searches for first matching words
 *@s: the string word
 *@accept: contains match word
 *
 * Return: returns first character of s that matches wth accept
 */
char *_strpbrk(char *s, char *accept)
{
	char *firstMatch;

	firstMatch = strpbrk(s, accept);
	return (firstMatch);
}
