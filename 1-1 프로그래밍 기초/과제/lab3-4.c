#include <stdio.h>

void main() {
	int n;
	printf("The list of all prime numbers from 1 to 100: \n");
	for (n = 1; n <= 100; n++) {
		int i = 1;
		do {
			++i;
			if (n % i == 0)
				break;
		} while (i < (n - 1));
		if ((n != 1) && (n % i != 0) || (n == 2))
			printf("%d ", n);
	} printf("\n");
}