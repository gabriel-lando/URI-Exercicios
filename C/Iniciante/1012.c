#include <stdio.h>
#define PI 3.14159

int main (void)
{
	double A, B, C;
	scanf ("%lf %lf %lf", &A, &B, &C);
	printf ("TRIANGULO: %.3f\n", (A*C/2));
	printf ("CIRCULO: %.3f\n", (PI*C*C));
	printf ("TRAPEZIO: %.3f\n", ((A+B)*C/2));
	printf ("QUADRADO: %.3f\n", (B*B));
	printf ("RETANGULO: %.3f\n", (A*B));

	return 0;
}