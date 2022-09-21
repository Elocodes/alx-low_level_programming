#include <string.h>
#include <stdio.h>

/**
 * *_strcpy - copies str 
 * @str: pointer
 * @dest: pointer
 *
 * Return: the pointer to dest 
 */
char *_strcpy(char *dest, char *src)
{
	int i; length;

	for (length = 0; src[length] != '\0'; length++)
	{
	}

	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
