/**
 * swap_int- swaps two numbers when called
 *@a: the first integer to be swapped
 *@b: second integer to be swapped
 *
 * return is exempted because function returns nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
