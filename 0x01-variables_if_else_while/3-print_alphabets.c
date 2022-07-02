#include <stdio.h>
/**
 * main -This is the entry block to the code
 * Description: prints lower and higher case alphabets
 * Return: returns 0(success)
 * @void: no argument here
 */
int main(void)
{
	char alp;
	char Alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);
	for (Alp = 'A'; Alp <= 'Z'; Alp++)
		putchar(Alp);
	putchar('\n');
	return (0);
}
