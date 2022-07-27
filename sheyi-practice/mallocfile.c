#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int n;
	char *ar; /*pointer ar that points to the data type char */

	n = 5;
	ar = malloc(n * sizeof(char));/*sizeof retuns the size of vairable in bytes, n is no of elements. so give me memory size of 5 chars */
	ar[0] = 'C';
	ar[1] = 'o';
	ar[2] = 'o';
	ar[3] = 'l';
	ar[4] = '\0';
	printf("%s\n", ar); /* prints cool\n */
	return (0);
}
