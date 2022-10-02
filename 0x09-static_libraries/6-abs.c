#include "main.h"

/**
 *_abs - returns absolute value of an int
 *@n: int containing absolute value
 *
 * Return: Always 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
