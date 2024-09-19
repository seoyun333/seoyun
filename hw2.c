#include<stdio.h>
int main(void)
{
	double A;
	printf("Please enter kilometers: ");
	scanf_s("%lf", &A);
	printf("%.1f km is equal to %.1f miles.",A,A/1.609);

	return 0;
}