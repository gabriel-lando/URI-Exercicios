#include <stdio.h>

int main(){
	int a, i, fib0=0, fib1=1, fib2;
	scanf("%i", &a);
	if(a> 0 && a<46){
		if(a==1)
			printf("0");
		else{
			printf("0");
			for (i = 1; i < a; ++i){
				fib2= fib0 + fib1;
				fib1= fib0;
				fib0= fib2;
				printf(" %d", fib0);
			}
		}

	}
	printf("\n");
	return 0;
}
