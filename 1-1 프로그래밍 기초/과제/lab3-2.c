#include <stdio.h>

void main() {
	int n1, n2, n3;
	int sum = 0, product = 0;
	float avg;
	int mini, max;
	printf("Input three different integers: ");
	scanf_s("%d%d%d", &n1, &n2, &n3); //read three integers(n1, n2, n3)
	sum = n1 + n2 + n3;
	avg = (float)sum / 3;

	//max�� n1�� ���
	if (n1 > n2 && n1 > n3) {
		max = n1;
		if (n2 < n3)
			mini = n2;
		else
			mini = n3;
	}
	//max�� n2�� ���
	else if (n2 > n3) {
		max = n2;
		if (n1 < n3)
			mini = n1;
		else
			mini = n3;
	}
	//max�� n3�� ���
	else {
		max = n3;
		if (n1 < n2)
			mini = n1;
		else
			mini = n2;
	}
	//��� ���
	printf("Sum is %d\n", sum);
	printf("Average is %.2f\n", avg);
	printf("Product is %d\n", n1 * n2 * n3);
	printf("Smallest is %d\n", mini);
	printf("Largest is %d\n", max);
}