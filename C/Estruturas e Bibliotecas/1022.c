#include <stdio.h>

void mdc(int x, int y){
	int a, n, d;
	n = x;
	d = y;
	for (a = 0; a < 10; ++a){

		if (x % 2 == 0 && y % 2 == 0){
			x = x/2;
			y = y/2;
		}

		if (x % 3 == 0 && y % 3 == 0){
			x = x/3;
			y = y/3;
		}

		if (x % 5 == 0 && y % 5 == 0){
			x = x/5;
			y = y/5;
		}

		if (x % 7 == 0 && y % 7 == 0){
			x = x/7;
			y = y/7;
		}

		if (x % 11 == 0 && y % 11 == 0){
			x = x/11;
			y = y/11;
		}

		if (x % 13 == 0 && y % 13 == 0){
			x = x/13;
			y = y/13;
		}
	}
	
	printf("%d/%d = %d/%d\n", n, d, x, y);
	
}

int main(){
	int i, n;
	int n1, d1, n2 , d2;
	char x, y, z;
	 
	scanf("%i", &n);

	for (i = 1; i <= n; ++i)
	{
		scanf("%i %c %i %c %i %c %i", &n1, &x, &d1, &y, &n2, &z, &d2);

		if (y == '+')
			mdc((n1*d2 + n2*d1), (d1*d2));

		else if (y == '-')
			mdc((n1*d2 - n2*d1), (d1*d2));

		else if (y == '/')
			mdc((n1*d2), (n2*d1));

		else if (y == '*')
			mdc((n1*n2), (d1*d2));
		
	}
	return 0;
}