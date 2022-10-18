#include "holberton.h"

/**
 * main - a function that prints the alphabet, in lowercase
 *
 * Return - 0 (Success)
 */
int(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar ('\n');
}
