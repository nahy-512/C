//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int factorial(int n) {
//	if (n == 0) 
//		return 1;
//	else {
//		return (n * factorial(n - 1));
//	}
//}
//void main() {
//	int num = 0;
//	printf("Type a number for factorial:");
//	scanf("%d", &num);
//	printf("%d! = %d\n", num, factorial(num));
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int factorial(int n) {
////	printf("%d\n", n); // (1)
//	if (n == 0) {
//		printf("%d\n", n);
//		return 1;
//	}
//	else {
//		int result = (n * factorial(n - 1));
//		printf("%d\n", n);
//		return result;
//	}
//}
//void main() {
//	int num = 0;
//	printf("Type a number for factorial:");
//	scanf("%d", &num);
//	printf("%d! = %d\n", num, factorial(num));
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int fib(int n) {
//	// termination condition
//	if (n == 0 || n == 1) return n;
//	// general case
//	return (fib(n - 1) + fib(n - 2));
//}
//
//void main() {
//	int num = 0;
//	printf("Type a number for fib:");
//	scanf("%d", &num);
//	printf("Fib(%d) = %d\n", num, fib(num));
//}

//void wrt_backward() {
//	int c;
//	if ((c = getchar()) != '\n')
//		wrt_backward();
//	putchar(c);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//// abc\n
//void wrt_backward() {
//	int c;
//	c = getchar();
//	putchar(c); //(1)
//	if (c == '\n') 	// exit
//		return;
//	else {                // general case
//		wrt_backward();
//		putchar(c); //(2)
//	}
//}
//
//void main() {
//	printf("Type a line:");
//	wrt_backward();
//	printf("\n");
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int factorial(int n) {
//	if (n == 0) return 1;
//	else return (n * factorial(n - 1));
//}
//
//void main() {
//	int num = 0;
//	printf("Type a number for factorial:");
//	scanf("%d", &num);
//	printf("%d! = %d\n", num, factorial(num));
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int iter_factorial(int n) {
//	int result = 1;
//	int k;
//	for (k = 1; k <= n; k++) {
//		result = result * k;
//	}
//	return result;
//}
//void main() {
//	int num = 0;
//	printf("Type a number for factorial:");
//	scanf("%d", &num);
//	printf("%d! = %d\n", num, iter_factorial(num));
//}


//#define _CRT_SECURE_NO_WARNINGS
//#define MAX 10
//#include <stdio.h>
//#include <stdlib.h>
//
//int sum_of(int a[], int n) {
//	if (n < 1 || n > MAX) {
//		printf("array boundary error");
//		exit(1);
//	}
//	else
//		if (n == 1)
//			return a[0];
//		else
//			return (a[n - 1] + sum_of(a, n - 1));
//}
//
//void main() {
//	int num = 4;
//	int arr[MAX] = { 20, 30, 10, 50, 15, 45, 80, 25 };
//	printf("Result: sum = %d\n", sum_of(arr, num));
//}

//
//#define _CRT_SECURE_NO_WARNINGS
//#define MAX 10
//#include <stdio.h>
//#include <stdlib.h>

//int sum_of(int *a, int n) {
//	int result = 0;
//	for (int i = 0; i <= n; i++) {
//		result += a[i];
//	}
//	return result;
//}

//int sum_of(int* a, int n) {
//	if (n == 0) // terminaitino condition
//		return a[0];
//	else // general case
//		return (a[n] + sum_of(a, n - 1));
//}
//
//void main() {
//	int num = 4;
//	int arr[MAX] = { 20, 30, 10, 50, 15, 45, 80, 25 };
//	printf("Result: sum = %d\n", sum_of(arr, num));
//}
//


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////double cal_power(float val, int pow) {
////	float result = 1;
////	for (int i = 1; i <= pow; i++) {
////		result *= val; // result = result * val;
////	}
////	return result;
////}
//double cal_power(float val, int pow) {
//	if (pow == 0)
//		return 1;
//	else
//		return (val * cal_power(val, pow - 1));
//}
//
//void main() {
//	float value = 0.0;
//	int power = 0;
//
//	printf("Type numbers (value, power):");
//	scanf("%f %d", &value, &power);
//	printf("Result: pow(%.1f, %d) = %.1lf\n", value, power, cal_power(value, power));
//}