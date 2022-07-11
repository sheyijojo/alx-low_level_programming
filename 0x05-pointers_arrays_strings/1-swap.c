#include <main.h>
/**
 * swap_int - swaps the value of two ints
 * @a: ist int
 * @b: 2nd int
 * Return: void
 */
void swap_int(int *a, int *b);
{
	int c = *a;
	*a = *b;
	*b = c;
}
