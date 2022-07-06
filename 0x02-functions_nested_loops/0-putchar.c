#include <main.h>
/**
 * main- This is the entry block to the code
 * Description: prints _putchar and a newline
 * Return: returns 0 (success!)
 */

int main(void)

{

		char c[8] = "_putchar";



		int i = 0;


		while (i < 8)

		{

			_putchar(c[i]);
			i++;								   }

		_putchar('\n');

		return (0);

}


