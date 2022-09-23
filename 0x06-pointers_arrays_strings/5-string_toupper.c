#include <ctype.h>
#include <stdio.h>

/**
 **string_toupper - puts string to upper letter
 *@*: string pointer
 * Return: 0 success
 */
char *string_toupper(char *s)
{
	int j = 0;

	while (s[j])
	{
		putchar(toupper(s[j]));
		j++;
	}
	return (0);
}
