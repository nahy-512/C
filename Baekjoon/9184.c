#include <stdio.h>

int w[51][51][51];
// if a <= 0 or b <= 0 or c <= 0, then w(a, b, c) returns:
//     1

// if a > 20 or b > 20 or c > 20, then w(a, b, c) returns:
//     w(20, 20, 20)

// if a < b and b < c, then w(a, b, c) returns:
//     w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c)

// otherwise it returns:
//     w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1)

// dp 테이블에 값이 있으면 그대로 출력, 없으면 계산 -> 탑다운, 바텀업

int func(int a, int b, int c) {

    if (a <= 0 || b <= 0 || c <= 0){
        return 1;
    }

    if (w[a][b][c] != 0) {
        return w[a][b][c];
    }

    if (a > 20 || b > 20 || c > 20) {
        return func(20, 20, 20); 
    }

    if (a < b && b < c) {
        w[a][b][c] = func(a, b, c-1) + func(a, b-1, c-1) - func(a, b-1, c);
        return  w[a][b][c];
    }
    else {
        w[a][b][c] = func(a-1, b, c) + func(a-1, b-1, c) + func(a-1, b, c-1) - func(a-1, b-1, c-1); 
        return w[a][b][c];
    }
};

int main() {

    int a, b, c;

    while (1) {
        printf("--\n");
        scanf("%d %d %d", &a, &b, &c); // 숫자 입력 받기

        if ( (a == -1) && (b == -1) && (c == -1)) break;

        else {
            int result = func(a, b, c); // 숫자 넘기기
            printf("w(%d, %d, %d) = %d\n", a, b, c, result); // 결과 출력
        }
    }
    
    return 0;
}