#include <stdlib.h>
#include <string.h>
/**
 *_strdup - returns a pointer to a newly allocated space in memory.
 *@str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *strholder;
	unsigned int j;

	if (str == NULL)
	{
		return (NULL);
	}
	strholder = (char *)malloc(sizeof(char) * strlen(str));
	if (strholder == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= strlen(str); j++)
	{
		strholder[j] = str[j];
	}
	return (strholder);
	free(strholder);
}
