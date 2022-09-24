#include <ctype.h>
#include <stdio.h>

/**
 **cap_string - capitalizes first letter of words
 *@str: string pointer
 * Return: capitalized words string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
			continue;
		}
		if (str[i] == ' ' || str[i] == '\n' || str[i] == ('.' && ' ') || str[i] == '\t' || str[i] == ('!' && ' ') || str[i] == 44 || str[i] == 39 || str[i] == 46 || str[i] == 33 || str[i] == 63 || str[i] == 34 || str[i] == 40 || str[i] == 41 || str[i] == 123 || str[i] == 125 || str[i] == 92)
		{
			++i;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
			continue;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] + 32;
			}
		}
	}
	return (str);
}
