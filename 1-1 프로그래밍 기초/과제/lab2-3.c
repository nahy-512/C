#include <stdio.h>

void main() {
	float height, weight;
	float BMI;
	printf("Enter your height(m): ");
	scanf_s("%f", &height);
	printf("Enter your weight(kg): ");
	scanf_s("%f", &weight);
	BMI = weight / (height * height);
	printf("\nBMI = %f\n", BMI);
	printf("\nBMI VALUES\n");
	printf("Underweight: less than 18.5\n");
	printf("Normal:      between 18.5 and 24.9\n");
	printf("Overweight:  between 25 and 29.9\n");
	printf("Obese:       30 or greater\n");
}