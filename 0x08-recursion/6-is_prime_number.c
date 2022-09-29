/**
 * is_prime_number - a function that returns a prime number
 *@n: integer number
 *
 * Return: 1 for even number and 0 if not
 */
int is_prime_number(int n)
{
	if ((n > 1) && (n / 1 == n) && (n % 3 == 2))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
