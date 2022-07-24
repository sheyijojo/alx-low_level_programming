#include <stdlib.h>
#include<stdio.h>
/**
 * main- prints the number of arguments passed into it.
 * @agrc:num of cmd arguments.argv is an array of char* that has argc elements
 * @agrv: array that contain prog cmd arguments
 * Return: 0(success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
