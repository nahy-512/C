/* 1로 만들기 */
#include <stdio.h>
// 어디서.. 어떻게 가져와.....?
// dp에.. 뭘.. 넣어.....?
// dp는 배열 !! (별표 세 개)
// dp[10] = (dp[9] + 1) or (dp[5] + 1)

int dp[1000001] = {0, 0}; // dp[1]

int main() {
    int X, count = 0;

    scanf("%d", &X);

    for (int i = 2; i <= X; i++) { // 배열 저장
        dp[i] = dp[i-1];
        if (i % 2 == 0) {
            dp[i] = (dp[i/2] < dp[i]) ? dp[i/2] : dp[i];
        }
        if (i % 3 == 0) {
            dp[i] = (dp[i/3] < dp[i]) ? dp[i/3] : dp[i];
        }
        dp[i] += 1;
    }
    
    printf("%d", dp[X]);
    return 0;
}