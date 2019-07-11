#include <stdio.h>

int n, h, m, s;

int main ()
{
	scanf("%d", &n);
	s=n;

	while (s>=60)
	{
		s=s-60;
		m=m+1;
	}
	while (m>=60)
	{
		m=m-60;
		h=h+1;
	}

	printf("%d:%d:%d\n", h, m, s);

	return 0;
} 