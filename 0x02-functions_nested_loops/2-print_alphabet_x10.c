/**
 * print_alphabet_x10 - prints alphabets in lower case 10 times
 *
 * Return: Always (0) Success
 */
void print_alphabet_x10(void)
{
	int j = 0;

	while (j < 10)
	{
		char i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
	}
	_putchar('\n');
}
