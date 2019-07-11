#include <stdio.h>
#define PI 3.14159

int main (void)
{
	double R, V;
	scanf ("%lf", &R);
	V = (4.0/3)*PI*R*R*R;
	printf ("VOLUME = %.3f\n", V);

	return 0;
}