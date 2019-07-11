#include <stdio.h>

int d, m, a;

int main()
{
	scanf("%d", &d);

	while (d>=365)
	{
		d=d-365;
		a=a+1;
	}
	while (d>=30)
	{
		d=d-30;
		m=m+1;
	}

	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", a, m, d);

	return 0;
}