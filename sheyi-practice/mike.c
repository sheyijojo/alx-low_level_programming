#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int x = 1;
	int a = x++;

	printf("%d %d\n", x, a);
	
	return (0);
}
