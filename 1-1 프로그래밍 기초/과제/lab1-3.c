#include <stdio.h>

void main() {
	int i = 1, grade;
	int total1 = 0, total2 = 0;
	float count1 = 0, count2 = 0;
	float avg1 = 0, avg2 = 0;
	printf("Enter a grades: ");
	while (i <= 12) {
		scanf_s("%d", &grade);
		i++;
		if (grade >= 10) {
			total1 = total1 + grade;
			count1++;
		}
		else if (grade >= 0 && grade < 10) {
			total2 = total2 + grade;
			count2++;
		}
		else if (grade == -1)
			break;
	}
	avg1 = total1 / count1;
	avg2 = total2 / count2;
	printf("The group grades>=10 total:%d, count: %.0f, average:%f \n", total1, count1, avg1);
	printf("The group grades<10 total:%d, count: %.0f, average:%f \n", total2, count2, avg2);
}