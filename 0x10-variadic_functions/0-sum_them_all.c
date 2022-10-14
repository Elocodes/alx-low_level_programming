#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - function sums a list of numbers passed in the variadic
 * function (function that lets you use elipses to represent the rest of the
 * arguments instead of writing them all out)
 *@n: the first number
 *
 * Return: returns the sum of the numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int add = 0;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(numbers, n);
		for (i = 0; i < n; i++)
		{
			add += va_arg(numbers, int);
		}
		va_end(numbers);
	}
	return (add);
}
