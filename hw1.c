#include <stdio.h>

int main(void)
{
	int num1, num2;
	printf("input two integers: ");
	scanf_s("%d %d", &num1, &num2);

	printf("%d & %d = %d \n", num1, num2, num1 & num2);
	printf("%d | %d = %d \n", num1, num2, num1 | num2);
	printf("%d ^ %d = %d \n", num1, num2, num1 ^ num2);
	return 0;
}  