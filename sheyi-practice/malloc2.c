#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;

	printf("Enter size of array\n");
	scanf("%d", &n);

	int *A = (int*)malloc(n*sizeof(int)); /*dynamically allocate array */
	for(int i = 0; i<n; i++)

	{
		A[i] = i + 1;
	}
	for(int i = 0; i<n; i++)
	{
		printf("%d", A[i]);
	}
}
