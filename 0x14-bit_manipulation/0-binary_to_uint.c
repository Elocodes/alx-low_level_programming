#include "main.h"

/**
 * power - function calculates x to the power of y
 *@x: base number
 *@y: exponent
 *
 * Return: return the power
 */
int power(int x, int y)
{
	int result, i;

	result = 1;

	if (y == 0)
	{
		result = 1;
	}
	for (i = 0; i < y; i++)
	{
		result *= x;
	}
	return (result);
}

/**
 * binary_to_uint - function converts a binary to its hexadecimal
 *@b: the binary passed as string
 *
 * Return: returns the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int store = 0;
	int count = 0;
	int to_power;

	if (b == NULL)
		return (0);
	for (j = (strlen(b) - 1); j >= 0; j--)
	{
		if (b[j] == '1')
		{
			to_power = power(2, count);
			store += 1 * to_power;
			count++;
		}
		else if (b[j] == '0')
		{
			to_power = power(2, count);
			store += (0 * to_power);
			count++;
		}
		else
		{
			return (0);
		}
	}
	return (store);
}
