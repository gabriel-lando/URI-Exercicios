#include <stdio.h>

int main (void)
{
	char N;
	double S, B, TOTAL;
	scanf ("%s", &N);
	scanf ("%lf", &S);
	scanf ("%lf", &B);
	TOTAL = B*0.15+S;
	printf ("TOTAL = R$ %.2f\n", TOTAL);

	return 0;
}
