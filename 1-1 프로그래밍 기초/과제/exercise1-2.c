#include <stdio.h>

void main() {
	int sum = 0;
	int i = 0;
	while (i <= 100) {
		if (i % 2 != 0)
			sum = sum + i;
		i++;
	}
	printf("1부터 %d까지의 홀수의 합은: %d입니다", i-1, sum);
}