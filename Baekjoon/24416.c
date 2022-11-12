/* 피보나치 수열 */
#include <stdio.h>

// fib(n) {
//     if (n = 1 or n = 2)
//     then return 1;  # 코드1
//     else return (fib(n - 1) + fib(n - 2));
// }
// 피보나치 수 동적 프로그래밍 의사 코드는 다음과 같다.

// fibonacci(n) {
//     f[1] <- f[2] <- 1;
//     for i <- 3 to n
//         f[i] <- f[i - 1] + f[i - 2];  # 코드2
//     return f[n];
// }

int fib(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    else {
        return (fib(n - 1) + fib(n - 2));
    }
};
int fibonacci(int n) {
    int f[n + 1], count = 0;
    for ( int i = 1; i <= n; i++) {
        if (i == 1 || i == 2) f[i] = 1;
        else {
            f[i] = f[i- 1] + f[i - 2];
            count++;
        }
    }
    return count;
};

int main() {
    int num;
    scanf("%d", &num);
    int result1 = fib(num);
    int result2 = fibonacci(num);
    printf("%d %d", result1, result2);

    return 0;
}
