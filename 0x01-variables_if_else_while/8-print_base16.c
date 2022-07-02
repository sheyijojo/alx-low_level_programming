#include <stdio.h>
/**
 * main- entry point
 * Description: prints all nums of base16 fflwd by nwline
 * Return: Always 0 (success)
 * @void: no argument
 */
int main(void)
{
	int a;
	char b;

	for (a = 0; a <= 9; a++)
	putchar(a + '0' );
	for (b = 'a'; b <= 'f'; b++)
	putchar(b);
	putchar('\n');
	return (0);

}
