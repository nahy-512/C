/* 계단 오르기 */
#include <stdio.h>

// dp[개수][0: 비워둘래, 1: 1일 때 최댓값, 2: 2일 때 최댓값]
int score[301][3] = {0,0,0};

int main() {
    int N, count = 1;
    // 각 계단의 점수
    int step[301] = {0};
    // result
    int result;
    

    scanf("%d", &N); // 계단 개수 입력
    for (int i = 1; i <= N; i++) {
        scanf("%d", &step[i]); // 계단 점수 입력
    }

    // 첫 번째 계단
    score[1][1] = step[1]; score[1][2] = step[1];
    //printf("score[1][1]: %d, score[1][2]: %d\n", score[1][1], score[1][2]);

    // 계단 최대 점수 계산
    for (int i = 2; i <= N; i++) {
        
        // 한 칸 건너뛰어 온 값 저장
        score[i][1] = score[i-1][2] + step[i];
        // 두 칸 건너뛰어 온 값 저장
        score[i][2] = (score[i-2][1] > score[i-2][2]) ? score[i-2][1] + step[i] : score[i-2][2] + step[i];
        //printf("score[%d][1]: %d, score[%d][2]: %d\n", i, score[i][1], i, score[i][2]);
    }

    result = (score[N][1] > score[N][2]) ? score[N][1] : score[N][2];
    printf("%d", result); // 총 점수의 최댓값 출력

    return 0;
}