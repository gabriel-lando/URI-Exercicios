#include <stdio.h>

int main (void)
{
	int C1, C2, N1, N2; double V1, V2, TOTAL;
	scanf ("%i %i %lf", &C1, &N1, &V1);
	scanf ("%i %i %lf", &C2, &N2, &V2);
	TOTAL = N1*V1+N2*V2;
	printf ("VALOR A PAGAR: R$ %.2f\n", TOTAL);

	return 0;
}