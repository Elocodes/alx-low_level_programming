#include <string.h>
#include <stdio.h>

/**
 * *_strcpy - copies str
 *@src: pointer
 *@dest: pointer
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int length;

	for (length = 0; src[length] != '\0'; length++)
	{
	}

	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
