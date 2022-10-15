// 함수 이용해서 홀짝 판별
#include <stdio.h>

void determine(int a);
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    determine(num);
}
void determine(int num) {
    if (num % 2) {
        printf("%d is an odd number", num);
    }
    else printf("%d is an even number", num);
}