#include <stdio.h>
#include <math.h>

int main (void)
{
	double X1, Y1, X2, Y2, RES;
	scanf ("%lf %lf", &X1, &Y1);
	scanf ("%lf %lf", &X2, &Y2);
	RES = sqrt((X2-X1)*(X2-X1)+(Y2-Y1)*(Y2-Y1));
	printf ("%.4f\n", RES);

	return 0;
}