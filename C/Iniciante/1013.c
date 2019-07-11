#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int A, B, C, M1, M2;
	scanf ("%i %i %i", &A ,&B, &C);
	M1 = (A+B+abs(A-B))/2;
	M2 = (M1+C+abs(M1-C))/2;
	printf ("%i eh o maior\n", M2);

	return 0;
}