#include <stdio.h>
#include <math.h>

double SD(int* ptr) {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += ptr[i];
	}
	double M = (double)sum / 5;

	double 편차제곱 = 0, 편차제곱의합 = 0;
	for (int i = 0; i < 5; i++) {
		편차제곱 = pow(ptr[i] - M, 2);
		편차제곱의합 += 편차제곱;
	}
	double 표준편차 = sqrt(편차제곱의합 / 5);
	return 표준편차;
}

int main(void) {
	int arr[5];
	printf("Enter 5 real numbers: ");
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &arr[i]);
	}
	double result = SD(arr);
	printf("Standard Deviation = %.3f\n", result);
	return 0;
}
