#include <stdio.h>

int t, v;
double d, l;

int main()
{
	scanf("%d", &t);
	scanf("%d", &v);

	d=t*v;
	l= d/12;
	printf("%.3f\n", l);
	return 0;
}