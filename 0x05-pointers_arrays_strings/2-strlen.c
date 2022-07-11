#include "main.h"
#include <string.h>
/**
 * _strlen - returns the length of d string
 * @s: input string
 * Return: length of str
 */
int _strlen(char *s)
{
	int a = 0;

	while (*(s + a))
		a++;

	return (a);
}

