#include <stdio.h>

int n100, n50, n20, n10, n5, n2, m100, m50, m25, m10, m5, m1, n1, n;

int main (){	

	scanf("%d.%d", &n, &n1);

	n100 = n/100;
	n = n-n100*100;

	n50 = n/50;
	n = n-n50*50;

	n20 = n/20;
	n = n-n20*20;

	n10 = n/10;
	n = n-n10*10;

	n5 = n/5;
	n = n-n5*5;

	n2 = n/2;
	n = n-n2*2;


	m100 = n/1;
	n = n-m100*1;

	m50 = n1/50;
	n1 = n1-m50*50;

	m25 = n1/25;
	n1 = n1-m25*25;

	m10 = n1/10;
	n1 = n1-m10*10;

	m5 = n1/05;
	n1 = n1-m5*05;

	m1 = n1/01;
	n1 = n1-m1*01;

	printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n", n100, n50, n20, n10, n5, n2);
	printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", m100, m50, m25, m10, m5, m1);

	return 0;
}