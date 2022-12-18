#include <stdio.h>

int main() {
    int a = 13, b = 11;
    // 1101
    // 1011
    printf("a & b = %d\n", (a & b)); // 1001
    printf("a | b = %d\n", (a | b)); // 1111
    printf("a ^ b = %d", (a ^ b));   // 0110

    return 0;
}