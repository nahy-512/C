#include <stdio.h>

void main() {
	int i, j;
	int n = 5; //the size of pyramid
	for (i = 1; i <= n; i++) {
			for (j = i; j >= 1; j--) {
				printf("%d ", j);
			}printf("\n");
	}
}