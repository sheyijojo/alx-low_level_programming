#include <stdio.h>
/**
 * main- This is the entry block to the code
 * Description: program should run diff combinations of a two digit number
 * Return: returns 0 (success!)
 * @void: no arguments
 */
int main(void)
{

	int a = '0';
	int b;

	while (a <= '9')
	{
	b = a + 1;
	while (b <= '9')

	{
	putchar(a);
	putchar(b);

	if (a == '8' && b == '9')

	putchar('\n');

	}
	else
	putchar(',');
	putchar(' ');
	}

	b++;
	}
	a++;
	}
	return (0);



}
