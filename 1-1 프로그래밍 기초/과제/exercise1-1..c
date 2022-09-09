#include <stdio.h>

void main() {
	float radius, area = 0;
	printf("Enter a radius: ");
	scanf_s("%f", &radius);
	area = radius * radius * 3.14;
	printf("%f", area);
}