#include <stdio.h>

void main() {
	int number;
	int num1, num2, num3, num4, num5;
	printf("Enter five-digit number: ");
	scanf_s("%d", &number);
	num1 = number / 10000;
	num2 = (number % 10000) / 1000;
	num3 = (number % 1000) / 100;
	num4 = (number % 100) / 10;
	num5 = number % 10;
	printf("%d   %d   %d   %d   %d", num1, num2, num3, num4, num5);
}