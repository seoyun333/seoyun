#include<stdio.h>

int main(void) {
	int n, i = 0;
	int is_p = 1;
	printf("Please enter a number: ");
	scanf_s("%d", &n);

	if (n == 1) {
		printf("It is not a prime number.");
	}
	else if (n == 2 || n == 3) {
		printf("It is a prime number.");
	}
	else {
		for (i = 2; i < n; i++) {
			if (n % i == 0) {
				is_p = 0;
				break;
			}
		}
		if (is_p) {
			printf("It is a prime number.");
		}
		else {
			printf("It is not a prime number.");
		}
	}
	return 0;
}