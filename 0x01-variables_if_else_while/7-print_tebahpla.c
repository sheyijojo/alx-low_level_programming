#include <stdio.h>
/**
 *main- Entry point
 *Description- prints d lowercase alphabt in reverse fflw by a nwln
 *Return: always 0(success)
 *@void: no argument
 */


int main(void)
{

	char abc;

	for (abc = 'z'; abc >= 'a'; abc--)
		putchar(abc);
	putchar('\n');
	return (0);
}
