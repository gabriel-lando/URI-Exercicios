#include <stdio.h>

int main (void)
{
	int X; double Y;
	scanf ("%i", &X);
	scanf ("%lf", &Y);
	printf ("%.3f km/l\n", X/Y);

	return 0;
}