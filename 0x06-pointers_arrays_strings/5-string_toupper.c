#include <ctype.h>
#include <stdio.h>

/**
 **string_toupper - puts string to upper letter
 *@s: string pointer
 * Return: 0 success
 */
char *string_toupper(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		if (s[j] >= 'a' && s[j] <= 'z')
		{
			s[j] = s[j] - 32;
		}
		j++;
	}
	return (s);
}
