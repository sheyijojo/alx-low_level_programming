#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string and a new line
 * @str: input string
 * Return: void.
 */
void _puts(char *str);
{
	int count = 0;

	while (count >= 0)
	{

		if (str[count] != '\0')
		{

			_putchar(str[count]);
			count++;
		} else
		{
			count = -1;
			_putchar('\n');
		}
	}


}
