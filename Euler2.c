#include <stdio.h>

void main() {
	int fib0 = 3;
	int fib1 = 2;
	int fib2 = 1;
	int sum = 2;
	int temp = 0;
	
	while (fib0<=4000000) {
		if (fib0%2==0) {
			sum += fib0;
		}
		
		temp = fib0;
		fib0 = fib0 + fib1;
		fib1 = temp;
		fib2 = temp - fib1;
	}
	printf("%d\n", sum);
}