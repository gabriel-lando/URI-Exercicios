#include <stdio.h>

int n, a, n100, n50, n20, n10, n5, n2, n1;

int main ()
{
	scanf("%d",&n);
	a=n;
	while (a>=100)
	{
		a=a-100;
		n100=n100+1;
	}
	while (a>=50)
	{
		a=a-50;
		n50=n50+1;
	}
	while (a>=20)
	{
		a=a-20;
		n20=n20+1;
	}
	while (a>=10)
	{
		a=a-10;
		n10=n10+1;
	}
	while (a>=5)
	{
		a=a-5;
		n5=n5+1;
	}
	while (a>=2)
	{
		a=a-2;
		n2=n2+1;
	}
	while (a>=1)
	{
		a=a-100;
		n1=n1+1;
	}
	printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", n, n100, n50, n20, n10, n5, n2, n1);

	return 0;
}