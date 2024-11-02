#include <stdio.h>

int main(void) {
    int arr[5];
    int odd[5] = { 0 }, even[5] = { 0 };
    int odd_index = 0, even_index = 0;

    printf("Please input five integers: ");
    for (int i = 0; i < 5; i++) {
        scanf_s("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            even[even_index++] = arr[i];
        }
        else {
            odd[odd_index++] = arr[i];
        }
    }

    printf("Odd numbers: ");
    for (int i = 0; i < odd_index; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    printf("Even numbers: ");
    for (int i = 0; i < even_index; i++) {
        printf("%d ", even[i]);
    }

    return 0;
}
