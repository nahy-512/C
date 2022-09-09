#include <stdio.h>

void main() {
	char line1[81], line2[81];
	int i = 0, j = 0;

	printf("Type a first string: \n");
	gets(line1);
	printf("Type a second string:\n");
	gets(line2);

	/*count the number of characters in line1[]*/
	while (line1[i]) {
		i++;
	}

	/*append the line2 to the end of the line1*/
	while (line2[j] != '\0') {
		line1[i + j] = line2[j];
		j++;
	}
	line1[i + j] = '\0';
	puts(line1);
}