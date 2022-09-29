/**
 *_pow_recursion - a function that uses recursion to multiply
 * powers of a number. based on stacking analogy, the recursion
 * here open up the powers down to zero, the multiplication is
 * done top down, and value returned at the foundation
 *@x: main number
 *@y: powers of x
 *
 * Return: factorial of a number n
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
