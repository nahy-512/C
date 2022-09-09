#include <stdio.h>

void main() {
	int num; //number input by user
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0;
	printf("Enter a five-digit number: ");
	scanf_s("%d", &num); //read integer

	n1 = num / 10000;
	n2 = (num % 10000) / 1000;
	n3 = (num % 1000) / 100;
	n4 = (num % 100) / 10;
	n5 = num % 10;

	if (n1 == n5 && n2 == n4)
		printf("\n%d is a palindrome\n", num);
	else
		printf("\n%d is not a palindrome\n", num);
}