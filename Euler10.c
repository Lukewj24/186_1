#include <stdio.h>
#include <math.h>

int isPrime(int num) {
	int i;
	for (i = 2; i <= sqrt(num); i++) {
		if (num%i==0) {
			return 0;
		}
	}
	return 1;
}

void main() {
	int i;
	long long sum = 0;
	
	for (i=2; i<2000000; i++) {
		if (isPrime(i) == 1) {
			sum +=i;
		}
	}
	printf("sum: %lld\n", sum);
}