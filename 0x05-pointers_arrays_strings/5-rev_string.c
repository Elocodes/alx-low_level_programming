#include <string.h>
#include <stdio.h>

/**
 * rev_string - swaps two strings and prints their output backwards when called
 *@s: the string input
 *
 * return is exempted because function returns nothing
 */
void rev_string(char *s)
{
	char str_1, str_2;
	int j, i;

	j = strlen(s) - 1;
	i = 0;

	while (j > i)
	{
		str_1 = s[i];
		str_2 = s[j];
		s[i] = str_2;
		s[j] = str_1;
		j--;
		i++;
	}
}
