#inlcude "holberton.h"

/**
 * main - a function that prints 10 times the alphabet, in lowercase
 *
 * Return - x10 (Success)
 */
int(void)
{
	int n, co;

	co = 0;

	while (co < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		co++;
		_putchar('\n');
	}
}

