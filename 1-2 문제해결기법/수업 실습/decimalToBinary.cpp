#include <stdio.h>

void decimalToBinary(int value) {
    int arr[10];
    int count = 0;
    while (value != 0) {
        arr[count] = value % 2;
        value /= 2;
        count++;
    }
    printf("\nBinary: ");
    for (int i = count - 1; i >= 0; i--) {
        printf("%d", arr[i]);
    }
}
void decimalToOctor(int value) {
    int arr[10];
    int count = 0;
    while (value != 0) {
        arr[count] = value % 8;
        value /= 8;
        count++;
    }
    printf("\nOctor: ");
    for (int i = count - 1; i >= 0; i--) {
        printf("%d", arr[i]);
    }
}
int main() {
    int num;
    printf("Enter the integer(10): ");
    scanf("%d", &num);

    decimalToBinary(num);
    decimalToOctor(num);

    return 0;
}