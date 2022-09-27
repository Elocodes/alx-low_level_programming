#include <string.h>

/**
 **_strchr - function returns first ocurrence of a specified string character
 *@s: the string word
 *@c: character being looked for
 *
 * Return: returns a pointer value containing the first occurence of the charact
 */
char *_strchr(char *s, char c)
{
	char *firstSeen;

	firstSeen = strchr(s, c);
	return (firstSeen);
}


