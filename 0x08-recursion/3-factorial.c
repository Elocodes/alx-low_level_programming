/**
 * factorial - a function that uses recursion to return factorial
 *@n: integer
 *
 * Return: factorial of a number n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
