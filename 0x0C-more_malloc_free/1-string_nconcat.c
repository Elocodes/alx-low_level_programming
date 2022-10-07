#include <stdlib.h>
#include <string.h>

/**
 **string_nconcat - concates n bytes of string s2 to s1
 *@s1: string
 *@s2: string 2
 *@n: number of byte
 *
 * Return: returns pointer to memory that contains concat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		n = strlen(s2);
	mem = malloc(sizeof(mem) * strlen(s1) + n + 1);
	if (mem == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		mem[i] = s1[i];
	for (j = 0; j < n; j++)
		mem[i + j] = s2[j];
	mem[i + j] = '\0';
	return (mem);
}
