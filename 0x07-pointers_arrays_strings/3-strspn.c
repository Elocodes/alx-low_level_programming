#include <string.h>

/**
 *_strspn - function searches for length of matching words
 *@s: the string word
 *@accept: the match word
 *
 * Return: returns len of s that matches wth accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int matchingLen;

	matchingLen = strspn(s, accept);
	return (matchingLen);
}
