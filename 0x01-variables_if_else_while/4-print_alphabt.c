#include <stdio.h>
/**
 * main- This is the entry block to the code
 * Description: prints lower case and excludes char q and e
 * Return: returns 0 (success!)
 * @void: no arguments
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp != 'q' && alp != 'e')
			putchar(alp);
	}
	putchar('\n');
	return (0);
}
