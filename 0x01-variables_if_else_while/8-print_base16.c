#include <stdio.h>


/**
 * main- This is the entry block to the code
 * Description: prints hexadecimals in lower case wt a new linw
 * Return: returns 0 (success!)
 * @void: no arguments
 */



int main(void)
{
	int a;
	char b;

	for (a = 0; a < 10; a++)
	putchar(a + '0');
	for (b = 'a'; b <= 'f'; b++)
	putchar(b);
	putchar('\n');
	return (0);
}
