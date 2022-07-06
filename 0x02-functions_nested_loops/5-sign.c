#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: argument to be checked
 * Return: 1 for positive num, -1 for negative num and 0 for zero.
 */
int print_sign(int n)
{

	if (n > 0)

	{
		_putchar('+');

		return (1);
	}

	else if (n == 0)

	{
		_putchar('0');

		return (0);
	}

	else

	{
		_putchar('-');
		return (-1);

	}
}
