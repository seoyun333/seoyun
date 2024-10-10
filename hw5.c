#include<stdio.h>
void solve(int num);

int main(void) {
	int num;
	printf("Please enter a number: ");
	scanf_s("%d", &num);
	solve(num);
	
	return 0;
}

void solve(int num) {
	if (num == 0 || num == 1) {
		printf("%d", num);
	}
	else
	{
		solve(num / 2);
		printf("%d", num%2 );
	}
}