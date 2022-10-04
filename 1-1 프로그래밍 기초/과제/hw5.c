#include <stdio.h>

int myatoi(char[], int N); /*function prototype*/

void main() {
	char string[20]; int N = 0;
	gets(string);

	N = myatoi(string, N); /*function call*/
	printf("%d", N);
}

int myatoi(char string[], int N) /*function definition*/
{
	int k = 0, i = 0;
	if (string[0] == '-' || string[0] == '+') { // handle sign(+,-)
		i = 1;
		if (string[0] == '-')
			k = 1;
	}
	while (string[i] != '\0')
	{
		if (string[i] >= 'A' && string[i] <= 'z')
			string[i] = string[i+1];
		else
		{
			string[i] -= 48;
			N *= 10;
			N += string[i];
		}
		i++;
	}
	if (k == 1) {
		N *= (-1) ;
	}
	return N;
}