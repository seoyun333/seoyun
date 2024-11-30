#include<stdio.h>
#include<string.h>
struct cities {
	char name[20];
	char country[20];
	int population;
};

void ClearLineFromReadBuffer(void) {
	while (getchar() != '\n');
}

void RemoveNewline(char* str) {
	int len = strlen(str);
	str[len - 1] = '\0';
}

int main(void) {
	struct cities arr[3];

	for (int i = 0; i < 3; i++) {
		printf("Name: ");
		fgets(arr[i].name, sizeof(arr[i].name), stdin);
		RemoveNewline(arr[i].name);

		printf("Country: ");
		fgets(arr[i].country, sizeof(arr[i].country), stdin);
		RemoveNewline(arr[i].country);

		printf("Population: ");
		scanf_s("%d", &arr[i].population);
		ClearLineFromReadBuffer();
	}
	for (int i = 0; i < 3;i++) {
		printf("%d. %s in %s with a population of %d people\n", i + 1, arr[i].name, arr[i].country, arr[i].population);
	}
}