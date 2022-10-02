#include <string.h>

/**
 *_strstr - function searches for entire substring
 *@haystack: contains the string to be searched in
 *@needle: contains the substr that is being looked for
 *
 * Return: returns entire substr of haystack that matches wth needle
 */
char *_strstr(char *haystack, char *needle)
{
	char *findSubstring;

	findSubstring = strstr(haystack, needle);
	return (findSubstring);
}
