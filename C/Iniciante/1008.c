#include <stdio.h>

int main (void)
{
	int N, S; double H, RES;
	scanf ("%i", &N);
	scanf ("%i", &S);
	scanf ("%lf", &H);
	RES = S*H;
	printf ("NUMBER = %i\n", N);
	printf ("SALARY = U$ %.2f\n", RES);

	return 0;
}