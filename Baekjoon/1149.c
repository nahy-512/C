/* RGB 거리 */
#include <stdio.h>

int main() {
    int N; // 입력 개수(집) 설정
    int rgb[1001][3] = {0,0,0}; // rgb 입력 (0: R, 1: G, 2: B)
    int cost[1001][3] = {0,0,0}; // rgb 값에 따른 비용의 최솟값(dp)
    int result; // 총 비용의 최솟값

    scanf("%d", &N); // 집 개수 입력

    // RGB 색칠 비용 입력
    for (int i = 1; i <= N; i++) {
        scanf("%d %d %d", &rgb[i][0], &rgb[i][1], &rgb[i][2]);
    }

    // 첫 번째 값 세팅
    cost[1][0] = rgb[1][0]; cost[1][1] = rgb[1][1]; cost[1][2] = rgb[1][2]; 
    // 비용의 최솟값 저장(dp)
    for (int i = 2; i <= N; i++) {
        cost[i][0] = (cost[i-1][1] < cost[i-1][2]) ? cost[i-1][1] + rgb[i][0] : cost[i-1][2] + rgb[i][0];
        cost[i][1] = (cost[i-1][0] < cost[i-1][2]) ? cost[i-1][0] + rgb[i][1] : cost[i-1][2] + rgb[i][1];
        cost[i][2] = (cost[i-1][0] < cost[i-1][1]) ? cost[i-1][0] + rgb[i][2] : cost[i-1][1] + rgb[i][2];
    }

    // 총 비용의 최솟값 출력
    result = (cost[N][0] < cost[N][1]) ? cost[N][0] : cost[N][1];
    result = (result < cost[N][2]) ? result : cost[N][2];
    
    printf("%d", result);

    return 0;
}