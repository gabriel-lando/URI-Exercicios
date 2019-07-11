#include <stdio.h>
#define PI 3.14159

int main (void)
{
    double raio;
    scanf("%lf", &raio);
    printf("A=%.4f\n", raio*raio*PI);

    return 0;
}
