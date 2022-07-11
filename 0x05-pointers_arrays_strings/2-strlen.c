#include "main.h"
#include <string.h>
/**
 * _strlen - returns the length of d string
 * @s: input string
 * @n: input int
 * Return: void
 */
int _strlen(char *s)
{
	int a = 0;

	while (*(s + a))
		a++;

	return (a);
}

