#include <stdlib.h>
#include<stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		(**argv)++;

	printf("%d\n", i - 1);

	return (0);
}