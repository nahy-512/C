#include <stdio.h>

void main() {
	int i;
	float liters = 0;
	for (i = 20; i <= 40; i = i + 2) {
		liters = 3.785 * i;
		printf("%d gallon = %.2f liters\n", i, liters);
	}
}