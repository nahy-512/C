/* 01타일 */
#include <stdio.h>
// 점화식을 세워라

int arr[1000001];

int main() {
    int N, count = 0;
    
    scanf("%d", &N);

    arr[1] = 1, arr[2] = 2; // defaults

    for (int i = 3; i <= N; i++) {
        arr[i] = (arr[i-1] + arr[i-2]) % 15746;
    }

    printf("%d", arr[N]);

    return 0;
}