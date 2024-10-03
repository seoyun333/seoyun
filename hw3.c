#include<stdio.h>

int main(void)
{
	int n = 8;
	for (int x = 1; x <= (n / 2 + 1); x++) {
		for (int y = n / 2; y >= x; y--) {
			printf(" ");
		}
		for (int z = 0; z < x * 2 - 1; z++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}